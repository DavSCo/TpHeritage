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
    
    void setEmployes(Employes employes);
    Employes getEmployes();
    
    void setTechnicien(Technicien technicien);
    Technicien getTechnicien();
    
    void setInterimaire(Interimaire interimaire);
    Interimaire getInterimaire();
    
    void setCommerciaux(Commerciaux commerciaux);
    Commerciaux getCommerciaux();
    
    void setVendeur(Vendeur vendeur);
    Vendeur getVendeur();
    
    void setRepresentant(Representant representant);
    Representant getRepresentant();
    
    
    
    
    
    
private:
    string m_name;
    Employes m_employes;
    Technicien m_technicien;
    Interimaire m_interimaire;
    Commerciaux m_commerciaux;
    Vendeur m_vendeur;
    Representant m_representant;
    
    
};
