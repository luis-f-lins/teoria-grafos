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

class Graph: public vector <Vertex>{

  friend ostream & operator<<(std::ostream &, const Graph &);

  public:
    Graph(Vertex);

    unsigned getNumberOfEdges ();
    unsigned getNumberOfVertices ();
    unsigned getMinDegree ();
    unsigned getMaxDegree ();
    unsigned getAvgDegree ();
    unsigned getMedianDegree ();

  private:
};

#endif
