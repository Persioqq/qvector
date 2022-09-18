#include <iostream>
#include <fstream>

#include "QVector2.hpp"
#include "QVector3.hpp"

using namespace QVct;

int
main(void)
{
	std::cout << "\n2d Vector: \n\n";
	QVector2f v2d1(2.5f, 1.7f), v2d2(2.6f, 3.7f);

	QVector2f v2d3 = v2d1 + v2d2;

	v2d1.print(); v2d2.print(); v2d3.print();
	v2d3.increment(3).increment(1).decrement(1);
	std::cout << v2d3 << "\n\n";

	std::cout << "3d Vector: \n\n";
	QVector3f v3d1(2.5f, 1.7f, 1.1f), v3d2(2.6f, 3.7f, 1.6f);

	QVector3f v3d3 = v3d1 + v3d2;

	v3d1.print(); v3d2.print(); v3d3.print();
	v3d3.increment(3).increment(1).decrement(1);
	std::cout << v3d3 << '\n';

	return 0;
}
