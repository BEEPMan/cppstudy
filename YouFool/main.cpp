#include<iostream>
#include<vector>
#include<map>
#include<string>
#include"myvector.h"
#include"animal.h"
#include"cat.h"
#include"dog.h"
#include"cat1.h"
#include"bat.h"
#include"mymath.h"
#include"score.h"
#include"studentinfo.h"
#include"fixedvector.h"

using namespace std;

void PrintScores(const vector<int>& scores);
void PrintMap(const map<studentinfo, int>& scores);

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
	/////////// Vector Sample ////////////
	vector<int> scores;
	scores.reserve(4);

	scores.push_back(30);
	scores.push_back(50);

	PrintScores(scores);

	vector<score*> myScores;
	myScores.reserve(5);

	myScores.push_back(new score(31, "C++"));
	myScores.push_back(new score(40, "Java"));
	myScores.push_back(new score(70, "Algorithm"));
	myScores.push_back(new score(83, "C#"));
	myScores.push_back(new score(100, "Android"));

	for (vector<score*>::iterator iter = myScores.begin(); iter != myScores.end(); iter++)
	{
		score* curScore = *iter;
		if (curScore->GetClassName() == "C++")
		{
			curScore->SetScore(100);
		}
		curScore->PrintVariables();
	}

	for (vector<score*>::iterator iter = myScores.begin(); iter != myScores.end(); iter++)
	{
		delete* iter;
	}
	myScores.clear();
	//////////////////////////////////////
	///////////// Map Sample /////////////
	map<studentinfo, int> studentScores;

	studentScores.insert(pair<studentinfo, int>(studentinfo("Lulu", "A01234567"), 10));
	studentScores.insert(pair<studentinfo, int>(studentinfo("Poppy", "A12345678"), 70));
	studentScores.insert(pair<studentinfo, int>(studentinfo("Lulu", "A01234567"), 50));

	PrintMap(studentScores);
	//////////////////////////////////////
	/////////// Template Sample //////////
	fixedvector<int, 5> v;
	cout << "Capacity: " << v.getCapacity() << ", Size: " << v.getSize() << ", Success: " << v.add(15) << endl;
	cout << "Capacity: " << v.getCapacity() << ", Size: " << v.getSize() << ", Success: " << v.add(14) << endl;
	cout << "Capacity: " << v.getCapacity() << ", Size: " << v.getSize() << ", Success: " << v.add(56) << endl;
	cout << "Capacity: " << v.getCapacity() << ", Size: " << v.getSize() << ", Success: " << v.add(3) << endl;
	cout << "Capacity: " << v.getCapacity() << ", Size: " << v.getSize() << ", Success: " << v.add(87) << endl;
	cout << "Capacity: " << v.getCapacity() << ", Size: " << v.getSize() << ", Success: " << v.add(34) << endl;
	//////////////////////////////////////
	///////////// etc Sample /////////////
	int nullint = NULL;
	int* nullp = NULL;
	// int nullint = nullptr;	ERROR
	int* nullpt = nullptr;

	enum class eColor
	{
		Red,
		Green,
		Blue
	};

	// cout << eColor::Green << endl;	ERROR(Explicit Casting Only)
	cout << static_cast<int>(eColor::Green) << endl;
	//////////////////////////////////////
	return 0;
}

void PrintScores(const vector<int>& scores)
{
	for (auto iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
}

void PrintMap(const map<studentinfo, int>& scores)
{
	for (auto iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << iter->first.getStudentID()  << ", " << iter->first.getName() << "'s score: " << iter->second << endl;
	}
}