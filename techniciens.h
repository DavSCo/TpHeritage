#ifndef DEF_TECHNICIENS
#define DEF_TECHNICIENS

#include <string>
#include <vector>

#include "employés.h"

using namespace std;

class Techniciens : public Employes
{

public:

  void SalaireInitial(int base);

};
#endif