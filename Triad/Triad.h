//
// Created by Andriy Kobetiak on 25.10.2022.
//

#ifndef OOP_LAB_5_TRIAD_H
#define OOP_LAB_5_TRIAD_H


#include <ostream>
#include <iostream>
#include <string>

class Triad {
  public:
    explicit Triad(int x = 0, int y = 0, int z = 0);

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

    int getZ() const;
    void setZ(int z);

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


#endif //OOP_LAB_5_TRIAD_H
