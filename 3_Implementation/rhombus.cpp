#include "shape.h"
#include "math.h"
#include "stdlib.h"
using namespace std;

 rhombus::rhombus():diagonal1(1),diagonal2(1){}
        //paramised constructor
rhombus::rhombus(int d1, int d2):diagonal1(d1),diagonal2(d2){}
bool rhombus::valid_input()
        {
             if(diagonal1==0.0 || diagonal2==0.0)
             {
                 return false;
             }
             else if(diagonal1<0||diagonal2<0)
             {
                 diagonal1 = fabs(diagonal1);
                diagonal2 = fabs(diagonal2);
                return true;
             }
             else
             {
                 return true;
             }
           
        }
void rhombus::display()
{
    std::cout<<"Perimeter of rhombus:\t"<<perimeter();
     std::cout<<"Area of rhombus:\t"<<area(); 
}
int rhombus::perimeter()
    {
         return (2*sqrt(pow(diagonal1,2)+pow(diagonal2,2)));
    }
   
int rhombus::area()
        {
            return (diagonal1*diagonal2/2);
        }