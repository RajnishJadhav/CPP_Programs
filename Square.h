#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
	int side;
	public:
		Square(int side,int t);
		~Square();
		void Display();
	protected:
};

#endif
