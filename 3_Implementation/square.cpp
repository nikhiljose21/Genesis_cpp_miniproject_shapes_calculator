#include "shape.h"
#include "math.h"
#include "stdlib.h"
using namespace std;


 square::square()
  {
    regular::side = 1;
    regular::interior_angle = 140;
    regular::exterior_angle = 40;
}

square::square(int s) {
    regular::side = s;
    regular::interior_angle = 140;
    regular::exterior_angle = 40;
 }

bool square::valid_input()
{
    if(side==0.0)
    {
        return false;
    }
    else if(side<0)
    {
        side = fabs(side);
        return true;
    }
    else
    {
        return true;
    }
}

int square::perimeter()
{
    return (4*side);
}
int square::area()
{
    return (pow(side,2));
}
int square::getInteriorAngle()
{
    return regular::interior_angle;
}

int square::getExteriorAngle()
{
    return regular::exterior_angle;
}
void square::display()
{
    std::cout<<"Perimeter of square:\t"<<perimeter();
    std::cout<<"Area of square:\t"<<area(); 
    std::cout<<"interior angle of square:\t"<<getInteriorAngle();
    std::cout<<"exterior angle of square:\t"<<getExteriorAngle();
     

}
