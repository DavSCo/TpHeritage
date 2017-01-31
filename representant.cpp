#include "representant.h"
using namespace std;

void Representant::setDeplacements (int value)
{
  m_deplacements = value;
}

int Representant::getDeplacements()
{
  return m_deplacements;
}

double Representant::calculSalaire ()
{
  return m_salaireInitial + (m_prime * DEF_REPRESENTANT_MONTANT_PRIME) + DEF_REPRESENTANT_MONTANT_DEPLACEMENT;
}
