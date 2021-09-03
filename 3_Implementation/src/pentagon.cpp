  #include"shape.h"
  #include<math.h>
    pentagon::pentagon()
    {
        side=0;
        interior_angle=0;
        exterior_angle=0;
    }
        //paramised constructor
    pentagon::pentagon(double s)
    {
        side=s;
        interior_angle=108;
        exterior_angle=72;
    }
    bool pentagon::valid_input()
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
    void pentagon::display()
        {
            std::cout<<"Area="<<area()<<"\n"<<"Perimeter="<<perimeter()<<"\n"<<"Interior angle="<<interior_angle<<"\nExterior angle="<<exterior_angle<<"\n";
        }
    double pentagon::perimeter()
        {
            return 5*side;
        }
    double pentagon::area()
        {
            return 1.720477*pow(side,2);
        }

