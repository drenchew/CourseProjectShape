#pragma once
#ifndef SHAPE_2D
#define SHAPE_2D

#include <iostream>
#include <string>

class Shape2D
{
public:
	Shape2D(const std::string& name,bool color);
	virtual ~Shape2D();

	virtual double perimeter() const = 0;
	virtual void display() const;

	bool getColor() const;
	void setColor(bool color);

	std::string getName() const;
	void setName(const std::string& name);

private:
	std::string _name;
	bool _color;
};



#endif // !SHAPE_2D
