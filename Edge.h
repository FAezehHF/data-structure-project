#pragma once
#include <string>

using namespace std;
class Edge
{
private:
	string destination;
	double cost;
public:
	Edge(string des, double cost)
	{
		this->destination = des;
		this->cost = cost;
	}
	string getDestination()
	{
		return this->destination;
	}
	double getCost()
	{
		return this->cost;
	}
	void setCost(double ct)
	{
		this->cost = ct;
	}
};

