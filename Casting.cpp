#include <iostream>
#include <vector>

enum class CarType {
	CAR,
	VAN,
	TRUCK
};

struct Fruit {
	std::string name;
	int size;

	Fruit() {
		name = "INVALID";
		size = 0;
	}

};

struct Vegetable {
	std::string name;
	int size;
	int calories;

	Vegetable() {
		name = "INVALID";
		size = 0;
		calories = 0;
	}

};
//int main() {
//	//C++ static cast
//	float myFloat = 1.5346f;
//	int myInt3 = static_cast<int>(myFloat);
//
//	int i = static_cast<int>(CarType::CAR);//C++
//	int i2 = (int)(CarType::CAR);//C
//	//C-style cast vs static_cast
//	char c = 'a'; // 1 byte
//	int* p = (int*)&c; //C-Style Casting 
//	*p = 5;
//	int p1 = static_cast <int*>(&c);
//	/*int b = 2;
//	int* pointerToB = &b;*/
//
//	//const_cast
//	Fruit f; //Stack
//	const Fruit* f1 = new Fruit();// Heap
//	f1->name = "lkjf";
//	Fruit* nonConstFruit = const_cast<Fruit*>(f1);
//	nonConstFruit->name = "manish";
//	//reinterpret_cast
//	int* pointer = nullptr;// Se guardan direcciones de memoria
//	int value = 5;//Se guarda un int
//	/*value = pointer;
//	value = static_cast<int>(pointer);*/
//	value = reinterpret_cast<int>(pointer); //No compile errors
//
//	Fruit* frutal = new Fruit();
//	Vegetable* vegetable1 = new Vegetable();
//	frutal = reinterpret_cast<Vegetable*>(vegetable1);
//	
//	
//}
