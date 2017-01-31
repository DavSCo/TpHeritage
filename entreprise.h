#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE
#include <string>
#include <vector>

#include "employe.h"

using namespace std;

class Entreprise
{
public:

    Entreprise();

    void setName(string value);
    string getName() const;

    void setEmploye(Employe employe);
    Employes getEmploye();

    void setTechnicien(Technicien technicien);
    Technicien getTechnicien();

    void setInterimaire(Interimaire interimaire);
    Interimaire getInterimaire();

    void setCommercial(Commercial commercial);
    Commerciaux getCommercial();

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
#endif
