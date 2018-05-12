#include <iostream>

using namespace std;

class Property
{
protected:
	int worth;
	int tax;
	
public:
	Property(int count)
	{
		worth = count;
	}
	
	virtual void Tax() = 0;
};

class Appartment : public Property
{
public:

	Appartment(int c)
	: Property(c)
	{}
	
	void Tax() override
	{
		tax = worth/1000;
	}
};

class Car : public Property
{
public:

	Car(int c)
	: Property(c)
	{}
	
	void Tax() override
	{
		tax = worth/200;
	}
	
};

class CountryHouse : public Property
{
public:

	CountryHouse(int c)
	: Property(c)
	{}
	
	void Tax() override
	{
		tax = worth/500;
	}
};

int main()
{
	
	return 0;
}