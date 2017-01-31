#include "entreprise.h"
using namespace std;

void Entreprise::setName(string value)
{
  m_name = value;
}

string Entreprise::getName() const
{
  return m_name;
}
