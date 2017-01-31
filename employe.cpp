#include "employe.h"
using namespace std;

Employe::Employe()
{
  m_salaireInitial = 0;
}

Employe(string name, string prenom, int age)
{
  name = m_name;
  prenom = m_prenom;
  age = m_age;
}

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

/*void Employe::setSalaire(int value)
{
  m_salaireInitiale = value;
}
int Employe::getSalaire() const
{
  return m_salaireInitiale;
}*/

void Employe::affiche()
{
  cout << "Le nom de l'employé est : " << m_name << endl;
  cout << "Le prénom de l'employé est : " << m_prenom << endl;
  cout << "L'employé a : " << m_age << " ans" << endl;
  cout << "Le salaire de l'employé est de : " << CalculeSalaire() << endl;
}
