#pragma once
#include "baseclass.h"

class Triangle : public Figure {
private:
    int a, x2;
public:
    Triangle(int x1, int _x2, int y, int _a);
    void show(Graphics^ g) override;
    void hide(Graphics^ g) override;
    void replace(int newx, int newy, Graphics^ g) override;
};
