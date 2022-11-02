#include "Figure.h"

std::vector<Figure*> figures;

void PrintFigures(std::vector<Figure*> figures)
{
	for (unsigned i = 0; i < figures.size(); i++)
	{
		std::cout << "[" << i << "] => pos(" << figures[i]->getPositionX() << ", " << figures[i]->getPositionY()
			<< ") => scale(" << figures[i]->getScaleX() << ", " << figures[i]->getScaleY() << ")" << std::endl;
	}
}

void AddFigure(std::vector<Figure*>& figures, Figure& figure)
{
	figures.push_back(&figure);
}

std::vector<Figure*>& getFigures() {
	return figures;
}