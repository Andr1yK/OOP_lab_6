//
// Created by Andriy Kobetiak on 25.10.2022.
//

#ifndef OOP_LAB_6_VECTOR3D_H
#define OOP_LAB_6_VECTOR3D_H

#include <string>

class Vector3D {
  private:
    class Triad {
      private:
        static unsigned count;

      public:
        static unsigned getCount();

        explicit Triad(int x = 0, int y = 0, int z = 0);

        int getX() const;
        void setX(int x);

        int getY() const;
        void setY(int y);

        int getZ() const;
        void setZ(int value);

        bool operator==(const Triad &rhs) const;
        bool operator!=(const Triad &rhs) const;

        void operator+=(const Triad& other);
        Triad operator+(const Triad& other);

        void operator+=(const int &other);
        Triad operator+(const int &other);

        void operator*=(const Triad &rhs);
        Triad operator*(const Triad &rhs);

        void operator*=(const int &other);
        Triad operator*(const int &other);

        void read();
        void display() const;
        std::string toString() const;
        Triad& operator=(const Triad& other);

      private:
        int x = 0;
        int y = 0;
        int z = 0;
    };

  private:
    Vector3D::Triad triad;
    static unsigned count;

  public:
    static unsigned getCount();

    explicit Vector3D(const Vector3D::Triad &triad);
    explicit Vector3D(int x = 0, int y = 0, int z = 0);

    const Vector3D::Triad &getTriad() const;
    void setTriad(const Vector3D::Triad &triad);

    void operator+=(const Vector3D& other);
    Vector3D operator+(const Vector3D& other);
    double operator*(const Vector3D& other);
    Vector3D& operator=(const Vector3D& other);

    std::string toString() const;
    void read();
    void display() const;
};

#endif //OOP_LAB_6_VECTOR3D_H
