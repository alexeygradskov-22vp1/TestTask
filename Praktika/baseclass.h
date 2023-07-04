#pragma once
#include <iostream>
using namespace std;
using namespace System::Windows::Forms;
using namespace System::Drawing;

class Figure {
protected:
    int x, y;
public:
    Figure(int _x = 0, int _y = 0):x(_x),y(_y) {};
    virtual void show(Graphics^ g) = 0;
    virtual void hide(Graphics^ g) = 0;
    virtual void replace(int newx, int newy, Graphics^ g) = 0;
};