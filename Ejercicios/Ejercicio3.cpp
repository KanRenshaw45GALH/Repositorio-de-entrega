#include <iostream>
using namespace std;
int main()
    {
       float angulo=0;
        cout <<"Introduzca un angulo: ";
        cin >> angulo;
       
       if(angulo>90)
       {
        cout <<"Es un angulo Obtuso ";
       }
       else if (angulo==90)
       {
        cout <<"Es un angulo Recto ";   
       }
       else if (angulo<90)
       {
        cout <<"Es un angulo Agudo ";   
       }
    }