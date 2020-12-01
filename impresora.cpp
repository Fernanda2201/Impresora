/***
 *Autor: Fernanda Guaraca <fguaracat@est.ups.edu.ec>
 *Fecha: 30-11-2020
 *Tema: Examen
 */

#include <iostream>
#include <vector>

#include "general.h"

using namespace std;


#include "impresora.h"

Impresora::Impresora()
{
   General i1("Ricoh", " SP 3510SF", 2016, "T332QB00324", "192.168.100.64", true );
   this->general.push_back(i1);

   i1 = General("Ricoh", "MP C300", 2017, "S7225600246", "192.168.100.46",false);
   this->general.push_back(i1);

// Agregar otra impresora.
  /* i1=General("EPSON", "WF-2630WF", 2018, "R8720Q87872", "192.543.233.54", true);
   this->general.push_back(i1);
   */
}

Impresora::Impresora(float)
{
    contador = 0;
}

void Impresora::mostrarImpresora()
{
    for(int i=0; i<this->general.size(); i++){
        cout<<this->general[i].getDatos()<<"\n";
    }
}

int Impresora::ingresarContadores()
{
    General impresoraSeleccionada;
    int id;

    cout<<"\nIngrese el ID de la impresora:";
    cin>>id;

    for(General &i : this->general){
        i.getId();
        if(i.getId() == id){
            impresoraSeleccionada = i;
        }
    }

    cout<<"Usted selecciono:"<<impresoraSeleccionada.getDatos()<<endl;
   int contadornuevo;
    if(id == 1){
        cout<<"Ingrese el valor del contador\n";
        cin>>contadornuevo;
        if(contador<0){
            cout<<"Ingrese un dato valido";
        }else{
            contadornuevo = contadornuevo+contador;
            return contadornuevo;
        }
    }else{
        cout<<"Ingrese el valor del contador B/N\n";
        cin>>contadornuevo;
        if(contador<0){
            cout<<"Ingrese un dato valido";
        }else{
            contadornuevo = contadornuevo+contador;
            return contadornuevo;
    }

}

    }

int Impresora::imprimirReporte()
{
    int reporte;
    reporte = contador * 0.032;
}
