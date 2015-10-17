#ifndef CHICKEN_H
#define CHICKEN_H
#include <iostream>
#include <string>
#include "FarmAnimal.h"
using namespace std;
class Chicken:public FarmAnimal
{
    protected:
        int getEggs()const;
        void setEggs(int eggs);
        int m_eggs;
        
    public:
        Chicken();
};
#endif
