/***********************************************************************
 * Module:  Cargo.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 19:59:26
 * Purpose: Implementation of the class Cargo
 ***********************************************************************/

#include "Cargo.h"


std::string Cargo::getEmpresa(void)
{
   return empresa;
}

void Cargo::setEmpresa(std::string newEmpresa)
{
   empresa = newEmpresa;
}

std::string Cargo::getPuesto(void)
{
   return puesto;
}

void Cargo::setPuesto(std::string newPuesto)
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

std::string Cargo::getDepartamento(void)
{
   return departamento;
}

void Cargo::setDepartamento(std::string newDepartamento)
{
   departamento = newDepartamento;
}

Cargo::Cargo()
{
   // TODO : implement
}