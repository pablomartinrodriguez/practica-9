#include<iostream>
#include<string.h>
#include<sstream>

using namespace std;

int main (int argc, char* argv[]){
    char caracter;
    char palabra[100];
    int orden=-1;
    stringstream converter1(argv[1]);
    converter1>>palabra;
    stringstream converter2(argv[2]);
    converter2>>caracter;
    for(int i=0;i<strlen(palabra);i++){
        if (palabra[i]==caracter){
            orden=orden+i+2;
        }
    }
    cout<<orden<<endl;   
    return 0;
}