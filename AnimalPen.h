
#ifndef ANIMALPEN_H
#define ANIMALPEN_H
#include <iostream>
#include <string>
#include <cstdlib>
#include "FarmAnimal.h"
#include "Cow.h"
#include "Chicken.h"
#include "Node.h"
#include "Stack.h"
using namespace std;
class AnimalPen:public Stack<FarmAnimal*>
{
public:
    AnimalPen();
    ~AnimalPen();
    void addAnimal(FarmAnimal* animal);
    FarmAnimal* peakAtNextAnimal();
    void releaseAnimal();
    bool isPenEmpty();
};
#endif