#pragma once

#include <iostream>
#include <fstream>

namespace QVct 
{
	template <class T>
	class QVector3
	{
		public:
			T x, y, z;
			QVector3(T xin, T yin, T zin) : x(xin), y(yin), z(zin) {}

			QVector3 operator + (const QVector3 &rhs) {
				return QVector3(x + rhs.x, y + rhs.y, z + rhs.z);}
			QVector3 operator - (const QVector3 &rhs) {
				return QVector3(x - rhs.x, y - rhs.y, z - rhs.z);}
			QVector3 operator * (const QVector3 &rhs) {
				return QVector3(x * rhs.x, y * rhs.y, z * rhs.z);}
			QVector3 operator / (const QVector3 &rhs) {
				return QVector3(x /= rhs.x, y /= rhs.y, z /= rhs.z);}

			void print() {std::cout << x << '\t' << y << '\t' << z << '\n';}
		
			QVector3 & increment(T number)
			{
				x += number;
				y += number;
				z += number;
				return *this;
			}

			QVector3 & decrement(T number)
			{
				x -= number;
				y -= number;
				z -= number;
				return *this;
			}

			friend std::ostream & operator << 
				(std::ostream &stream, const QVector3 &v)
			{
				return stream << v.x << '\t' << v.y << '\t' << v.z;
			}

	};


	using QVector3f = QVector3<float>;
	using QVector3i = QVector3<int>;
	using QVector3u = QVector3<unsigned int>;
}
