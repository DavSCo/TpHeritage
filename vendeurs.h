#include <string>
#include <vector>

using namespace std;

class Vendeurs : public Employes
{
public:
  void SalaireInitial(int base, int prime);

private:
 int p_prime;

};
