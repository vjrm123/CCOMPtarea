#include <iostream>

using namespace std;

bool esnumeroprimo(int numero){
    int contador=0;
    for(int i=2; i*i<=numero; i++){
        if(numero % i == 0){
            contador++;
            if(contador>2){
                return false;
                break;
            }
        }
    }
    return true;
    return false;
}

long long sumarprimos(long long numero){
    long long suma =0;
    for(int i=2; i<numero; i++){
        if(esnumeroprimo(i)){
            suma+=i;
        }
    }
    return suma;
}

int main(){
    long long numero = 2000000;
    cout<<"la suma de los numeros primos es: "<<sumarprimos(numero)<<endl;

    return 0;
}
