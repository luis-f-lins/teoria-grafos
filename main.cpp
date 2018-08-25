/*
* Universidade Federal do Rio de Janeiro
* Teoria dos Grafos 2018.2
* Trabalho da Disciplina - Parte 1
* Felipe Ferreira e Luis Fernando
*/

#include <stdio>
#include <stdlib>
#include <iostream>
#include <string>
#include <fstream>
#include "grafo.h"

using namespace std;

int main (int argc, char *argv[]){

  string line;

  if (argc != 2){
    cout << "Please, provide a text file with the graph description" << endl;
    exit(1);
  }

  ifstream file ("test.txt", ifstream::in);

  getline(file, line);

  Graph graph = new Graph(strtoul(line, NULL, 10));

  while (file.good()) {
    //cout << line << endl;
    
    getline(file, line);
  }

  file.close();
}
