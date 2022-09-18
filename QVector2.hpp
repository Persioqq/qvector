#pragma once

#include <iostream>
#include <fstream>

namespace QVct
{
	template <class T>
	class QVector2
	{
		public:
			T x, y;
			QVector2(T xin, T yin) : x(xin), y(yin) {}

			QVector2 operator + (const QVector2 &rhs) {
				return QVector2(x + rhs.x, y + rhs.y);}
			QVector2 operator - (const QVector2 &rhs) {
				return QVector2(x - rhs.x, y - rhs.y);}
			QVector2 operator * (const QVector2 &rhs) {
				return QVector2(x * rhs.x, y * rhs.y);}
			QVector2 operator / (const QVector2 &rhs) {
				return QVector2(x /= rhs.x, y /= rhs.y);}

			void print() {std::cout << x << '\t' << y << '\n';}
		
			QVector2 & increment(T number)
			{
				x += number;
				y += number;
				return *this;
			}

			QVector2 & decrement(T number)
			{
				x -= number;
				y -= number;
				return *this;
			}

			friend std::ostream & operator << 
				(std::ostream &stream, const QVector2 &v)
			{
				return stream << v.x << '\t' << v.y;
			}

	};


	using QVector2f = QVector2<float>;
	using QVector2i = QVector2<int>;
	using QVector2u = QVector2<unsigned int>;
}
