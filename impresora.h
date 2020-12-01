/***
 *Autor: Fernanda Guaraca <fguaracat@est.ups.edu.ec>
 *Fecha: 30-11-2020
 *Tema: Examen
 */

#ifndef IMPRESORA_H
#define IMPRESORA_H
#include <iostream>
#include <string>
#include <vector>

#include "general.h"

class Impresora
{
private:
     vector<General> general;
     float contador;
public:
    Impresora();
    Impresora(float contador);
    void mostrarImpresora();
    int ingresarContadores();
    int imprimirReporte();
};

#endif // IMPRESORA_H
