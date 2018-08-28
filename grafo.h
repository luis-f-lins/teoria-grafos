/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#ifndef GRAFO_H
#define GRAFO_H "grafo.h"

#include <ostream>
#include "vertice.h"

class Graph {

  friend ostream & operator<<(std::ostream &, Graph &);

  public:
    Graph(unsigned);

    Vertex* getVertex (unsigned);
    unsigned getNumberOfEdges ();
    unsigned getNumberOfVertices () const;
    unsigned getMinDegree ();
    unsigned getMaxDegree ();
    unsigned getAvgDegree ();
    unsigned getMedianDegree ();

  private:
    unsigned mNumberOfVertices;
    vector <Vertex> mVertices;
};

#endif
