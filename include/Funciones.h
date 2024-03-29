//
// Created by darkwaycode on 9/04/19.
//

#ifndef PR5_FUNCIONES_H
#define PR5_FUNCIONES_H

#include <vector>

template<class T>
void ordenarv(std::vector<T> v1,int start1,int end1,std::vector<T> v2,int start2,int end2, std::vector<T> &v,int start,int end){
  int j(start1),k(start2);
  for (int i = start; i <=end ; ++i) {
    if(((v1[j] < v2[k])||k==end2+1)&& (j<=end1)){
      v[i] = v1[j];
      j++;
    } else {
      v[i] = v2[k];
      k++;
    }
  }
}


template<class T>
void swap(T &a,T &b){
  T aux =a;
  a = b;
  b = aux;
}
template <class T>
void mostrado_comparacion(std::vector<T> &v, T el1, T el2){
  for (int i = 0; i <v.size() ; ++i) {
    if(v[i]==el1 || v[i]==el2){
      std::cout << "\t[" << v[i]<<"]";
    }else {
      std::cout << "\t" << v[i] ;
    }
  }
  std::cout<<"\n";
}


#endif //PR5_FUNCIONES_H
