#pragma once
#include "Graphics.h"

class Grid {
public:
	Grid(Graphics& gfx);
	int GetWidth()const;
	int GetHeigth()const;
private:
	static constexpr int dimension = 10;
	static constexpr int width = 26;
	static constexpr int heigth = 50; // not sure yet
	Graphics& gfx;
};