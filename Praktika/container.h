#pragma once
#include <vector>
#include "baseclass.h"
#include "circle.h"

class Contain {
private:
    vector<Figure*> Figures;
public:
    void add(Figure* f) {
        Figures.push_back(f);
    };
    void showall(Graphics^ g) {
        for (int i = 0; i < Figures.size(); i++) {
            Figures[i]->show(g);
        }
    }
    void pop() {
        delete Figures[Figures.size() - 1];
        Figures.pop_back();
    };
    void replacelast(int newx,int newy, Graphics^ g) {
        Figures[Figures.size() - 1]->replace(newx, newy,g);
    }
    int getsize() {
        return(Figures.size());
    }
    void clear() {
        Figures.clear();
    }
};