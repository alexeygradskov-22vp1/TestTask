#pragma once
#include "baseclass.h"

class Triangle : public Figure {
private:
    int a, x2;
public:
    Triangle(int x1, int _x2, int y, int _a): Figure(x1,y),x2(_x2),a(_a){};
    void show(Graphics^ g) override {
        cli::array<Point>^ p = gcnew cli::array<Point>(3);
        p[0].X = x; p[0].Y = y+a/2;
        p[1].X = x; p[1].Y = y-a/2;
        p[2].X = x2; p[2].Y = y;
        g->FillPolygon(Brushes::Green, p);
        g->DrawPolygon(Pens::Black, p);
    };
    void hide(Graphics^ g) override {

    };
    void replace(int newx, int newy, Graphics^ g) override {
        x2 = newx + (x2 - x);
        x = newx;
        y = newy;
    };
};
