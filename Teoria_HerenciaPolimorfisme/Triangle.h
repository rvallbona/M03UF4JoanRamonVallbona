#pragma once
#include "Shape.h"
#include "Vector.h"
class Triangle : public Shape {
public:
	Triangle(std::vector<Vector2> inPoints);

	void CalculateArea();
	void CalculatePerimeter();
};

//Si shape necessita informacio per omplirse el constructor del fill
//es necessari que cridi al constructor del pare.
Triangle::Triangle(std::vector<Vector2> inPoints) : Shape(inPoints) {
	CalculateArea();
	CalculatePerimeter();
}

void Triangle::CalculateArea()
{
	area = 1.0f;
}

void Triangle::CalculatePerimeter()
{
	perimeter = 1.0f;
}