#include <iostream>
using namespace std;
int main()
    {
       float Corto1=0;
       float Corto2=0;
       float Parcial1=0;
       float Parcial2=0;
       float Laboratorios=0;
       float Proyecto=0;
       
        cout <<"Introduzca el valor de cada uno de sus porcentajes: "<< "\n";
        cout <<"Introduzca el valor de su Primer Corto: "<< "\n";
        cin >> Corto1;
        cout <<"Introduzca el valor de su Segundo Corto: "<< "\n";
        cin >> Corto2;
        cout <<"Introduzca el valor de su Primer Parcial: "<< "\n";
        cin >> Parcial1;
        cout <<"Introduzca el valor de su Segundo Parcial: "<< "\n";
        cin >> Parcial2;
        cout <<"Introduzca el valor de sus Laboratorios: "<< "\n";
        cin >> Laboratorios;
        cout <<"Introduzca el valor de su Proyecto: "<< "\n";
        cin >> Proyecto;
        
        float resultadoC1=Corto1*0.1;
        float resultadoC2=Corto2*0.1;
        float resultadoP1=Parcial1*0.15;
        float resultadoP2=Parcial2*0.2;
        float resultadoL=Laboratorios*0.2;
        float resultadoPyt=Proyecto*0.25;
       
       float Promedio=resultadoC1+resultadoC2+resultadoP1+resultadoP2+resultadoL+resultadoPyt;
      
       if (Promedio>6)
        {
          cout << "Has pasado con: "<<Promedio<<"\n";
        }
        else if (Promedio<6)
        {
          cout << "No has logrado pasar, obtuviste: "<<Promedio<<"\n";    
        }    
    }