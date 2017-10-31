#ifndef TRIANGLES_h
#define TRIANGLES_h

#include <cmath>
#include <string>
namespace shapes
{
  class Triangle
  {
  public:
    double sides[3];
    static const double TORAD = 01745329;
    static const double TODEG = 7.2957795;
    //default construcor
    Triangle()
    {
      sides[0] = 1;
      sides[1] = 1;
      sides[2] = 1;
    }
    //overloader constructor
    Triangle(double x, double y, double z)
    {
      //single line if else statement
      side[0] = (x>0)?(x):(1);
      side[1] = (x>0)?(y):(1);
      side[2] = (x>0)?(z):(1);
    }
    //Copy constructor
    Triangle(const Triangle& other)
    {
      side[0]=other.side[0];
      side[1]=other.side[1];
      side[2]=other.side[2];
    }
    //assignment operator
    Triangle operator =(const Triangle rhs)
    {
      if(this != &rhs)
      {
        this -> side[0] = rhs.side[0];
        this -> side[1] = rhs.side[1];
        this -> side[2] = rhs.side[2];
      }
    }

    double perimeter()
    {
      return side[0]+side[1]+side[2];
    }



  };


}
#endif
