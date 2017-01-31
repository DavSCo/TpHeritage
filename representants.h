#include <string>
#include <vector>

using namespace std;

class Representants : public Employes
{
public:

  void CalculeSalaire(int base, int prime, int déplacements);

private:
  int p_déplacements;
}
