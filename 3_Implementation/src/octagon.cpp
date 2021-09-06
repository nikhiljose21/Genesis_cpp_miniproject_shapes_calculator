  #include"shape.h"
  #include<math.h>

/**
 * @brief default constructor for octagon
 * 
 */
    octagon::octagon()
    {
        side=0;
        interior_angle=0;
        exterior_angle=0;
    }
     

/**
 * @brief parameterised constructor for octagon
 * 
 * @param double s
 */
    octagon::octagon(double s)
    {
        side=s;
        interior_angle=135;
        exterior_angle=45;
    }


/**
 * @brief function to check if the input is valid or not
 * 
 * @return true if the inputs are valid
 * @return false if the inputs are invalid
 */
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

/**
 * @brief function to calculate the perimeter of octagon
 * 
 * @return double perimeter
 */
  
    double octagon::perimeter()
        {
            return 8*side;
        }

/**
 * @brief function to calculate area of octagon
 * 
 * @return double area 
 */
    double octagon::area()
        {
            return 4.8284*pow(side,2);
        }

/**
 * @brief function to display area, perimeter, interior and exterior angle of octagon
 * 
 */
  void octagon::display()
        {
        
    std::cout<<"Perimeter of octagon :"<<perimeter()<<"\n";
    std::cout<<"Area of octagon :"<<area()<<"\n"; 
    std::cout<<"Interior angle(in degrees) :"<<interior_angle<<"\n";
    std::cout<<"Exterior angle(in degrees) : "<<exterior_angle<<"\n";
    }
