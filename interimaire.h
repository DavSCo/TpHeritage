#ifndef DEF_INTERIMAIRE
#define DEF_INTERIMAIRE
#include <string>
#include <vector>

#include "technicien.h"
using namespace std;

class Interimaire : public Technicien
{
public:

  Interimaire();

  void setnbHeures(int value);
  int getnbHeures();

  
  double calculSalaire();

private:
  int m_nbHeures;
};

#endif
