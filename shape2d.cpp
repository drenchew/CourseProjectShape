
#include "shape2d.h"


Shape2D::Shape2D(const std::string& name, bool color) : _name(name), _color(color)
{
}


Shape2D::~Shape2D()
{
}

void Shape2D::display() const
{
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Color: " << (_color ? "True" : "False") << std::endl;
}

bool Shape2D::getColor() const
{
	return _color;
}

void Shape2D::setColor(bool color)
{
	_color = color;
}

std::string Shape2D::getName() const
{
	return _name;
}

void Shape2D::setName(const std::string& name)
{
	_name = name;
}
