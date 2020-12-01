/***
 *Autor: Fernanda Guaraca <fguaracat@est.ups.edu.ec>
 *Fecha: 30-11-2020
 *Tema: Examen
 */

#ifndef GENERAL_H
#define GENERAL_H
#include <iostream>

using namespace std;

class General
{
private:
    int id;
    string marca;
    string modelo;
    int anio;
    string numeroSerie;
    string direccionIp;


    bool tipoColor;
public:
    General();

    General(string marca, string modelo, int anio, string numeroSerie,  string direccionIp, bool tipoColor);

    void listarImpresoras();

    string getDatos();
    string tipo();

    int getId();

    static int TotalImpresoras;
};

#endif // GENERAL_H
