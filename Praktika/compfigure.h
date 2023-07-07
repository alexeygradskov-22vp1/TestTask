#pragma once
#include <iostream>
#include "triangle.h"
#include "circle.h"
using namespace std;

class CompFigure : public Figure {
private:
    Circle* c;
    Triangle* t;
public:
    CompFigure(int x1, int x2, int y, int a, int r);
    void show(Graphics^ g) override;
    void hide(Graphics^ g) override;
    void replace(int newx, int newy, Graphics^ g) override;
    ~CompFigure();
};
