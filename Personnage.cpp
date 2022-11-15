#include "Personnage.hpp"
#include <string>

using namespace std;

Personnage::Personnage(int vie) : m_vie(vie), m_degatArme(100), m_nomArme("epee basique")
{

};  

void Personnage::attaquer(Personnage &cible)
{
    cible.m_vie = cible.m_vie - m_degatArme;
};

void Personnage::drinkPotion(int nombrePointsDeVie)
{
    m_vie = m_vie + nombrePointsDeVie;

    if(m_vie > 100) {
        m_vie = 100;
    };
};