#include<iostream>
#include"myvector.h"
#include"animal.h"
#include"cat.h"
#include"dog.h"
#include"cat1.h"
#include"bat.h"
#include"mymath.h"

using namespace std;

int main()
{
	//////////// Class Sample ////////////
	Vector vec1(5, 4), vec2(4, 6);
	Vector* vec3 = new Vector(vec1);

	vec1 *= 3;
	cout << vec1 << endl;
	cout << *vec3 << endl;

	delete vec3;
	//////////////////////////////////////
	///////// Inheritance Sample /////////
	Cat* mycat = new Cat(5, "tom");
	Animal* yourcat = new Cat(5, "henry");

	mycat->Speak();
	mycat->Move();
	yourcat->Speak();
	yourcat->Move();

	delete mycat;
	delete yourcat;
	//////////////////////////////////////
	////////// Interface Sample //////////
	Cat1* cat1 = new Cat1();
	Bat* bat = new Bat();

	cat1->Walk();
	bat->Walk();
	bat->Fly();

	delete cat1;
	delete bat;
	//////////////////////////////////////
	/////////// Casting Sample ///////////
	Animal* pet1 = new Cat(5, "kite");
	Animal* pet2 = new Dog(3, "home");

	Cat* cat = static_cast<Cat*>(pet1);
	Dog* dog1 = static_cast<Dog*>(pet2);
	Dog* dog2 = static_cast<Dog*>(pet1);
	cout << "cat's name : " << cat->getName() << endl;
	cout << "dog1's address : " << dog1->getAddress() << endl;
	//cout << "dog2's address : " << dog2->getAddress() << endl;

	delete pet1;
	delete pet2;
	//////////////////////////////////////
	/////////// Static Sample ////////////
	cout << "number of cat : " << Cat::mCatCount << endl;
	Animal* cat2 = new Cat(5, "kite");
	Cat* cat3 = new Cat(5, "tom");
	cout << "number of cat : " << Cat::mCatCount << endl;

	cout << mymath::ceil(5.3f) << endl;
	cout << mymath::floor(5.8f) << endl;
	cout << mymath::power(2, 4) << endl;
	cout << mymath::round(5.4f) << endl;
	cout << mymath::square(5) << endl;

	delete cat2;
	delete cat3;
	//////////////////////////////////////
	////////// Exception Sample //////////

	//////////////////////////////////////
	return 0;
}