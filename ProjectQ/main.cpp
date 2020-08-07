#include <iostream>
#include "Vector3D.h"

void log(const char* message);

int main() {
	Vector3D v = Vector::Vector3D(1, 2, 3);
	
	std::cout << "X: " + v.x; 
	std::cout << "Y: " + v.y;
	std::cout << "Z: " + v.z;
}