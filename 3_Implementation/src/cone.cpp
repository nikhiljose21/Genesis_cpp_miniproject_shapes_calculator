#include "shape.h"
#include<math.h>

cone::cone():radius(0),height(0){}

cone::cone(double r, double h):radius(r),height(h){}

bool cone::valid_input()
{
    if(radius == 0.0 || height == 0.0){
        return false;
    }
    else if(radius<0 || height<0){
        radius = fabs(radius);
        height = fabs(height);
        return true;
    }
    else
    {
        return true;
    }
}

double cone::volume()
{
    return (pow(radius,2)*(height/3)*22/7);
}

double cone::LSA()
{
    return (radius*sqrt(pow(radius,2) + pow(height,2))*22/7);
}

double cone::TSA()
{
    return (radius*(radius + sqrt(pow(radius,2) + pow(height,2)))*22/7);
}

void cone::display()
{
    std::cout<<"Radius = "<<radius<<"\n"<<"Height = "<<height<<"\n";
    std::cout<<"Volume = "<<cone::volume()<<"\n";
    std::cout<<"Lateral Surface Area = "<<cone::LSA()<<"\n";
    std::cout<<"Total Surface Area = "<<cone::TSA()<<"\n";
}