//
// Created by Andriy Kobetiak on 25.10.2022.
//

#ifndef OOP_LAB_5_VECTOR3D_H
#define OOP_LAB_5_VECTOR3D_H

#include "../Triad/Triad.h"

class Vector3D {
  private:
    Triad triad;
  public:
    explicit Vector3D(const Triad &triad);
    explicit Vector3D(int x, int y = 0, int z = 0);
    Vector3D();

    const Triad &getTriad() const;
    void setTriad(const Triad &triad);

    void operator+=(const Vector3D& other);
    Vector3D operator+(const Vector3D& other);
    double operator*(const Vector3D& other);
    Vector3D& operator=(const Vector3D& other);

    std::string toString() const;
    void read();
    void display() const;
};


#endif //OOP_LAB_5_VECTOR3D_H
