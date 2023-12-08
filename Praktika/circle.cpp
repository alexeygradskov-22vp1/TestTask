#include "pch.h"
#include <iostream>
#include "circle.h"

Circle::Circle(int x, int y, int r) : Figure(x, y), radius(r) {
    if (r == 0) {
        throw gcnew System::Exception("Нулевой радиус");
    }
    if (x - r < 0 || y - r < 0 || x + r>683 || y + r>560) {
        throw gcnew System::Exception("Фигура выходит за границу окна");
    }
};

void Circle::show(Graphics^ g) {
    g->FillEllipse(Brushes::BlueViolet, x - radius, y - radius, radius * 2, radius * 2);
    g->DrawEllipse(Pens::Black, x - radius, y - radius, radius * 2, radius * 2);
}; 

void Circle::hide(Graphics^ g) {
    Pen^ pen = gcnew Pen(System::Windows::Forms::Control::DefaultBackColor);
    SolidBrush^ bruh = gcnew SolidBrush(System::Windows::Forms::Control::DefaultBackColor);
    g->FillEllipse(bruh, x - radius, y - radius, radius * 2, radius * 2);
    g->DrawEllipse(pen, x - radius, y - radius, radius * 2, radius * 2);
};

void Circle::replace(int newx, int newy, Graphics^ g) {
    if (newx - radius < 0 || newy - radius < 0 || newx + radius>683 || newy + radius>560) {
        throw gcnew System::Exception("Перемещение за границу окна");
    }
    else {
        x = newx;
        y = newy;
    }
};

int Circle::getrad() {
    return radius;
};