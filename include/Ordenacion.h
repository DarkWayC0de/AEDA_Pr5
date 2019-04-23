//
// Created by darkwaycode on 9/04/19.
//

#ifndef PR5_ORDENACION_H
#define PR5_ORDENACION_H

#include <vector>
#include "Funciones.h"

template <class T>
void Heap(std::vector<T> &v,int start,int end){
  int candidato(start);
  int izquierda(2*start+1),derecha(2*start+2);
  if((izquierda<end)&&(v[izquierda]>v[candidato])){
    candidato=izquierda;
  }
  if((derecha<end)&&(v[derecha]>v[candidato])){
    candidato=derecha;
  }
  if(candidato!= start){
    swap(v[start],v[candidato]);
    Heap(v,candidato,end);
  }
}

template <class T>
void AlphaSort(std::vector<T> &v, int start, int end, int alpha){
  for (int i = alpha; i <=(end-start+1); i++) {
    int j(i);
    while ((j>alpha)&&(v[i] <v[j-alpha])){
      //TODO no entra nuca aquí
      v[j]=v[j-alpha];
      j-=alpha;
    }
    v[j]=v[i];
  }
}

template <class T>
void Selec(std::vector<T> &v,int start,int end){
  int paso(1);
  int intercambios(1);
  for (int i = start; i<end; ++i){
    int mid=i;
    for (int j= i+1; j<end + 1; ++j) {
      std::cout<<"Comparacion "<<paso++<<"\n";
      mostrado_comparacion(v,v[i],v[j]);
      if (v[j] < v[mid]) {
        mid = j;
      }
    }
    swap(v[mid],v[i]);
    std::cout<< "Itercambio "<<intercambios++<<" resultado \n";
    mostrado_comparacion(v,v[mid],v[i]);
  }
}


template <class T>
void Inter_Sac(std::vector<T> &v,int start,int end){
  int inicio=start+1,final=end,cadidato=end;
  while(inicio<final){
    for (int i = final; i >=inicio ; i--) {
      if(v[i]<v[i-1]){
        swap(v[i],v[i-1]);
        cadidato=i;
      }
    }
    inicio =cadidato +1;
    for (int j = inicio; j <= final ; j++) {
      if(v[j]<v[j-1]){
        swap(v[j],v[j-1]);
        cadidato=j;
      }
    }
    final=cadidato-1;
  }
}

template <class T>
void HeapSort(std::vector<T> &v, int start, int end){
  //TODO Solo funciona si el vector empieza en cero
  for (int i = (((end - start)+1)/2)-1; i>=start; i--) {
    Heap(v,i,((end - start)+1));
  }
  for (int j = end; j >=start; j--) {
    swap(v[start],v[j]);
    Heap(v,start,j-1);
  }
}

template <class T>
void MergeSort(std::vector<T> &v,int start, int end){
  if(start < end ){
    MergeSort(v, start, start+(end-start)/2);
    MergeSort(v, (start+(end-start)/2)+1, end);
    ordenarv<T>(v, start, start+(end-start)/2, v, (start+(end-start)/2)+1, end, v, start, end);
  }
}

template <class T>
void ShellSort(std::vector<T> &v, int start, int end, double alpha){
  if (alpha<1 && alpha>0){
     int auxalpha =(end-start) + 1;
     while(auxalpha>1){
       auxalpha=static_cast<int>(auxalpha * alpha);
       AlphaSort(v,start,end,alpha);
     }
  }
}
template<class T>
void Burbuja(std::vector<T> &v, int start, int end){
  int paso(1);
  int intercambios(1);
  for (int i = start; i <end-start+1; ++i) {
    for (int j = start; j <i; ++j) {
      std::cout<<"Comparacion "<<paso++<<"\n";
      mostrado_comparacion(v,v[i],v[j]);
      if(v[i]<v[j]){
        swap(v[i],v[j]);
        std::cout<< "Itercambio "<<intercambios++<<" resultado \n";
        mostrado_comparacion(v,v[i],v[j]);
      }
    }
  }
}




#endif //PR5_ORDENACION_H
