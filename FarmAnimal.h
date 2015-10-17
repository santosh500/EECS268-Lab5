#ifndef FARMANIMAL_H
#define FARMANIMAL_H
#include <iostream>
#include <string>
using namespace std;
class FarmAnimal
{
protected:
    string m_name;
    string m_sound;
public:
    FarmAnimal();
    string getName()const;
    string getSound() const;
    void setSound(string sound);
    void setName(string name);
};
#endif 
