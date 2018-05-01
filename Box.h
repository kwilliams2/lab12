//
// Created by klw2 on 5/1/2018.
//

#ifndef LAB12_BOX_H
#define LAB12_BOX_H

class Box {
    public:
        Box(double len = 1, double w = 1, double h = 1);
        double getVolume() const;
    private:
        double length;
        double width;
        double height;
    };

#endif //LAB12_BOX_H
