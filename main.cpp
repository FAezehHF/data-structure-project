// DijkstraCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Graph.h"
#include "Vertex.h"
#include "Edge.h"
using namespace std;


int main()
{
    Graph g;
    Vertex v;

    vector<Edge> edg = { {"b",0.2},{"c",0.3},{"d",0.2} };
    v.add_vertex("shandiz haji", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"c",1.40},{"d",1.30} };
    v.add_vertex("b", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"d",0.2},{"e",2.4} };
    v.add_vertex("c", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();


    edg = { {"f",1.9},{"g",2.1} };
    v.add_vertex("d", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"g",1.9},{"i",3} };
    v.add_vertex("e", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"g",2} };
    v.add_vertex("f", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();
    
    edg = { {"h",0.1} };
    v.add_vertex("g", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"j",0.1},{"l",3.5} };
    v.add_vertex("h", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"h",0.2},{"o",4.1} };
    v.add_vertex("i", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"k",1.1} };
    v.add_vertex("j", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"n",1.8} };
    v.add_vertex("k", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"m",0.8} };
    v.add_vertex("l", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"p",0.2} };
    v.add_vertex("m", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"m",0.6}};
    v.add_vertex("n", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"l",1.2} };
    v.add_vertex("o", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    edg = { {"-",0}};
    v.add_vertex("p", edg);
    edg.clear();
    g.vertices.push_back(v);
    v.clear_vertex();

    string path = g.shortest_path("shandiz haji", "p");
	cout << path;
	return 0;
}
