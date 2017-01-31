#include <string>
#include <vector>

using namespace std;

class Commerciaux : public Employes
{

public:
  void CalculeSalaire(int base, int prime);

private:
 int p_prime;

};
