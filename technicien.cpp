#include "technicien.h"
using namespace std;

Technicien::Technicien()
{
  m_salaireInitial = DEF_TECHNICIEN_SALAIRE;
}

double Technicien::calculSalaire()
{
	return m_salaireInitial;
}