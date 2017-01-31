#include <iostream>
#include <string>

#include "entreprise.h"
#include "employe.h"
#include "technicien.h"
#include "commercial.h"
using namespace std;

int main()
{
  Entreprise VONY;
  VONY.setName("VONY");

  Vendeur Paul;
  Paul.setName("Paul");
  Paul.setAge(43);
  Paul.calculSalaire();
  Paul.affiche();

  Vendeur Pierre;
  Pierre.setName("Pierre");
  Pierre.setAge(23);
  Pierre.calculSalaire();
  Pierre.affiche();

  Vendeur Jacques;
  Jacques.setName("Jacques");
  Jacques.setAge(43);
  Jacques.calculSalaire();
  Jacques.affiche();

  Representant Rachel;
  Rachel.setName("Rachel");
  Rachel.setAge(34);
  Rachel.calculSalaire();
  Rachel.affiche();


  Representant Remi;
  Remi.setName("Remi");
  Remi.setAge(45);
  Remi.calculSalaire();
  Remi.affiche();

  Technicien Tanguy;
  Tanguy.setName("Tanguy");
  Tanguy.setAge(34);
  Tanguy.calculSalaire();
  Tanguy.affiche();

  Technicien Teo;
  Teo.setName("Teo");
  Teo.setAge(90);
  Tanguy.calculSalaire();
  Tanguy.affiche();
} 
