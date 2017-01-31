#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT

#define DEF_REPRESENTANT_MONTANT_PRIME 250

#include <string>
#include <vector>
#include "commercial.h"

using namespace std;

class Representant : public Commercial
{
public:

  Representant();

  void setDeplacements(string value);
  string getDeplacement() const;

  void CalculeSalaire(int base, int prime, int déplacements);

private:
  int p_déplacements;
};

#endif
