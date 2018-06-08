#pragma once
#include "TPlex.h"
#include <fstream>

class TDrawing
{
	TPlex curPlex;
	char nextChr;

	std::string getNextName();
public:
	TDrawing();
	TDrawing(const TDrawing& src);
	TDrawing& operator=(const TDrawing& src);
	~TDrawing();

	void addLine(int x1, int y1, int x2, int y2);
	void deleteLine(int x, int y);

	void save(std::string path);
	void open(std::string path);

	void showPointNames(System::Drawing::Graphics^ g);
	void showNearesPointNames(System::Drawing::Graphics^ g, int x, int y);

	void draw(System::Drawing::Graphics^ g);
	void recolor(int color);

	void movePoint(int x, int y, int dx, int dy);
	void moveLine(std::string name, int dx, int dy);
	void moveDrawing(int dx, int dy);
};
