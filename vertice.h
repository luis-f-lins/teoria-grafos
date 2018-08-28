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
    Vertex ();
    //~Vertex();
    void setNeighbour (unsigned);

    vector <unsigned>* getNeighbours();
    unsigned getDegree() const;

    void sortNeighbours ();

  private:
    vector <unsigned> mNeighbours;
};

#endif
