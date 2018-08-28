/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#include <algorithm>
#include <iostream>
#include "grafo.h"

Vertex::Vertex (){
}
//Vertex::~Vertex(){
//  cout << "I WAS DESTROYED" << endl;
//}
void Vertex::setNeighbour (unsigned neighbour){
  mNeighbours.push_back(neighbour);
}
vector <unsigned>* Vertex::getNeighbours (){
  return &mNeighbours;
}
unsigned Vertex::getDegree () const{
  return mNeighbours.size();
}
void Vertex::sortNeighbours (){
  sort(&mNeighbours.at(0), &mNeighbours.at(mNeighbours.size()-1));
}
