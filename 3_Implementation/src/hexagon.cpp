#include"shape.h"
  #include<math.h>
    hexagon::hexagon()
    {
        side=0;
        interior_angle=0;
        exterior_angle=0;
    }
        //parameterised constructor
    hexagon::hexagon(double s)
    {
        side=s;
        interior_angle=120;
        exterior_angle=60;
    }
    bool hexagon::valid_input()
        {
            if(side==0.0){
            return false;
            }
            else if(side<0){
                side = fabs(side);
            return true;
            }
            else return true;
        }
    void hexagon::display()
        {
    std::cout<<"Perimeter of hexagon:"<<perimeter()<<"\n";
    std::cout<<"Area of hexagon:"<<area()<<"\n"; 
    std::cout<<"Interior angle(in degrees) :"<<interior_angle<<"\n";
    std::cout<<"Exterior angle(in degrees) : "<<exterior_angle<<"\n";  
        }
    double hexagon::perimeter()
        {
            return 6*side;
        }
    double hexagon::area()
        {
            return 2.598*pow(side,2);
        }
