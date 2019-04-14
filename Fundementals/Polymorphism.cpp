///Polymorphism has 3 types.
///Ad-hoc () - Overloading
///Sub type (Runtime) - SubClass and Virtual Functions
///Parametric (Compile Time) - Templates


///This is the sample of Sub-type polymorphism


#include <iostream>

class Animals
{
public:
	virtual void MakeNoise()
	{
		std::cout << "Animal Noise!" << std::endl;
	}
};

class Dog : public Animals
{
public:
	void MakeNoise() override
	{
		std::cout << "Hav hav!" << std::endl;
	}
};
class Cat : public Animals
{
public:
	void MakeNoise() override
	{
		std::cout << "Miyav! Irri!" << std::endl;
	}
};



void main()
{
	Dog dayzi;
	Cat cagu;

	dayzi.MakeNoise();
	cagu.MakeNoise();
}