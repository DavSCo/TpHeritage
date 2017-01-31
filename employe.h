#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE
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

    /*void setSalaire(int value);
    int getSalaire() const;*/

    virtual double calculSalaire();

    virtual void affiche();

protected:
    string m_name;
    string m_prenom;
    int m_age;
    int m_salaireInitial;
};
#endif
