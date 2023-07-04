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
            if (Figures[i]->isvisible == true) {
                Figures[i]->show(g);
            }
        }
    }
    void allvisible() {
        for (int i = 0; i < Figures.size(); i++) {
            Figures[i]->isvisible = true;
        }
    }
    void showbyid(int id) {
        Figures[id]->isvisible = true;
    }
    void hidebyid(int id) {
        Figures[id]->isvisible = false;
    }
    void replacebyid(int newx,int newy,int id, Graphics^ g) {
        Figures[id]->replace(newx, newy,g);
    }
    bool checkbyid(int id) {
        return Figures[id]->isvisible;
    }
    int getsize() {
        return(Figures.size());
    }
    void clean(Graphics^ g) {
        for (int i = 0; i < Figures.size(); i++) {
            Figures[i]->hide(g);
        }
        Figures.clear();
    }
};