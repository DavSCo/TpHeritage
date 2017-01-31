#ifndef DEF_EMPLOYES
#define DEF_EMPLOYES
#include <string>
#include <vector>



using namespace std;

class Employe
{
public:

    Employe();

    void setName(string value);
    string getName() const;

    void setPrenom(string value);
    string getPrenom() const;

    void setAge(int value);
    int getAge() const;

    void setSalaire(int value);
    int getSalaire() const;

    void CalculeSalaire(int base);

    void affiche();

private:
    string m_name;
    string m_prenom;
    int m_age;
    int m_salaireInitiale;
};
#endif