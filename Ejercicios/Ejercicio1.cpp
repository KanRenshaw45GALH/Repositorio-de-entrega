#include <iostream>
using namespace std;
int main()
    {
       float Alfa=0;
       float Beta=0;
       
        cout <<"Ingrese dos angulos: "<<"\n";
        cout <<"Ingrese el primer angulo : "<<"\n"; 
        cin >> Alfa;
        cout <<"Ingrese dos angulosel segundo angulo: ";
        cin >> Beta;
       
       float SumAng =Alfa+Beta;
       float Resultado= 180-SumAng;
       
        cout <<"Su tercer angulo es: "<<"\n";
        cout << Resultado;

       if(SumAng>180)
         {
            cout <<"La suma de sus angulos es mayor a 180 ";
         }
    }