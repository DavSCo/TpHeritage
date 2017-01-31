#include "vendeur.h"
using namespace std;

double Vendeur::calculSalaire ()
{
  return m_salaireInitial + (m_prime * DEF_VENDEUR_MONTANT_PRIME);
}
