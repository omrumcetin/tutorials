///Polymorphism has 3 types.
///Ad-hoc () - Overloading
///Sub type (Runtime) - SubClass and Virtual Functions
///Parametric (Compile Time) - Templates


///This is the sample of Sub-type polymorphism


#include <iostream>

class Animal
{
public:
	virtual void MakeNoise()
	{
		std::cout << "Animal Noise!" << std::endl;
	}
};

class Dog : public Animal
{
public:
	void MakeNoise() override
	{
		std::cout << "Hav hav!" << std::endl;
	}
};
class Cat : public Animal
{
public:
	void MakeNoise() override
	{
		std::cout << "Miyav! Irri!" << std::endl;
	}
};

void Stroke(Animal* animal)
{
	animal->MakeNoise();
}

void main()
{
	Dog dayzi;
	Cat cagu;
	
	Stroke(&dayzi);
	Stroke(&cagu);
}