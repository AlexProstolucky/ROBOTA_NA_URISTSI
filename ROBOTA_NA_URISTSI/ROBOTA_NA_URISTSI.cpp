#include <iostream>

using namespace std;


class Engine
{
protected:
	double V;
	string Marka = "BMW";
public:
	Engine(int V)
	{
		this->V = V;
		cout << "\nEngine created --> " << V;
	}

	Engine(int V, string Marka)
	{
		this->V = V;
		this->Marka = Marka;
		cout << "\nEngine created";
		cout << "\nV --> " << V;
		cout << "\nMarka --> " << Marka;
	}
	void print()
	{
		cout << "\nEngine:";
		cout << "\nV --> " << V;
		cout << "\nMarka --> " << Marka;
	}
};

class Body
{
protected:
	string size;
	string color = "White";
	string material;
public:
	Body(string size, string material)
	{
		this->size = size;
		this->material = material;
		cout << "\nBody created";
		cout << "\nSize --> " << size;
		cout << "\nMaterial --> " << material;
	}

	Body(string size, string material, string color)
	{
		this->size = size;
		this->material = material;
		this->color = color;
		cout << "\nBody created";
		cout << "\nSize --> " << size;
		cout << "\nMaterial --> " << material;
		cout << "\nColor --> " << color;
	}
	void print()
	{
		cout << "\nBody:";
		cout << "\nSize --> " << size;
		cout << "\nMaterial --> " << material;
		cout << "\nColor --> " << color;
	}

	void set_color(string color)
	{
		this->color = color;
		cout << "Color changed --> " << color;
	}
};

class Wheel
{
protected:
	int size;
public:
	Wheel(int size)
	{
		this->size = size;
		for (size_t i = 0; i < 4; i++)
		{
			cout << "\nWheel created --> " << size;
		}
	}
	void print()
	{
		cout << "\nWheels size --> " << size;
	}
};

class Lights
{
protected:
	int type;
public:
	Lights(int type)
	{
		this->type = type;
		cout << "\nLight created, tipe --> " << type;
	}

	void print()
	{
		cout << "\nLight type --> " << type;
	}
};

class Chassis
{
protected:
	string type;
public:
	Chassis(string type)
	{
		this->type = type;
		cout << "\nChassis created --> " << type;
	}
	void print() 
	{
		cout << "\nChassis type --> " << type;
	}
};

class Car
{
protected:
	Engine engine;
	Wheel wl;
	Lights ld1, ld2, ld3, ld4, ld5, ld6;
	Chassis chas;
public:
	Body body;
	Car() : engine(12), body("Big", "Metal"), wl(16), ld1(1), ld2(1), ld3(1), ld4(1), ld5(1), ld6(1), chas("Normal")
	{
		cout << "\nCar created";
	}

	Car(const Car &src) : engine(src.engine), body(src.body), wl(src.wl), ld1(src.ld1), ld2(src.ld2), ld3(src.ld3), ld4(src.ld4), ld5(src.ld5), ld6(src.ld6), chas(src.chas)
	{
		cout << "\nCar coppy!";
	}

	void info() 
	{
		engine.print();
		body.print();
		wl.print();
		chas.print();
		ld1.print();
		ld2.print();
		ld3.print();
		ld4.print();
		ld5.print();
		ld6.print();
	}
};

int main()
{
	Car object1;
	cout << "\n\n";
	Car object2 = object1;
	object2.info();
	cout << "\n\n";
	object2.body.set_color("Red");
	object2.info();
}
