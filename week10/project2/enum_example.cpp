#ifndef HOUSEPAINT_HPP
#define HOUSEPAINT_HPP


#include <iostream>
#include <stdio.h>

enum Color {maroon, ivory, sage, periwinkle, chartreuse, cobalt, lemon, lavender, orange};

class HousePaint
{
private:
    Color siding;
    Color trim;
public:
    HousePaint(Color sColor, Color tColor);
    void setSiding(Color sColor);
    Color getSiding();
    void setTrim(Color tColor);
    Color getTrim();
};

#endif


HousePaint::HousePaint(Color sColor, Color tColor)
{
    setSiding(sColor);
    setTrim(tColor);
}

void HousePaint::setSiding(Color sColor)
{
    siding = sColor;
}

Color HousePaint::getSiding()
{
    return siding;
}

void HousePaint::setTrim(Color tColor)
{
    trim = tColor;
}

Color HousePaint::getTrim()
{
    return trim;
}

int main()
{
    HousePaint hp(cobalt, ivory);
    if (hp.getTrim() == ivory)
    	std::cout << hp.getTrim() << std::endl;
        std::cout << "trim is ivory" << std::endl;
}