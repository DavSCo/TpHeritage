#ifndef DEF_COMMERCIAUX
#define DEF_COMMERCIAUX

#include <string>
#include <vector>
#include "employés.h"

using namespace std;

class Commerciaux : public Employes
{

public:
  void CalculeSalaire(int base, int prime);

private:
 int p_prime;

};
#endif