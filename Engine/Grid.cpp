#include "Grid.h"

Grid::Grid(Graphics & gfx)
	:
	gfx(gfx)
{
}

int Grid::GetWidth() const
{
	return width;
}

int Grid::GetHeigth() const
{
	return heigth;
}
