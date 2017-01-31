#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT

#define DEF_REPRESENTANT_MONTANT_PRIME 250
#define DEF_REPRESENTANT_MONTANT_DEPLACEMENT 50

#include <string>
#include <vector>
#include "commercial.h"

using namespace std;

class Representant : public Commercial
{
public:

  Representant();

  void setDeplacements(int value);
  int getDeplacements();

  double calculSalaire();

protected:
  int m_deplacements;
};

#endif
