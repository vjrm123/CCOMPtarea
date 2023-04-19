#include <iostream>

using namespace std;

int diferencia(int numero){
    int suma_cuadrados=0;
    int suma=0;

    for(int i=1; i<=numero; i++){
        suma_cuadrados += i*i;
        suma +=i;
    }
    int cuadrado_suma = suma*suma;
    int diferencia = cuadrado_suma - suma_cuadrados;

    return diferencia;
}

int main(){

    int numero =10;
    cout<<"la diferencia es: "<<diferencia(numero)<<endl;

    return 0;
}