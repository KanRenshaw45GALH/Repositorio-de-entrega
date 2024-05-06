// "Esto genera un comentario"
#include <iostream>                              //"#include <iostream>" Permite el ingreso de los lenguajes de programación
using namespace std;                             //
int main()
{
       char Color;                               //Se declaran las variables res y dia
       cout << "Ingrese una letra: ";            //Cout permite la solicitud o salida de datos
       cin >> Color;                             //Cin permite el ingreso de datos
       //res = día;                              //Res permite la comparación del switch
       switch (Color)                            //Switch permite la creación de casos dependiendo de las deribaciones
       {
            case 'R': //Caso 0
            cout << Color << "Rojo\n" ;
            break;                               //Break permite el cierre de cada caso

            case 'Y': //Caso 1
            cout << Color << "Amarillo\n" ;
            break;

            case 'B': //Caso 2
            cout << Color << "Azul\n" ;
            break;

            case 'W': //Caso 3
            cout << Color << "Blanco\n" ;
            break;
          
            case 'K': //Caso 4
            cout << Color << "Negro\n" ;
            break;

            case 'C': //Caso 5
            cout << Color << "Cian\n" ;
            break;

            case 'G': //Caso 6
            cout << Color << "Verde\n" ;
            break;

            default: //Error
            cout << "No existe ese color\n" ;

       }
       return 0;
    }