#pragma once
#include "FiguraGeometrica.h"
class Rectangulo :
    public FiguraGeometrica
{

public:
    Rectangulo() {};
    ~Rectangulo() {};

    double GetArea() override;
    double GetPerimeter() override;
};

