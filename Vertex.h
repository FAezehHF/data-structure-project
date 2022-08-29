#pragma once
#include <vector>
#include "Edge.h"
class Vertex
{
private:
	vector<Edge> edges;
	string name;
public:
	Vertex(vector<Edge> edg, string name)
	{
		this->name = name;
		for (int i = 0; i < edg.size(); i++)
		{
			edges.push_back(edg[i]);
		}
	}
	Vertex()
	{

	}
	void add_vertex(string name, vector<Edge> edg)
	{
		this->name = name;
		for (int i = 0; i < edg.size(); i++)
		{
			edges.push_back(edg[i]);
		}
	}
	void clear_vertex()
	{
		this->edges.clear();
		this->name = "";
	}
	string getVertexName()
	{
		return this->name;
	}
	vector<Edge> getEdges()
	{
		return edges;
	}

};

