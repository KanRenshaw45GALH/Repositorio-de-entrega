#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    //int x;
    //int*apuntador = &x;
    //cout<<"Ingrese un numero entero:"<<"\n";
    //cin>>*apuntador;
    //delete[] apuntador;
    //apuntador = NULL;
    //cout << "Usted ingreso el numero: "<< x <<"\n";
    //cout<<"El espacio de memoria de la variable es: "<< apuntador<< "\n";

            //for(int i= 0; i<argc; i++)
            //{
            //    cout << argv[i] <<"\n";
            //}
    
    int x;
    int*edad = &x;
    cout<<"Ingrese su edad: "<<"\n";
    cin>>*edad;
    if(*edad>=18)
        cout<<"Usted es mayor de edad."<<"\n";
        else
        cout<<"Usted es menor de edad."<<"\n";

    delete[] edad;
    edad = NULL;

    cout << "Usted ingreso el numero: "<< x <<"\n";
    cout<<"El espacio de memoria de la variable es: "<< &edad<< "\n";


    return 0;
}