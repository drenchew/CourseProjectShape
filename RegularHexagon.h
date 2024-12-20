#pragma once
#ifndef  R_HEXAGON
#define R_HEXAGON

#include "shape2d.h"

class RegularHexagon final : public Shape2D 
{
public:
	RegularHexagon() = delete;
	RegularHexagon(const std::string& name, double side,bool color);

	~RegularHexagon();

	double perimeter() const override;
	void display() const override final;

	double getSide() const;
	void setSide(double side);

private:
	double _side;
};

#endif // ! R_HEXAGON
