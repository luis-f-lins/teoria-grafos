/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#include <algorithm>
#include "grafo.h"

Vertex::Vertex (unsigned index){
  mIndex = index;
}
void Vertex::setNeighbour (unsigned neighbour){
  mNeighbours.push_back(neighbour);
}
unsigned Vertex::getIndex () const{
  return mIndex;
}
void Vertex::getNeighbours (vector <unsigned> &neighbours) const{
  neighbours = mNeighbours;
}
unsigned Vertex::getDegree () const{
  return mNeighbours.size();
}
void Vertex::sortNeighbours (){
  sort(&mNeighbours.at(0), &mNeighbours.at(mNeighbours.size()-1));
}
