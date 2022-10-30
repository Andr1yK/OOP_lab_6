//
// Created by Andriy Kobetiak on 25.10.2022.
//

#include <iostream>
#include "Vector3D.h"

unsigned Vector3D::count = 0;
unsigned Vector3D::Triad::count = 0;

Vector3D::Vector3D(const Triad &triad) {
  this->triad.setX(triad.getX());
  this->triad.setY(triad.getY());
  this->triad.setZ(triad.getZ());

  Vector3D::count += 1;
}

const Vector3D::Triad &Vector3D::getTriad() const {
  return triad;
}

void Vector3D::setTriad(const Triad &copy) {
  Vector3D::triad = copy;
}

Vector3D::Vector3D(int x, int y, int z) {
  setTriad(Triad{x, y, z});

  Vector3D::count += 1;
}

void Vector3D::operator+=(const Vector3D &other) {
  Vector3D::triad += other.triad;
}

Vector3D Vector3D::operator+(const Vector3D &other) {
  Vector3D copy = Vector3D(*this);

  copy += other;

  return copy;
}

double Vector3D::operator*(const Vector3D &other) {
  return this->triad.getX() * other.triad.getX()
         + this->triad.getY() * other.triad.getY()
         + this->triad.getZ() * other.triad.getZ();
}

std::string Vector3D::toString() const {
  return triad.toString();
}

Vector3D& Vector3D::operator=(const Vector3D& other) {
  if (this!=&other) {
    Triad otherTriad = other.getTriad();

    this->triad.setX(otherTriad.getX());
    this->triad.setY(otherTriad.getY());
    this->triad.setZ(otherTriad.getZ());
  }

  return *this;
}

void Vector3D::read() {
  triad.read();
}

void Vector3D::display() const {
  triad.display();
}

unsigned Vector3D::getCount() {
  return count;
}

int Vector3D::Triad::getX() const {
  return x;
}

void Vector3D::Triad::setX(int value) {
  Triad::x = value;
}

int Vector3D::Triad::getY() const {
  return y;
}

void Vector3D::Triad::setY(int value) {
  Vector3D::Triad::y = value;
}

int Vector3D::Triad::getZ() const {
  return z;
}

void Vector3D::Triad::setZ(int value) {
  Triad::z = value;
}

Vector3D::Triad::Triad(int x, int y, int z)
    : x(x),
      y(y),
      z(z) {
//  Vector3D::Triad::count++;
}

bool Vector3D::Triad::operator==(const Vector3D::Triad &rhs) const {
  return x == rhs.x &&
         y == rhs.y &&
         z == rhs.z;
}

bool Vector3D::Triad::operator!=(const Vector3D::Triad &rhs) const {
  return !(rhs == *this);
}

void Vector3D::Triad::operator+=(const Vector3D::Triad &other) {
  this->x += other.x;
  this->y += other.y;
  this->z += other.z;
}

Vector3D::Triad Vector3D::Triad::operator+(const Vector3D::Triad &other) {
  Triad copy;
  copy += other;

  return copy;
}

void Vector3D::Triad::operator+=(const int &other) {
  this->x += other;
  this->y += other;
  this->z += other;
}

Vector3D::Triad Vector3D::Triad::operator+(const int &other) {
  Triad copy;
  copy += other;

  return copy;
}

void Vector3D::Triad::operator*=(const int &other) {
  this->x *= other;
  this->y *= other;
  this->z *= other;
}

Vector3D::Triad Vector3D::Triad::operator*(const int &other) {
  Triad copy;
  copy *= other;

  return copy;
}

void Vector3D::Triad::operator*=(const Vector3D::Triad &other) {
  this->x *= other.x;
  this->y *= other.y;
  this->z *= other.z;
}

Vector3D::Triad Vector3D::Triad::operator*(const Vector3D::Triad &other) {
  Triad copy;
  copy *= other;

  return copy;
}

std::string Vector3D::Triad::toString() const {
  return std::string("{ x: " + std::to_string(getX())
                     + ", y: " + std::to_string(getY())
                     + ", z: " + std::to_string(getZ()) + " }");
}

Vector3D::Triad& Vector3D::Triad::operator=(const Vector3D::Triad& other) {
  if (this!=&other)
  {
    x = other.getX();
    y = other.getY();
    z = other.getZ();
  }

  return *this;
}

void Vector3D::Triad::read() {
  std::cout << "X: "; std::cin >> x;
  std::cout << "Y: "; std::cin >> y;
  std::cout << "Z: "; std::cin >> z;
}

void Vector3D::Triad::display() const {
  std::cout << toString() << std::endl;
}

unsigned Vector3D::Triad::getCount() {
  return count;
}
