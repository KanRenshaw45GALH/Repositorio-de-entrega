#include <iostream>                           
using namespace std;                             
int opcion;

int main()
{
    double Paleta = 1.7;
    double Cono = 1.2;
    double Yougurt = 2.5;
    double Galon = 7.8;
    int cantidad;
    int precio1= float(cantidad) * Paleta;
    int precio2= float(cantidad) * Cono;
    int precio3= float(cantidad) * Yougurt;
    int precio4= float(cantidad) * Galon;

    cout << "Que desea adquirir: Paleta de sabores{1} Cono helado{2} Yougurt helado{3} Galon de helado{4} "<< endl;
    cin >> opcion;

        switch (opcion)
        case 1:
        cout << "Agrege la cantidad que desea: " << endl;
        cin >> cantidad;
        cout << "\nEl precio es: " << precio1<<endl;
        

    return 0;
}