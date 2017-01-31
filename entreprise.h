#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE


#include "employe.h"
#include "technicien.h"
#include "interimaire.h"
#include "commercial.h"
#include "vendeur.h"
#include "representant.h"


using namespace std;

class Entreprise
{
public:

    Entreprise();

    void setName(string value);
    string getName() const;

    void setEmploye(Employe employe);
    Employe getEmploye();

    void setTechnicien(Technicien technicien);
    Technicien getTechnicien();

    void setInterimaire(Interimaire interimaire);
    Interimaire getInterimaire();

    void setCommercial(Commercial commercial);
    Commercial getCommercial();

    void setVendeur(Vendeur vendeur);
    Vendeur getVendeur();

    void setRepresentant(Representant representant);
    Representant getRepresentant();

private:
    string m_name;
    Employe m_employe;
    Technicien m_technicien;
    Interimaire m_interimaire;
    Commercial m_commercial;
    Vendeur m_vendeur;
    Representant m_representant;


};
#endif
