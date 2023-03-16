#pragma once
#include <vector>
#include "Vector.h"
class Shape {
protected:
	std::vector<Vector2> points;
	float area;
	float perimeter;
public:
	Shape(std::vector<Vector2> inPoints);
};

Shape::Shape(std::vector<Vector2> inPoints) {
	points = inPoints;
}