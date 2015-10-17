#include "Chicken.h"
#include <iostream>
#include <string>
#include "FarmAnimal.h"
using namespace std;

int Chicken::getEggs()const
{
    return(m_eggs);
}

void Chicken::setEggs(int eggs)
{
    m_eggs=eggs;
}

Chicken::Chicken()
{
    m_eggs=0;
    FarmAnimal::m_name="Chicken";
    FarmAnimal::m_sound="Cluck";
}


