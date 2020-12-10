#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

int main(int argc, char *argv[]){
    int numero=0, temporal=0;
    int divisor=1, resultado, total,contador,final;
    stringstream converter(argv[1]);
    converter>>numero;
    temporal=numero;
    final=numero;
    while(temporal/10!=0){
        temporal=temporal/10;
        divisor=divisor*10;
        contador++;
    }
    while(divisor!=0){
        resultado=numero/divisor;
        numero=numero%divisor;
        divisor=divisor/10;
        total=total+pow(resultado,contador+1);
    }
    if(total==final){
        cout<<"Es un número Armstrong."<<endl;
    }
    else{
        cout<<"No es un número Armstrong."<<endl;
    }
    
    cout<<"Porque la suma es:  "<<total<<endl;
    return 0;
}

