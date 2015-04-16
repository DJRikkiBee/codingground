#include <iostream>
#include <iomanip>
#include "cone.hpp"
#include "prism.hpp"
#include "pyramid.hpp"
#include "sphere.hpp"
#include "cylinder.hpp"
#include "helper.hpp"


using namespace std;


int main()
{

  cout << fixed << showpoint << setprecision(2);

  Cylinder one;
  cout << "Enter cylinder height and radius >>> ";
  cin >> one;
  cout << "The cylinder volume is " << one.volume(one) << endl;
  cout << "The cylinder surface area is " << one.surface_area(one) << endl;
  cout << one;

  Sphere two;
  cout << "Enter sphere radius >>> ";
  cin >> two.radius;
  cout << "The sphere volume is " << two.volume(two) << endl;
  cout << "The sphere surface area is " << two.surface_area(two) << endl;
  cout << two.radius << endl;

  Prism three;
  cout << "Enter rectangular prism base length, height, and width >>> ";
  cin >> three;
  cout << "The rectangular prism volume is " << three.volume(three) << endl;
  cout << "The rectangular prism surface area is " << three.surface_area (three) << endl;
  cout << three;

  Cone four;
  cout << "Enter cone height and radius >>> ";
  cin >> four;
  cout << "The cone volume is " << four.volume(four) << endl;
  cout << "The cone surface area is " << four.surface_area(four) << endl;
  cout << four;

  Pyramid five;
  cout << "Enter pyramid base side length and height >>> ";
  cin >> five;
  cout << "The pyramid volume is " << five.volume(five) << endl;
  cout << "The pyramid surface area is " << five.surface_area(five) << endl;
  cout << five;

  return 0;
}
