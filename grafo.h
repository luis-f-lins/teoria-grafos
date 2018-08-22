/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#ifndef GRAPH_H
#define GRAPH_H "grafo.h"

#include <vector>
#include <ostream>

using namespace std;

class Vertex {
  public:
    Vertex (unsigned, unsigned &, unsigned=0);

    unsigned getIndex();

    void getNeighbours (unsigned &, unsigned);
    unsigned getDegree();

    void sortNeighbours ();

  private:
    unsigned mIndex;
    unsigned mNeighbours[];
};

class Graph: vector <Vertex>{

  friend ostream & operator<<(std::ostream &, const Graph &);

  public:
    Graph(Vertex);

    void setVertex (Vertex);

    unsigned getNumberOfEdges ();
    unsigned getNumberOfVertices ();
    unsigned getMinDegree ();
    unsigned getMaxDegree ();
    unsigned getAvgDegree ();
    unsigned getMedianDegree ();

  private:
};

#endif
