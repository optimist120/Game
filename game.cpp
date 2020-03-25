//подключим SDL и stdio

#include <iostream>
#include <SDL.h>
#include <stdio.h>
#include <string>

#include "Source.cpp"

using namespace std;


class Parent {
	int mass;
public:
	Parent(void);
	Parent(int);
	Parent(float);
	int vel;
}; 

Parent::Parent() {
	mass = 10;
	vel = 1;
}

Parent::Parent(float v) {
	mass = 10;
	vel = v;
}

Parent::Parent(int v) {
	mass = 10;
	vel = v;
}
template <int size> class vector {
public:
	Parent* a[size];
};

class Ship : public Parent {
public:
	int g;
	Ship(int);
};

Ship::Ship(int get) {
	g = get;
};

//Parent* CreateSolarSystem() {return 0};

int main(int argc, char* args[]) {
	vector<3> vect;
	Parent* O[3];

	vect.a[0] = (Parent*) &Ship(3);
	vect.a[1] = &Parent(5);
	vect.a[2] = &Parent(8);
	cout << sizeof(Ship) << "  "<< sizeof(Parent) << endl;
	cout << (*(vect.a[1])).vel <<"  "<<" " << endl;
	return 0;
}