#include "Vector2.h"

float Vector2::CalculateHammingDistance(Vector2 destination)
{
    float distX = destination.x - x;
    float distY = destination.y - y;

    return distX > distY ? distX : distY;
}
