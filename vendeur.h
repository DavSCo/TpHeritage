#ifndef DEF_VENDEUR
#define DEF_VENDEUR

#define DEF_VENDEUR_MONTANT_PRIME 100

#include <string>
#include <vector>

#include "commercial.h"

using namespace std;

class Vendeur : public Commercial
{
public:
  Vendeur();

  double calculSalaire();
};

#endif
