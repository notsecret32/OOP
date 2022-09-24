#include "Object.h"

void Object::Input()
{
	cout << "Name: ";
	cin >> this->name;

	cout << "Color: ";
	cin >> this->color;

	cout << "Weight: ";
	cin >> this->weight;

	cout << "Volume: ";
	cin >> this->volume;
}

void Object::Output()
{
	cout << "Name: "   << this->name << endl;
	cout << "Color: "  << this->color << endl;
	cout << "Weight: " << this->weight << endl;
	cout << "Volume: " << this->volume << endl;
}

