#include <string>
#include <vector>

using namespace std;

class Vendeurs : public Employes
{
public:
  void CalculeSalaire(int base, int prime);

private:
 int p_prime;

};
