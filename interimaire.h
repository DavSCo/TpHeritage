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

  void setnbHeures(string value);
  string getnbHeures() const;

private:
  int m_nbHeures;
};

#endif
