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
    CompFigure(int x1, int x2, int y, int a, int r) {
        c = new Circle(x1 + r, y, r);
        t = new Triangle(x1, x2, y, a);
    };
    void show(Graphics^ g) override {
        t->show(g);
        c->show(g);
    };
    void hide(Graphics^ g) override {
        t->hide(g);
        c->hide(g);
    };
    void replace(int newx, int newy, Graphics^ g) override {
        t->replace(newx, newy, g);
        c->replace(newx + c->getrad(), newy, g);
    };
    ~CompFigure() {
        delete c;
        delete t;
    };
};
