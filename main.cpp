/**
File Name: main.cpp
Author: Paul Charles
Date: 10.07.2015
Purpose: Main file
**/
#include <iostream>
#include "Stack.h"
#include "StackInterface.h"
#include "PreconditionViolationException.h"
#include "FarmAnimal.h"
#include "Cow.h"
#include "AnimalPen.h"
#include "Chicken.h"
#include <string>
#include <stdexcept> 
using namespace std;
int main()
{
    
    
    std::cout <<    "Select an animal to add to the pen\n"
                <<      "1) Cow (produces mil)\n"
                <<      "2) Chicken (cannot lay eggs)\n"
                <<      "3) CyberChicken (seems dangerous, but lays eggs)\n";
                cout << "" << endl;
                int a; 
                AnimalPen c;

                cout << "choice: " << endl;
                cin >> a;
                if(a==1)
                {

                    for(int i=0; i<2; i++)
                    {

                        FarmAnimal* e=new Cow();
                        Cow* b=static_cast<Cow*>(e);
                        cout << "How many gallons of milk did this cow produce?" << endl;
                        double g;
                        cin >> g;
                        b->setMilkProduced(g);
                        cout << b->getMilkProduced() << endl;
                        cout << b->getSound() << endl;
                        c.addAnimal(e);

                        cout << c.peakAtNextAnimal()->getName() << endl;
/*
                        cout << v->getName() << endl;
                        cout<< c.peakAtNextAnimal() << endl;
                       /*
                        Cow* b=new Cow();
                        cout << "How many gallons of milk did this cow produce?" << endl;
                        double g;
                        cin >> g;
                        b->setMilkProduced(g);
                        cout << b->getMilkProduced() << endl;
                        cout << b->getSound() << endl;



                        /*
                        c.addAnimal(b);

                        cout << v->getName() << endl;
                        cout << v->getMilkProduced() << endl;
                        */
                    }

                    /*
                    FarmAnimal* a=new Cow();
                    a->setName("hi");
                    c.addAnimal(a);
                    FarmAnimal* q=c.peakAtNextAnimal();
                    cout << q->getName() << endl;
                    FarmAnimal* b=new Cow();
                    b->setName("fine");
                    c.addAnimal(b);
                    
                    FarmAnimal* v=c.peakAtNextAnimal();
                    cout << v->getName() << endl;
                    */
                }

                /*
                else if(a==2)
                {
                    FarmAnimal* a=new Chicken();
                    c.addAnimal(a);
                }
                
                while(!isEmpty())
                {
                    FarmAnimal* q=c.peakAtNextAnimal();
                    cout << q->getName() << endl;
                }
    
    /*
    FarmAnimal* a=new FarmAnimal();
    a->setName("hi");
    cout << a->getName() << endl;
    FarmAnimal* b=new Cow();
    b->setName("yo");
    cout << b->getName() << endl;
    
    AnimalPen c;
    c.addAnimal(a);
    /*
    */
}

