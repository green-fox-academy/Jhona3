//
// Created by Jonas on 2019. 04. 17..
//

#ifndef SHAPIRE_SHAPIRE_H
#define SHAPIRE_SHAPIRE_H

#include <iostream>



class Sharpie {
public:
    Sharpie(std::string color, float width);
    void use();

private:
    std::string _color;
public:
    void setColor(const std::string &color);

    void setWidth(float width);

public:
    const std::string &getColor() const;

    float getWidth() const;

    float getInkAmount() const;

private:
    float _width = 0;
    float _inkAmount = 100;
};


#endif //SHAPIRE_SHAPIRE_H
