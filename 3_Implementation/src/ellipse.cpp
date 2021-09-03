#include<shape.h>
#include<math.h>

     ellipse::ellipse():semi_major_axis(1),semi_minor_axis(1){}
        //paramised constructor
ellipse::ellipse(double a, double b):semi_major_axis(a),semi_minor_axis(b){}   
 

  bool ellipse::valid_input()
        {
             if(semi_major_axis==0.0 || semi_minor_axis==0.0)
             {
                 return false;
             }
             else if(semi_major_axis<0||semi_minor_axis<0)
             {
                 semi_major_axis = fabs(semi_major_axis);
                semi_minor_axis = fabs(semi_minor_axis);
                return true;
             }
             else
             {
                 return true;
             }
           
        }
        
   void ellipse::display()
{
    std::cout<<"Perimeter of ellipse:\t"<<perimeter();
    std::cout<<"Area of ellipse:\t"<<area(); 
    
}
   
   double ellipse::perimeter()
{
    return 2*3.14*sqrt((pow(semi_major_axis,2)+pow(semi_minor_axis,2))/2);;
}
double ellipse::area()
{
    return 3.14*semi_major_axis*semi_minor_axis;
}