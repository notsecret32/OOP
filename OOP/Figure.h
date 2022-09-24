#pragma once
#include <iostream>
#include <vector>

class Figure
{
protected:
	struct Position {
		double x;
		double y;
	} position;

	struct Scale{
		double x;
		double y;
	} scale;

	double area = 0;
protected:
	virtual double FindArea() const = 0;
public:
	virtual ~Figure() = 0 { }

	void setPosition(double x, double y) { this->position.x = x; this->position.y = y; }
	void setScale(double x, double y) { this->scale.x = x; this->scale.y = y; }

	void setPosition(Position pos) { this->position = pos; }
	void setScale(Scale scale) { this->scale = scale; }

	Position getPosition() const { return this->position; }
	Scale getScale() const { return this->scale; }

	double getPositionX() const { return this->position.x; }
	double getPositionY() const { return this->position.y; }

	double getScaleX() const { return this->scale.x; }
	double getScaleY() const { return this->scale.y; }
};

void PrintFigures(std::vector<Figure*> figures);
void AddFigure(std::vector<Figure*>& figures, Figure& figure);
std::vector<Figure*>& getFigures();