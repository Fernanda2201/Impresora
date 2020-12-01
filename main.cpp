/***
 *Autor: Fernanda Guaraca <fguaracat@est.ups.edu.ec>
 *Fecha: 30-11-2020
 *Tema: Examen
 */

#include <iostream>
#include <string>
#include <vector>

#include "general.h"
#include "impresora.h"

using namespace std;

//Inicialización del contador de películas

int General::TotalImpresoras = 0;
int main()
{
    Impresora imp;
    cout<<"Fernanda Nathaly Guaraca Tayan\n\n";

    cout << "******** GROUP TECH  ********" << endl;
    cout<<  "======== BIENVENIDO =========="<<endl;

    int opcion=0;
    do{
        cout<<"\n1.- Listar impresoras";
        cout<<"\n2.- Ingresar Contadores";
        cout<<"\n3.- Imprimir reporte";
        cout<<"\n4.- Salir"<<endl;
        cout<<" Por favor seleccione una opcion\n";
        cin>>opcion;

        switch (opcion) {
        case 1:
            cout<<"-------------------------"<<endl;
            cout<<"Listar Impresoras"<<endl;
            imp.mostrarImpresora();
            cout<<"-------------------------"<<endl;
          break;

         case 2:
            cout<<"Ingresar Contadores"<<endl;
               imp.ingresarContadores();
            break;

         case 3:

            cout<<"Imprimir reporte"<<endl;
            imp.imprimirReporte();
            break;

        case 4:
            cout<<"\n Gracias por usar este programa!!!!"<<endl;
            cout<<"Vuelva pronto!!!"<<endl;
        }
    }while (opcion!=4);

    return 0;
}
