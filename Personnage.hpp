#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
    public :

    Personnage();
    Personnage(int vie);

    void attaquer(Personnage &cible);
    void drinkPotion(int nombrePointsDeVie);

    private :

    int m_vie;
    int m_degatArme;
    std::string m_nomArme;
};

#endif