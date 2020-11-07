#include "Circulo.h"
double Circulo::GetArea() {
	return 3.14159 * (width / 2) * (width / 2);
}

double Circulo::GetPerimeter() {
	return 3.14159 * 2 * (width / 2);
}