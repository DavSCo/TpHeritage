#ifndef DEF_COMMERCIAUX
#define DEF_COMMERCIAUX

#include <string>
#include <vector>
#include "employe.h"

using namespace std;

class Commercial : public Employe
{

public:
  void CalculeSalaire(int base, int prime);

private:
 int p_prime;

};
#endif
