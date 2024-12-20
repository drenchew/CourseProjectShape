#include "RegularHexagon.h"



RegularHexagon::RegularHexagon(const std::string& name, double side, bool color) : Shape2D(name,color), _side(side)
{
}


RegularHexagon::~RegularHexagon()
{
}

double RegularHexagon::perimeter() const
{
	return 6 * _side;
}


void RegularHexagon::display() const
{
	Shape2D::display();
	std::cout << "Side: " << _side << std::endl;
	std::cout << "Perimeter: " << perimeter() << std::endl;
}

double RegularHexagon::getSide() const
{
	return _side;
}

void RegularHexagon::setSide(double side)
{
	_side = side;
}

