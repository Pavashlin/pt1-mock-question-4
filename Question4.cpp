///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream>
using namespace std;

class Animal													//virtual base class
{
public:
	virtual void name()
	{
		cout << "I am an Animal" << endl;						//default responses
	}

	virtual void does()
	{
		cout << "Eat, Sleep, Poop, Repeat " << endl;
	}
};

class Bird :public Animal
{
public:
	void name()
	{
		cout << "I am a bird" << endl;
	}

	void does()
	{
		cout << "tweet tweet!" << endl;
	}

};

class Dog :public Animal
{
public:
	void name()
	{
		cout << "I am a dog" << endl;
	}
	void does()
	{
		cout << "Woof Woof!" << endl;
	}

};

int main()
{
	Dog max;
	Bird flappy;
	Animal *A1 = &max;
	Animal *A2 = &flappy;
	Animal *A3;

	A1->name();							//Polymorphic Behavior
	A1->does();

	A2->name();
	A2->does();

	A3->name();
	A3->does();



	return 0;
}
