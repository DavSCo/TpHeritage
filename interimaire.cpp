#include "interimaire.h"
using namespace std;

void Interimaire::setnbHeures (int value)
{
  m_nbHeures = value;
}

int Interimaire::getnbHeures()
{
  return m_nbHeures;
}

double Interimaire::calculSalaire ()
{
  return (24.5 * m_nbHeures);
}
