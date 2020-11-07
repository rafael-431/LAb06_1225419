#pragma once
#include "FiguraGeometrica.h"
class Circulo :
    public FiguraGeometrica
{
public:
    Circulo() {};
    ~Circulo() {};
    double GetArea() override;
    double GetPerimeter() override;

};

