#include"shape.h"
#include<math.h>
        
    hemisphere::hemisphere():radius(0){}

    hemisphere::hemisphere(double r):radius(r){}
    bool hemisphere::valid_input()
        {
            if(radius == 0.0){
                return false;
                }
            else if(radius<0){
                radius = fabs(radius);
                return true;
            }
            else return true;
            
        }
    void hemisphere::display()
        {
            std::cout<<"Volume="<<volume()<<"\n"<<"Lateral surface area="<<LSA()<<"\n"<<"Total surface area="<<TSA()<<"\n";
        }
    double hemisphere::volume()
        {
            return (0.666)*pow(radius,3)*22/7;
        }
    double hemisphere::LSA()
        {
            return 2*pow(radius,2)*22/7;
        }
    double hemisphere::TSA()
        {
            return 3*pow(radius,2)*22/7;
        }
