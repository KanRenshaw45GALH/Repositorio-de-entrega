// "Esto genera un comentario"
#include <iostream>                          //"#include <iostream>" Permite el ingreso de los lenguajes de programación
using namespace std;                         //
int main()
{
       int res , dia;                          //Se declaran las variables res y dia
       cout << "Ingrese el número del dia ";   //Cout permite la solicitud o salida de datos
       cin >> dia;                             //Cin permite el ingreso de datos
       //res = día;                            //Res permite la comparación del switch
       switch (dia)                            //Switch permite la creación de casos dependiendo de las deribaciones
       {
            case 0: //Caso 0
            cout << dia << "Lunes\n" ;
            break;                           //Break permite el cierre de cada caso

            case 1: //Caso 1
            cout << dia << "Martes\n" ;
            break;

            case 2: //Caso 2
            cout << dia << "Miercoles\n" ;
            break;

            case 3: //Caso 3
            cout << dia << "Jueves\n" ;
            break;
          
            case 4: //Caso 4
            cout << dia << "Viernes\n" ;
            break;

            case 5: //Caso 5
            cout << dia << "Sabado\n" ;
            break;

            case 6: //Caso 6
            cout << dia << "Domingo\n" ;
            break;

            default: //Error
            cout << "Datos incorrectos\n" ;

       }
       return 0;
    }