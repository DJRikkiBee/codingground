#include "cylinder.hpp"
const double PI = 3.1415926535898;


double Cylinder::surface_area(Cylinder& one){
  double h = one.height, r = one.radius;
  double a = 2*PI*r*h, b = 2*PI*r*r;
    return a+b;
}

double Cylinder::volume(Cylinder& one){
  double h = one.height, r = one.radius;
    return (PI*r*r*h);
}
