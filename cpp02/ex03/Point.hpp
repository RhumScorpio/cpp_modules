#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private :
		Fixed const X;
		Fixed const Y;
	public :
	    // constructors
    	Point(const Point &Point);
		Point(const float x, const float y);
    	Point(void);
    	// destructor
        ~Point();
		//utilities
		void showPoint(void) const;
		Fixed x(void) const;
		Fixed y(void) const;
		Point &operator=(const Point& equal);
		void setX(Fixed &x);
		void setY(Fixed &y);

};

#endif