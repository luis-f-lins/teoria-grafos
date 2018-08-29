/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

//#include <cstdio>
//#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include "grafo.h"

using namespace std;

int main (int argc, char *argv[]){

  string line;
  unsigned vertex1, vertex2;

  if (argc != 2){
    cout << "Please, provide a text file with the graph description" << endl;
    exit(1);
  }

  ifstream file ("test.txt", ifstream::in);

  getline(file, line);

  Graph graph(stoul(line));

  getline(file, line);
  cout << "Graph size: " << graph.getNumberOfVertices() << endl;
  while (file.good()) {
    //cout << line << endl;
  string vertex1, vertex2;
  file>> vertex1>> vertex2;
    //cout << "Vertex 1: " << vertex1 << endl;
    //cout << "Vertex 2: " << vertex2 << endl;
    graph.getVertex(vertex1)->setNeighbour(vertex2);
    graph.getVertex(vertex2)->setNeighbour(vertex1);

    getline(file, line);
  }
  cout << graph;

  file.close();

  cout << "Numero de Vertices: " << graph.getNumberOfVertices() << endl;
  cout << "Numero de Arestas: " << graph.getNumberOfEdges() << endl;
  cout << "grau minimo: " << graph.getMinDegree() << endl;
  cout << "grau maximo: " << graph.getMaxDegree() << endl;
  cout << "grau medio: " << graph.getAvgDegree() << endl;
  cout << "grau mediano: " << graph.getMedianDegree() << endl;

}
