//
// Created by Jonas on 2019. 04. 17..
//

#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    setColor(color);
    setWidth(width);

}

void Sharpie::use() {
    --_inkAmount;
}

const std::string &Sharpie::getColor() const {
    return _color;
}

float Sharpie::getWidth() const {
    return _width;
}

float Sharpie::getInkAmount() const {
    return _inkAmount;
}

void Sharpie::setColor(const std::string &color) {
    _color = color;
}

void Sharpie::setWidth(float width) {
    _width = width;
}
