//
// Created by Andriy Kobetiak on 25.10.2022.
//

#include <cmath>
#include "Vector3D.h"

Vector3D::Vector3D(const Triad &triad) {
  this->triad.setX(triad.getX());
  this->triad.setY(triad.getY());
  this->triad.setZ(triad.getZ());
}

const Triad &Vector3D::getTriad() const {
  return triad;
}

void Vector3D::setTriad(const Triad &triad) {
  Vector3D::triad = triad;
}

Vector3D::Vector3D() {
  setTriad(Triad{0, 0, 0});
}

Vector3D::Vector3D(int x, int y, int z) {
  setTriad(Triad{x, y, z});
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
