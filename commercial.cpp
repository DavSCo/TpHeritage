#include "commercial.h"
using namespace std;

Commercial::Commercial()
{
  m_salaireInitial = DEF_COMMERCIAL_SALAIRE;
}

void Commercial::setPrime (int value)
{
  m_prime = value;
}

int Commercial::getPrime()
{
  return m_prime;
}

double Commercial::calculSalaire ()
{
  return m_salaireInitial + (m_prime * DEF_COMMERCIAL_MONTANT_PRIME);
}
