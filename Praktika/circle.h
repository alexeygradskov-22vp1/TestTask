#pragma once
#include "baseclass.h"

class Circle : public Figure {
private:
    int radius;
public:
    Circle(int x, int y, int r) : Figure(x, y), radius(r) {};
    void show(Graphics^ g) override {
        g->FillEllipse(Brushes::Gold, x-radius, y-radius, radius*2, radius*2);
        g->DrawEllipse(Pens::Black, x - radius, y - radius, radius * 2, radius * 2);
    };
    void hide(Graphics^ g) override {
        Pen^ pen = gcnew Pen(System::Windows::Forms::Control::DefaultBackColor);
        SolidBrush^ bruh = gcnew SolidBrush(System::Windows::Forms::Control::DefaultBackColor);
        g->FillEllipse(bruh, x - radius, y - radius, radius * 2, radius * 2);
        g->DrawEllipse(pen, x - radius, y - radius, radius * 2, radius * 2);
    };
    void replace(int newx, int newy, Graphics^ g)  override {
        x = newx;
        y = newy;
    };
    int getrad() {
        return radius;
    };
};