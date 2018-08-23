/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#include "grafo.h"

ostream & operator<<(std::ostream & output, const Graph &graph){
  vector <unsigned> neighbours;
  for (unsigned i=0; i < graph.size(); ++i){
    output << graph.at(i).getIndex() << "-->";
    graph.at(i).getNeighbours(neighbours);
    for (unsigned j=0; j < neighbours.size(); ++j){
      output << neighbours.at(j) << ", ";
    }
    output << endl;
  }
  return output;
}
