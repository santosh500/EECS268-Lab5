
#include <iostream>
#include "AnimalPen.h"

using namespace std;

AnimalPen::AnimalPen()
{
    
}

AnimalPen::~AnimalPen()
{
    while(!isEmpty())
    {
       releaseAnimal();
    }
}

void AnimalPen::addAnimal(FarmAnimal* animal)
{
    push(animal);
}


void AnimalPen::releaseAnimal()
{
    pop();
}

FarmAnimal* AnimalPen::peakAtNextAnimal()
{
    peek();
}

bool AnimalPen::isPenEmpty()
{
    if(isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}