
#include <iostream>
#include <string>
#include "FarmAnimal.h"
using namespace std;
FarmAnimal::FarmAnimal()
{
    m_name="unset";
    m_sound="unset";
}

string FarmAnimal::getName()const
{
    return(m_name);
}

void FarmAnimal::setName(string name)
{
    m_name=name;
}

string FarmAnimal::getSound()const
{
    return(m_sound);
}

void FarmAnimal::setSound(string sound)
{
    m_sound=sound;
}
