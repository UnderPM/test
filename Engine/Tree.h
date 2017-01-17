#pragma once
#include "Graphics.h"
class Tree {
public:
	Tree(Graphics& gfx);
private:
	void DrawPro(int x, int y, Graphics& gfx);
	void DrawPreStage(int x, int y, Graphics& gfx, Color c);
	void DrawStage(int x, int y, Graphics& gfx, Color c);
	void DrawProAmber(int x, int y, Graphics& gfx, Color c);
	void DrawGreenLight(int x, int y, Graphics& gfx, Color c);
	void DrawRedLight(int x, int y, Graphics& gfx, Color c);
};