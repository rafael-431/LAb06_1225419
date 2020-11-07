#pragma once
#include "FiguraGeometrica.h"
class Trinagulo :
    public FiguraGeometrica
{
public:
    Trinagulo() {};
    ~Trinagulo() {};
    double GetArea() override;
    double GetPerimeter() override;

};

