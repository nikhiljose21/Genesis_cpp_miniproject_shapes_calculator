  #include"shape.h"
  #include<math.h>
    octagon::octagon()
    {
        side=0;
        interior_angle=0;
        exterior_angle=0;
    }
        //parameterised constructor
    octagon::octagon(double s)
    {
        side=s;
        interior_angle=135;
        exterior_angle=45;
    }
    bool octagon::valid_input()
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


    void octagon::display()
        {
        
    std::cout<<"Perimeter of octagon :"<<perimeter()<<"\n";
    std::cout<<"Area of octagon :"<<area()<<"\n"; 
    std::cout<<"Interior angle(in degrees) :"<<interior_angle<<"\n";
    std::cout<<"Exterior angle(in degrees) : "<<exterior_angle<<"\n";
    }
    double octagon::perimeter()
        {
            return 8*side;
        }
    double octagon::area()
        {
            return 4.8284*pow(side,2);
        }

