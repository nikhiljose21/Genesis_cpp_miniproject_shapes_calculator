#include"shape.h"
  #include<math.h>

/**
 * @brief default constructor for hexagon
 * 
 */
    hexagon::hexagon()
    {
        side=0;
        interior_angle=0;
        exterior_angle=0;
    }
        
/**
 * @brief parameterised constructor for hexagon
 * 
 * @param s
 */

    hexagon::hexagon(double s)
    {
        side=s;
        interior_angle=120;
        exterior_angle=60;
    }

/**
 * @brief function to check if the input is valid or not
 * 
 * @return true if the inputs are valid
 * @return false if the inputs are invalid
 */
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

/**
 * @brief function to calculate the perimeter of hexagon
 * 
 * @return double perimeter
 */
    double hexagon::perimeter()
        {
            return 6*side;
        }


/**
 * @brief function to calculate area of hexagon
 * 
 * @return double area 
 */
    double hexagon::area()
        {
            return 2.598*pow(side,2);
        }


/**
 * @brief function to display area, perimeter, interior and exterior angle of hexagon
 * 
 */

    void hexagon::display()
        {
    std::cout<<"Perimeter of hexagon:"<<perimeter()<<"\n";
    std::cout<<"Area of hexagon:"<<area()<<"\n"; 
    std::cout<<"Interior angle(in degrees) :"<<interior_angle<<"\n";
    std::cout<<"Exterior angle(in degrees) : "<<exterior_angle<<"\n";  
        }
