#include "shape.h"
#include "math.h"
#include "stdlib.h"
using namespace std;


 square::square()
  {
    regular::side = 1;
    regular::interior_angle = 90;
    regular::exterior_angle = 90;
}

square::square(double s) {
    regular::side = s;
    regular::interior_angle = 90;
    regular::exterior_angle = 90;
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

double square::perimeter()
{
    return (4*side);
}
double square::area()
{
    return (pow(side,2));
}
/*double square::getInteriorAngle()
{
    return regular::interior_angle;
}

int square::getExteriorAngle()
{
    return regular::exterior_angle;
}*/
void square::display()
{
    std::cout<<"Perimeter of square:\t"<<perimeter();
    std::cout<<"Area of square:\t"<<area(); 
    std::cout<<"interior angle of square:\t"<<interior_angle;
    std::cout<<"exterior angle of square:\t"<<exterior_angle;
     

}