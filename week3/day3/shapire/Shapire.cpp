//
// Created by Jonas on 2019. 04. 17..
//

#include "Shapire.h"

Shapire::Shapire(std::string color, float width) {
    setColor(color);
    setWidth(width);

}

void Shapire::use() {
    --_inkAmount;
}

const std::string &Shapire::getColor() const {
    return _color;
}

float Shapire::getWidth() const {
    return _width;
}

float Shapire::getInkAmount() const {
    return _inkAmount;
}

void Shapire::setColor(const std::string &color) {
    _color = color;
}

void Shapire::setWidth(float width) {
    _width = width;
}
