#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL 2500

#include <string>
#include <vector>
#include "employe.h"

using namespace std;

class Commercial : public Employe
{

public:

  Commercial();

  void setPrime(string value);
  string getPrime() const;

  void CalculeSalaire(int base, int prime);

private:
 int p_prime;

};
#endif
