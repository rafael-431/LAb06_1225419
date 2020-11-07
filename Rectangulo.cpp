#include "Rectangulo.h"
double Rectangulo::GetArea() {
	return width * height;
}

double Rectangulo::GetPerimeter() {
	return 2 * (height + width);
}