#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
float calculadora(int num1, int num2,char caracter){
     int res;
     if(caracter=='+'){
        res=num1+num2;
     }
     if(caracter=='*'){
        res=num1*num2;
     }
     if(caracter=='/'){
       res=num1/num2;
     }
     if(caracter=='-'){
        res=num1-num2;
     }
   return res;
}
int main()
{
    int num1,num2;
    char caracter;
    while(caracter!='x'){

         cout<<"Ingrese en el siguiente formato"<<endl;
         cout<<"Primer numero/ Segundo numero / Operacion(+,-,*,/)"<<endl;
         cout<<"Ej: 1 * 2  >> devolvera 2"<<endl;
         cin>>num1>>caracter>>num2;
         if(caracter=='+' || caracter=='-' ||caracter=='/' ||caracter=='*'){
                cout << calculadora(num1,num2,caracter) << endl;
         }else{
                cout<<"ERROR CARACTER NO ADMITIDO"<<endl;
         }
        cout<<"Programa acaba si pone 'x' caso contrario presion cualquier caracter"<<endl;;
        caracter=getch();
        system("cls");
    }
    return 0;
}
