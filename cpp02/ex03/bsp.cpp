#include "Point.hpp"

float	checkingArea(Point const a, Point const b, Point const c)
{
	Fixed result = ((a.x().toFloat() * (b.y().toFloat() - c.y().toFloat())) + 
					(b.x().toFloat() * (c.y().toFloat() - a.y().toFloat())) +
					(c.x().toFloat() * (a.y().toFloat() - b.y().toFloat()))) / 2;
	return (result.toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	totalArea = std::abs(checkingArea(a, b, c));
	Fixed	area1 = std::abs(checkingArea(a, b, point));
	Fixed	area2 = std::abs(checkingArea(b, c, point));
	Fixed	area3 = std::abs(checkingArea(c, a, point));
	return (totalArea == area1 + area2 + area3);
}