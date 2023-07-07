#include "pch.h"
#include <iostream>
#include "compfigure.h"

CompFigure::CompFigure(int x1, int x2, int y, int a, int r) {
    c = new Circle(x1 + r, y, r);
    t = new Triangle(x1, x2, y, a);
};

void CompFigure::show(Graphics^ g) {
    t->show(g);
    c->show(g);
};

void CompFigure::hide(Graphics^ g) {
    t->hide(g);
    c->hide(g);
};

void CompFigure::replace(int newx, int newy, Graphics^ g) {
    t->replace(newx, newy, g);
    c->replace(newx + c->getrad(), newy, g);
};

CompFigure::~CompFigure() {
    delete c;
    delete t;
};