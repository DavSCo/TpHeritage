#include "employe.h"
using namespace std;

void Employe::setName(string value)
{
  m_name = value;
}
string Employe::getName() const
{
  return m_name;
}

void Employe::setPrenom(string value)
{
  m_prenom = value;
}
string Employe::getPrenom() const
{
  return m_prenom;
}

void Employe::setAge(int value)
{
  m_age = value;
}
int Employe::getAge() const
{
  return m_age;
}

void Employe::setSalaire(int value)
{
  m_salaireInitiale = value;
}
int Employe::getSalaire() const
{
  return m_salaireInitiale;
}

void Employe::CalculeSalaire(int base)
{
  
}

void Employes::affiche()
{
 return
}
