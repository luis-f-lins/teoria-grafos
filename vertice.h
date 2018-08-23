/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#ifndef VERTICE_H
#define VERTICE_H "vertice.h"

#include <vector>

using namespace std;

class Vertex {
  public:
    Vertex (unsigned);

    void setNeighbour (unsigned);

    unsigned getIndex() const;
    void getNeighbours (vector <unsigned> &) const;
    unsigned getDegree() const;

    void sortNeighbours ();

  private:
    unsigned mIndex;
    vector <unsigned> mNeighbours;
};

#endif
