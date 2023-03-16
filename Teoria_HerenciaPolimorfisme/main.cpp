#include <iostream>
#include <vector>
#include "Vector.h"
#include "Shape.h"
#include "Triangle.h"

#pragma region Exemple1:
class Vehicle {
private:
	int health;

protected:
	float speed = 1;

public:
	float maxSpeed = 2;
};

class Cotxe : public Vehicle {
public:
	void PrintStats();
};

void Cotxe::PrintStats()
{
	/*std::cout << health << std::endl;*/
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "maxSpeed: " << maxSpeed << std::endl;
}
#pragma endregion

int main() {
#pragma region Exemple1
	//Cotxe c;
	//c.PrintStats();
#pragma endregion

#pragma region Exemple2
	std::vector<Vector2> inPoints = { Vector2{0, 0}, Vector2{1, 0}, Vector2{0, 1} };

	Shape s(inPoints);
	Triangle t(inPoints);
	t.CalculateArea();
	t.CalculatePerimeter();
	
#pragma endregion
}