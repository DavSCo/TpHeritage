#include "commercial.h"
using namespace std;

Commercial::Commercial()
{
  m_salaireInitial = DEF_COMMERCIAL_SALAIRE;
}

void Commercial::setPrime (int value)
{
  p_prime = value;
}

int Commercial::getPrime()
{
  return p_prime;
}

double Commercial::calculSalaire ()
{
  return m_salaireInitial + (p_prime * DEF_COMMERCIAL_MONTANT_PRIME);
}
