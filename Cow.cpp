#include <iostream>
#include <string>
#include "Cow.h"

using namespace std;


Cow::Cow()
{
    m_milkProduced=0.0;
    m_name="Cow";
    m_sound="Moo";
}

double Cow::getMilkProduced()const
{
    return(m_milkProduced);
}

void Cow::setMilkProduced(double gallons)
{
    if(gallons<=0.0)
    {
        m_milkProduced=0.0;
    }
    else
    {
        m_milkProduced=gallons;
    }
}
