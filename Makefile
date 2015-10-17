Lab5: main.o PreconditionViolationException.o Cow.o Chicken.o FarmAnimal.o AnimalPen.o
	g++ -g -std=c++11 -Wall main.o PreconditionViolationException.o FarmAnimal.o Chicken.o AnimalPen.o Cow.o -o Lab5
main.o: main.cpp StackInterface.h Stack.h Stack.hpp Node.hpp Node.h FarmAnimal.h Chicken.h Cow.h
	g++ -g -std=c++11 -Wall -c main.cpp PreconditionViolationException.cpp  PreconditionViolationException.h FarmAnimal.h FarmAnimal.cpp Cow.h Cow.cpp Chicken.h Chicken.cpp
AnimalPen.o: AnimalPen.cpp AnimalPen.h FarmAnimal.h Chicken.h Cow.h Stack.h
	g++ -g -std=c++11 -Wall -c AnimalPen.cpp	
FarmAnimal.o: FarmAnimal.cpp FarmAnimal.h
	g++ -g -std=c++11 -Wall -c FarmAnimal.cpp 
Cow.o: Cow.cpp Cow.h FarmAnimal.h
	g++ -g -std=c++11 -Wall -c Cow.cpp 
Chicken.o: Chicken.cpp Chicken.h FarmAnimal.h
	g++ -g -std=c++11 -Wall -c Chicken.cpp
PreconditionViolationException.o: PreconditionViolationException.cpp PreconditionViolationException.h
	g++ -g -std=c++11 -Wall -c PreconditionViolationException.cpp
clean:
	rm Lab5 *.o
