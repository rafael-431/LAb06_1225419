#pragma once
#include "FiguraGeometrica.h"
class Cuadrado :
    public FiguraGeometrica
{
    Cuadrado() {};
    ~Cuadrado() {};
    double GetArea() override;
    double GetPerimeter() override;

};

