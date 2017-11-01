#ifndef REGULARPOLYGONS_H
#define REGULARPOLYGONS_H

class RegularPolygon
{
  public:
  //Class Fields
  double sides, length;
  //Class Methods
  //default constructors
  RegularPolygon();
  {
    sides= 1
    length =3
  }
  //overloading Constructor
  RegularPolygon(double sides, double length)
  {
    this->side = side;
    this->length = length;
  }
  double Perimeter();
  
}
