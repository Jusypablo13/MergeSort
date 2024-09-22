#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& left, vector<int>& right, vector<int>& numeros){
    int leftSize = left.size();
    int rightSize = right.size();

    //Indices para recorrer los arreglos
    int i = 0;
    int l = 0;
    int r = 0;
    
    // Main Loop
    while(l < leftSize && r < rightSize){
        if(left[l] < right[r]){
            numeros[i] = left[l];
            i++;
            l++;
        }
        else{
            numeros[i] = right[r];
            i++;
            r++;
        }
    }
    while(l < leftSize){
        numeros[i] = left[l];
        i++;
        l++;
    }
    while(r < rightSize){
        numeros[i] = right[r];
        i++;
        r++;
    }
}

void mergeSort(vector<int>& numeros){
    int n = numeros.size(); //Size del arreglo
    if(n <= 1) return; //Si el arreglo tiene 1 o 0 elementos, ya está ordenado
    int center = n / 2; //Centro del arreglo

    vector<int> left(center); //Arreglo izquierdo
    vector<int> right(n - center); //Arreglo derecho
    
    //Crear arreglos izquierdo y derecho con el size  de inicial basado en el lenght del arreglo
    for(int i = 0; i < n; i++){
        if(i < center){
            left[i] = numeros[i]; //Llenar el arreglo izquierdo
        }else{
            right[i - center] = numeros[i]; //Llenar el arreglo derecho
        }
    }
    //Dividir
    mergeSort(left); //Ordenar el arreglo izquierdo
    mergeSort(right); //Ordenar el arreglo derecho

    //Combinar
    merge(left, right, numeros); //Combinar los arreglos izquierdo y derecho
}

int main(){
    vector<int> numeros = {12, 3, 7, 9 , 14, 6, 11, 2};
    mergeSort(numeros);

    for(int num: numeros){
        cout << num << ", ";
    }
    return 0;
}