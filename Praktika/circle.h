#pragma once
#include "baseclass.h"

class Circle : public Figure {
private:
    int radius;
public:
    Circle(int x, int y, int r);
    void show(Graphics^ g) override;
    void hide(Graphics^ g) override;
    void replace(int newx, int newy, Graphics^ g)  override;
    int getrad();
};