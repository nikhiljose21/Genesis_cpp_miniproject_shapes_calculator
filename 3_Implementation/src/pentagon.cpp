  #include"shape.h"
  #include<math.h>
   /**
 * @brief default constructor for pentagon
 * 
 */
    pentagon::pentagon()
    {
        side=0;
        interior_angle=0;
        exterior_angle=0;
    }
   /**
     * @brief parameterised constructor for pentagon
     * 
     * @param s length of the side
     */
    pentagon::pentagon(double s)
    {
        side=s;
        interior_angle=108;
        exterior_angle=72;
    }
    /**
     * @brief Testing the input
     * 
     * @return true 
     * @return false 
     */
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
    /**
     * @brief Displaying the parameters
     * 
     */
    void pentagon::display()
        {
            std::cout<<"Area="<<area()<<"\n"<<"Perimeter="<<perimeter()<<"\n"<<"Interior angle="<<interior_angle<<"\nExterior angle="<<exterior_angle<<"\n";
        }
    /**
     * @brief Calculating the perimeter value
     * 
     * @return double perimeter value
     */
    double pentagon::perimeter()
        {
            return 5*side;
        }
    /**
     * @brief Calculating the area value
     * 
     * @return double area value
     */
    double pentagon::area()
        {
            return 1.720477*pow(side,2);
        }

