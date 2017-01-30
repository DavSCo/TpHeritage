#include <string>
#include <vector>

#include "employés.h"

using namespace std;

class Entreprise
{
public:
    
    Entreprise();
    
    void setName(string value);
    string getName() const;
    
    void addEmploye(Employe employe)
    vector<Employs> getEmployes() const;
    
private:
    string m_name;
    vector<Employe> m_employe;
    
};
