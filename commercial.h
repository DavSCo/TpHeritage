#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL

#define DEF_COMMERCIAL_SALAIRE 2500
#define DEF_COMMERCIAL_MONTANT_PRIME 0

#include <string>
#include <vector>
#include "employe.h"

using namespace std;

class Commercial : public Employe
{

public:

  Commercial();

  void setPrime(int value);
  int getPrime() const;

  double calculSalaire();

private:
 int m_prime;
};
#endif
