/***********************************************************************
 * Module:  Cargo.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 19:59:26
 * Purpose: Implementation of the class Cargo
 ***********************************************************************/

#include "Cargo.h"


string Cargo::getEmpresa(void)
{
   return empresa;
}

void Cargo::setEmpresa(string newEmpresa)
{
   empresa = newEmpresa;
}

string Cargo::getPuesto(void)
{
   return puesto;
}

void Cargo::setPuesto(string newPuesto)
{
   puesto = newPuesto;
}

double Cargo::getValorHora(void)
{
   return valorHora;
}


void Cargo::setValorHora(double newValorHora)
{
   valorHora = newValorHora;
}

string Cargo::getDepartamento(void)
{
   return departamento;
}

void Cargo::setDepartamento(string newDepartamento)
{
   departamento = newDepartamento;
}

Cargo::Cargo()
{
   // TODO : implement
}