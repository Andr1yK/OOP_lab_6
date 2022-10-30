//
// Created by Andriy Kobetiak on 25.10.2022.
//

#include "Triad.h"

int Triad::getX() const {
  return x;
}

void Triad::setX(int x) {
  Triad::x = x;
}

int Triad::getY() const {
  return y;
}

void Triad::setY(int y) {
  Triad::y = y;
}

int Triad::getZ() const {
  return z;
}

void Triad::setZ(int z) {
  Triad::z = z;
}

Triad::Triad(int x, int y, int z)
  : x(x),
  y(y),
  z(z) {}

bool Triad::operator==(const Triad &rhs) const {
  return x == rhs.x &&
         y == rhs.y &&
         z == rhs.z;
}

bool Triad::operator!=(const Triad &rhs) const {
  return !(rhs == *this);
}

void Triad::operator+=(const Triad &other) {
  this->x += other.x;
  this->y += other.y;
  this->z += other.z;
}

Triad Triad::operator+(const Triad &other) {
  Triad copy;
  copy += other;

  return copy;
}

void Triad::operator+=(const int &other) {
  this->x += other;
  this->y += other;
  this->z += other;
}

Triad Triad::operator+(const int &other) {
  Triad copy;
  copy += other;

  return copy;
}

void Triad::operator*=(const int &other) {
  this->x *= other;
  this->y *= other;
  this->z *= other;
}

Triad Triad::operator*(const int &other) {
  Triad copy;
  copy *= other;

  return copy;
}

void Triad::operator*=(const Triad &other) {
  this->x *= other.x;
  this->y *= other.y;
  this->z *= other.z;
}

Triad Triad::operator*(const Triad &other) {
  Triad copy;
  copy *= other;

  return copy;
}

std::string Triad::toString() const {
  return std::string("{ x: " + std::to_string(getX())
                     + ", y: " + std::to_string(getY())
                     + ", z: " + std::to_string(getZ()) + " }");
}

Triad& Triad::operator=(const Triad& other) {
  if (this!=&other)
  {
    x = other.getX();
    y = other.getY();
    z = other.getZ();
  }

  return *this;
}

void Triad::read() {
  std::cout << "X: "; std::cin >> x;
  std::cout << "Y: "; std::cin >> y;
  std::cout << "Z: "; std::cin >> z;
}

void Triad::display() const {
  std::cout << toString() << std::endl;
}

