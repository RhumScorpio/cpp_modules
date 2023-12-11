#include "Point.hpp"

Point::~Point()
{
}

Point::Point(void) : X(0), Y(0)
{
}

Point::Point(const float x, const float y) : X(x), Y(y)
{
}

Point::Point(const Point &Point) : X(Point.x()), Y(Point.y())
{
}
Point &Point::operator=(const Point &equal)
{
	if (this != &equal)
        *this = Point(equal);
	return *this;
}

void Point::showPoint(void) const
{
	std::cout << "( " << this->x() << ", " << this->y() << " )" << std::endl;
}

Fixed Point::x(void) const
{
	return(this->X);
}

Fixed Point::y(void) const
{
	return(this->Y);
}