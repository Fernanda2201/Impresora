/***
 *Autor: Fernanda Guaraca <fguaracat@est.ups.edu.ec>
 *Fecha: 30-11-2020
 *Tema: Examen
 */

#include "general.h"

int General::getId()
{
    return this->id;
}

General::General()
{
   this->marca = "";
   this->modelo= "";
   this->anio = 0;
   this->numeroSerie = "";
   this->tipoColor = false;
   this->direccionIp = "";
}

General::General(string marca, string modelo, int anio, string numeroSerie, string direccionIp, bool tipoColor)
{
    this->marca = marca;
    this->modelo = modelo;
    this->anio = anio;
    this->numeroSerie = numeroSerie;
    this->direccionIp = direccionIp;
    this->tipoColor = tipoColor;

    General::TotalImpresoras++;
    this->id = General::TotalImpresoras;
}


//Método de obtención de los datos de cada Impresora

string General::getDatos()
{
        return
                "\nID:" + to_string(this->id) +  "\n" +
                "Marca: " + this->marca    + "\n" +
                "Modelo: " + this->modelo  + "\n" +
                "Anio: " + to_string(this->anio)  + "\n" +
                "Numero de serie: " + this->numeroSerie + "\n" +
                "Direccion IP: " + this->direccionIp+ "\n" +
                "Tipo: " + this->tipo();

}

string General::tipo()
{
    if(this->tipoColor == true){
        return "B/N";
    }else{
        return "COLOR";
    }
}
