#include <iostream>
#include "Vector3D/Vector3D.h"

int main() {
  Vector3D vector3D1;
  vector3D1.read();

  Vector3D vector3D2{2, -6, 1};

  std::cout << (vector3D1 * vector3D2) << std::endl;

  (vector3D1 + vector3D2).display();

  std::cout << "Number of Vector3D: " << Vector3D::getCount() << std::endl;
  std::cout << "Number of Triad: " << Vector3D::getCount() << std::endl;

  return 0;
}
