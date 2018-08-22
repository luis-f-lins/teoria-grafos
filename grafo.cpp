/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#include <algorithm>
#include "grafo.h"

Vertex::Vertex (unsigned index, unsigned &neighbours, unsigned numOfNeighbours){
  mIndex = index;
  mNumOfNeighbours = numOfNeighbours;
  &mNeighbours = neighbours;
}

unsigned Vertex::getIndex (){
  return mIndex;
}
void Vertex::getNeighbours (unsigned &neighbours, unsigned numOfNeighbours){
  neighbours = &mNeighbours;
  numOfNeighbours = mNumOfNeighbours;
}
unsigned Vertex::getDegree (){
  return mNumOfNeighbours;
}
void Vertex::sortNeighbours (){
  sort(&mNeighbours, &mNeighbours+(mNumOfNeighbours-1));
}
