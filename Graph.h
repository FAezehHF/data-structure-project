#pragma once
#include "Vertex.h"
#include <vector>
#include <algorithm>
class TempString
{
public:
	string s1;
	string s2;
};
class Graph
{
public:
	vector<Vertex> vertices;
	string shortest_path(string start, string finish)
	{
		vector<TempString> *previous = new vector<TempString>();
		vector<Edge> *distances = new vector<Edge>();
		vector<string> *nodes = new vector<string>();
		vector<string> *path = new vector<string>();

		string returnPath = "";
		
		for (int i = 0; i < vertices.size(); i++)
		{
			string x = vertices.at(i).getVertexName();
			if (x == start)
			{
				distances->push_back({ x,1 });
			}
			else
			{
				distances->push_back({ x,INT_MAX });
			}
			nodes->push_back(x);
		}
		while (nodes->size() != 0)
		{

			string smallest = nodes->at(0);
			nodes->erase(nodes->begin() + 0);
			if (smallest == finish)
			{
				path->clear();

				bool f = false;
				do
				{
					f = false;
					int l = 0;
					for ( ; l < previous->size(); l++)
					{
						f = false;
						if (previous->at(l).s1 == smallest)
						{
							f = true;
							break;
						}
					}
					if (f == false)
					{
						break;
					}
					path->push_back(smallest);
					smallest = previous->at(l).s2;

				} while (f);
				break;
			}

			bool f = false;
			for (int i = 0; i < distances->size(); i++)
			{
				if (distances->at(i).getDestination() == smallest)
				{
					if (distances->at(i).getCost() == INT_MAX)
					{
						f = true;
						break;
					}
				}
			}
			if (f == true)
			{
				break;
			}

			int indexOfSmallest = -1;
			for (int i = 0; i < vertices.size(); i++)
			{
				if (vertices.at(i).getVertexName() == smallest)
				{
					indexOfSmallest = i;
					break;
				}
			}


			vector<Edge> neighbor = vertices.at(indexOfSmallest).getEdges();//

			for (int i = 0; i < neighbor.size(); i++)
			{
				int indexOFSmallestInDistances = -1;
				for (int j = 0; j < distances->size(); j++)
				{
					if (distances->at(i).getDestination() == smallest)
					{
						indexOFSmallestInDistances = j;
						break;
					}
				}
				if (indexOFSmallestInDistances == -1)
				{
					continue;
				}
				double alt = neighbor.at(i).getCost() + distances->at(indexOFSmallestInDistances).getCost();
				string neighborName = neighbor.at(i).getDestination();
				int indexOFNeighbor = -1;
				for (int j = 0; j < neighbor.size(); j++)
				{
					if (neighbor.at(j).getDestination() == neighborName)
					{
						indexOFNeighbor = j;
						break;
					}
				}
				if (indexOFNeighbor == -1)
				{
					continue;
				}
				if (alt < distances->at(indexOFNeighbor).getCost())
				{
					distances->at(indexOFNeighbor).setCost(alt);
					previous->push_back({ neighborName,smallest });
				}
			}
		}
		path->push_back(start);
		for (int l = 0; l < path->size(); l++)
		{
			returnPath += "-->" + path->at(l);
		}
		return returnPath;
	}
};

