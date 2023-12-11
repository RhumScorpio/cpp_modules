#include "Point.hpp"
bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
    Point const a(0, 0);
	Point const b(1, 1);
	Point const c(0, 1);
	Point const in1(0, 1);
	Point const in2(0, 0);
	Point const in3(1, 1);

	bool bspA = bsp(a, b, c, in1);
	bool bspB = bsp(a, b, c, in2);
	bool bspC = bsp(a, b, c, in3);
	std::cout << "bsp in " << bspA << std::endl;
	std::cout << "bsp in " << bspB << std::endl;
	std::cout << "bsp in " << bspC << std::endl;

	Point const q(5, 0);
	Point const w(10, 10);
	Point const e(15, 0);
	Point const in4(10, 4);
	Point const out1(1, 1);
	Point const out2(2, 2);
	Point const out3(3, 3);
	bool bspD = bsp(q, w, e, in4);
	bool bspE = bsp(q, w, e, out1);
	bool bspF = bsp(q, w, e, out2);
	bool bspG = bsp(q, w, e, out3);
	std::cout << "bsp in " << bspD << std::endl;
	std::cout << "bsp out " << bspE << std::endl;
	std::cout << "bsp out " << bspF << std::endl;
	std::cout << "bsp out " << bspG << std::endl;
    return (0);
}