#include<iostream>
#include<sstream>
#include<stdlib.h>
#include<ctime>
#include<vector>
#include<math.h>

using namespace std;
//Declaración de funciones:
int producto(float vector[],int componentes);
int suma(float vector[],int componentes);
float funcionMedia(float vector[], int componentes);
int maximo(float vector[],int componentes);
int minimo(float vector[],int componentes,int rango2);

int main(int argc, char* argv[]){
    int componentes, rango1, rango2;
    float vector[componentes];
    stringstream converter(argv[1]);
    converter>>componentes;
    stringstream converter2(argv[2]);
    converter2>>rango1;
    stringstream converter3(argv[3]);
    converter3>>rango2;
    srand(time(NULL));
    for(int i=0;i<componentes;i++){
        vector[i]= rango1 + rand()%rango2;
    }
    cout<<"Media:  "<<funcionMedia(vector,componentes)<<endl;
    cout<<"Máximo:  "<<maximo(vector,componentes)<<endl;
    cout<<"Minimo:  "<<minimo(vector,componentes,rango2)<<endl;
    cout<<"Suma:  "<<suma(vector,componentes)<<endl;
    cout<<"Producto:  "<<producto(vector,componentes)<<endl;
    for(int i=0;i<componentes;i++){
      cout<<"componentes:   "<<vector[i]<<endl;  
    }
    return 0;
}
//Desarrollo de funciones:
float funcionMedia(float vector[], int componentes){
    float suma, media;
    for (int i=0; i< componentes; i++){
        suma = suma + vector[i];
    } 
    media=suma/componentes;
    return media;
}
int maximo(float vector[], int componentes){
    int mayor=0;
    for (int i=0;i < componentes;i++){
        if (vector[i] > mayor){
            mayor=vector[i];
        }
    }
    return mayor;
}
int minimo(float vector[],int componentes,int rango2){
    int menor;
    menor=rango2;
    for (int i=0;i < componentes;i++){
        if (vector[i] < menor){
            menor=vector[i];
        }
    }
    return menor;
}
int suma(float vector[],int componentes){
    int sumam=0;
    for (int i=0; i< componentes; i++){
        sumam = sumam + vector[i];
    } 
    return sumam;
}
int producto(float vector[],int componentes){
    int producto=1;
    for(int i=0;i<componentes;i++){
        producto=producto*vector[i];
    }
    return producto;
}