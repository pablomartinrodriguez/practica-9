#include<iostream>
#include<sstream>
#include<cmath>
#include<string.h>

using namespace std;

bool numeroPrimo(int n);

int main (int argc, char* argv[]){
    int n, mersenne;
    char help[100], comando[]="--help";
    if(argc==1){
        cout<<"Falta un número natural como parámetro, pruebe 'mersenne --help' para más información."<<endl;cin>>help;
        if(strcmp(help,comando)==0){
            cout<<"Este programa conta de que al introducir un número natural por linea de comandos este devuelve los n primeros números primos de mersenne."<<endl;
        }
    }
    else if(argc>1){
        stringstream converter(argv[1]);
        converter>>n;
        for(int i=1;i<=n;i++){
            if (numeroPrimo(i)){
                mersenne=pow(2,i)-1;
                cout<<mersenne<<endl;
            }    
        }
    }
    return 0;
}
bool numeroPrimo(int n){
    bool condicion;
    if (n != 1 && n!=0){
        for (int i=2; i<=n; i++){
            if (n % i ==0){
                if (n==i){
                    condicion=true;
                }
                else {
                    condicion=false;
                    return condicion;
                } 
            }
        } 
    } 
    else condicion = false;
    return condicion;

}