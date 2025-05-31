#include "Point.hpp"

float	checkingArea(Point const a, Point const b, Point const c)
{
	Fixed result = ((a.x() * (b.y() - c.y())) + 
					(b.x() * (c.y() - a.y())) +
					(c.x() * (a.y() - b.y()))) / 2;
	return (result.toFloat());
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed    totalArea = roundf(std::abs(checkingArea(a, b, c)));
    Fixed    area1 = std::abs(checkingArea(a, b, point));
    Fixed    area2 = std::abs(checkingArea(b, c, point));
    Fixed    area3 = std::abs(checkingArea(c, a, point));
	Fixed	 sumArea = roundf(area1.toFloat() + area2.toFloat() + area3.toFloat());

	if (!(area1.getRawBits() && area2.getRawBits() && area3.getRawBits()))
		return (0);
    return (totalArea == sumArea);
}
