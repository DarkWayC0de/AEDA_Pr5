//
// Created by darkwaycode on 9/04/19.
//

#ifndef PR5_ORDENACION_H
#define PR5_ORDENACION_H

#include <vector>
#include "Funciones.h"

template <class T>
void Selec(std::vector<T> &v,int start,int end){
  for (int i = start; i<end; ++i){
    int mid=i;
    for (int j= i+1; j<end + 1; ++j) {
      if (v[j] < v[mid]) {
        mid = j;
      }
    }
    swap(v[mid],v[i]);
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
  //TODO Implementar HeatSort
}

template <class T>
void MergeSort(std::vector<T> &v,int start, int end){
  if(start < end ){
    MergeSort(v, start, start+(end-start)/2);
    MergeSort(v, (start+(end-start)/2)+1, end);
    ordenarv<T>(v, start, start+(end-start)/2, v, (start+(end-start)/2)+1, end, v, start, end);
  }
}



#endif //PR5_ORDENACION_H
