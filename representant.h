#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT

#include <string>
#include <vector>
#include "commercial.h"

using namespace std;

class Representant : public Employe
{
public:

  void SalaireInitial(int base, int prime, int déplacements);

private:
  int p_déplacements;
}

#endif
