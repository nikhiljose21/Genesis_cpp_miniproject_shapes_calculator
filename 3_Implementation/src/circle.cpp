#include<shape.h>
#include<math.h>

        
    circle::circle():radius(0){}

    circle::circle(double r):radius(r){}

    bool circle::valid_input()
        {
            if(radius == 0){
                return false;
                }
            else if(radius<0){
                radius = fabs(radius);
                return true;
            }
            else return true;
            
        }
        
   void circle::display()
{
    std::cout<<"Perimeter of circle:\t"<<perimeter();
    std::cout<<"Area of circle:\t"<<area(); 
    
}
   
   double circle::perimeter()
{
    return (2*3.14*radius);
}
int circle::area()
{
    return 3.14*(pow(radius,2));
}
