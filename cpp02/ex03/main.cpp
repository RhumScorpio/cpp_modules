#include "Point.hpp"
bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
    Point   p(2.0f, 3.0f);
    Point   p2(-1.0f, 0.0f);
    Point   p3(2.0f, -4.0f);

    Point p1(p3);
    Point p4 = p1;

    if (bsp(p, p2, p3, Point(1.72f, 0.3f)))
            std::cout << "[POINT IN]" << std::endl;
    else
            std::cout << "[POINT OUT]" << std::endl;
    Point const a(0, 0);
	Point const b(1, 1);
	Point const c(0, 1);
	Point const in1(0.329f, 0.734f);
	Point const in2(0.150f, 0.442f);
	Point const in3(0.655f, 0.797f);

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
	Point const out1(10, 10);
	Point const out2(2, 2);
	Point const out3(3, 3);
    Point const aout(0, 0);
	Point const bout(1, 1);
	Point const pout(0, 1);
	bool bspD = bsp(q, w, e, in4);
	bool bspE = bsp(q, w, e, out1);
	bool bspF = bsp(q, w, e, out2);
	bool bspG = bsp(q, w, e, out3);
	bool bspH = bsp(a, b, c, aout);
	bool bspI = bsp(a, b, c, bout);
	bool bspJ = bsp(a, b, c, pout);
	std::cout << "bsp in " << bspD << std::endl;
	std::cout << "bsp out " << bspE << std::endl;
	std::cout << "bsp out " << bspF << std::endl;
	std::cout << "bsp out " << bspG << std::endl;
	std::cout << "bsp out " << bspH << std::endl;
	std::cout << "bsp out " << bspI << std::endl;
	std::cout << "bsp out " << bspJ << std::endl;
    return (0);
}
