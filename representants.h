#ifndef DEF_REPRESENTANTS
#define DEF_REPRESENTANTS

#include <string>
#include <vector>
#include "commerciaux.h"

using namespace std;

class Representants : public Employes
{
public:

  void SalaireInitial(int base, int prime, int déplacements);

private:
  int p_déplacements;
}

#endif