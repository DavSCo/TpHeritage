#include <string>
#include <vector>

using namespace std;

class Employes
{
public:

    Employes();

    void setName(string value);
    string getName() const;

    void setPrenom(string value);
    string getPrenom() const;

    void setAge(int value);
    int getAge() const;

    void SalaireInitial(int base);

    void affiche();

private:
    string m_name;
    string m_prenom;
    int m_age;
    int m_salaireInitiale;
};
