#pragma once

class Vector2 {
public:
	float x;
	float y;
	Vector2() : x(0.0f), y(0.0f) {}
	Vector2(float x, float y)
		: x(x),y(y) {}

	float CalculateHammingDistance(Vector2 destination);
};