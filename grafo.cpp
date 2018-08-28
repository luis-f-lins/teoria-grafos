/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#include <algorithm>
#include "grafo.h"

using namespace std;

ostream & operator<<(std::ostream & output, Graph &graph){
  vector <unsigned> *neighbours;
  for (unsigned i=1; i <= graph.getNumberOfVertices(); ++i){
    output << i << "-->";
    neighbours = graph.getVertex(i)->getNeighbours();
    for (unsigned j=0; j < (*neighbours).size(); ++j){
      output << neighbours->at(j) << ", ";
    }
    output << endl;
  }
  return output;
}
Graph::Graph (unsigned numberOfVertices): mVertices(numberOfVertices+1){
  mNumberOfVertices = numberOfVertices;
}
Vertex* Graph::getVertex(unsigned vertex) {
  return &mVertices.at(vertex);
}
unsigned Graph::getNumberOfEdges (){
  unsigned numberOfEdges = 0;

  for (unsigned i=1; i <= mNumberOfVertices; i++){
    numberOfEdges =+ (*this).getVertex(i)->getDegree();
  }
  numberOfEdges = numberOfEdges/2;
  return numberOfEdges;
}
unsigned Graph::getNumberOfVertices () const{
  return mNumberOfVertices;
}
unsigned Graph::getMinDegree (){
  unsigned minDegree;

  for (unsigned i=1; i <= mNumberOfVertices-1; i++){
    minDegree = min((*this).getVertex(i)->getDegree(), (*this).getVertex(i)->getDegree());
  }
  return minDegree;
}
unsigned Graph::getMaxDegree (){
  unsigned maxDegree;

  for (unsigned i=1; i <= mNumberOfVertices-1; i++){
    maxDegree = max((*this).getVertex(i)->getDegree(), (*this).getVertex(i)->getDegree());
  }
  return maxDegree;
}
unsigned Graph::getAvgDegree () {
  return ((*this).getNumberOfEdges()*2)/mNumberOfVertices;
}
unsigned Graph::getMedianDegree () {
  unsigned size = mNumberOfVertices;

  if (size % 2){
    return (*this).getVertex(size/2)->getDegree();
  }
  return ((*this).getVertex(size/2 -1)->getDegree() + (*this).getVertex(size/2)->getDegree())/2;
}
