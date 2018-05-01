//
// Created by klw2 on 5/1/2018.
//

#ifndef LAB12_BOTS_H
#define LAB12_BOTS_H


class bots {
public:
    Box(double len = 1, double w = 1, double h = 1);
    double getVolume() const;
private:
    double length;
    double witdth;
    double height;
};


#endif //LAB12_BOTS_H
