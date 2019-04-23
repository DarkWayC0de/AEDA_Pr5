#include <iostream>
#include "../include/Ordenacion.h"
#include "../include/DNI.h"
#include <ctime>
#include <cstdlib>
int main() {
  srand(time(0));
  std::cout << "Practica 5 de AEDA\n"
               "Introduce el tamaño del vector implentar: ";
  int size;
  int metodo;
  std::cin>> size;
  std::vector<DNI> v(size);
  for (int i = 0; i <size ; ++i) {
    long long int dni;
    dni = rand() % 1000000;
    v[i] = dni;
  }

  std::cout<<"Metodos existentes\n"
             "\t1.Seleccion\n"
             "\t2.Intercambio: Sacudida\n"
             "\t3.HeapSort\n"
             "\t4.MergeSort\n"
             "\t5.ShellSort\n"
             "\t6.Burbuja\n"
             "Selecione el metodo a utilizar: ";
  std::cin >>metodo;
  DNI bn(888888888);
  switch (metodo){
    case 1 :
      Selec(v,0,size-1);
      std::cout<<"El vector final es \n";
      mostrado_comparacion(v,bn,bn);
      break;
    case 2 :
      Inter_Sac(v,0,size-1);
      std::cout<<"El vector final es \n";
      mostrado_comparacion(v,bn,bn);
      break;
    case 3:
      HeapSort(v,0,size-1);
      std::cout<<"El vector final es \n";
      mostrado_comparacion(v,bn,bn);
      break;
    case 4:
      MergeSort(v,0,size-1);
      std::cout<<"El vector final es \n";
      mostrado_comparacion(v,bn,bn);
      break;
    case 5:
      std::cout<<"Introduce el alpha a emplear: ";
      double alpha;
      std::cin>> alpha;
      ShellSort(v,0,size-1,alpha);
      std::cout<<"El vector final es \n";
      mostrado_comparacion(v,bn,bn);
      break;
    case 6:
      Burbuja(v,0,size-1);
      std::cout<<"El vector final es \n";

      mostrado_comparacion(v,bn,bn);
      break;
    default:
      std::cout<<"Metodo selecionado no valido";
  }

  return 0;
}