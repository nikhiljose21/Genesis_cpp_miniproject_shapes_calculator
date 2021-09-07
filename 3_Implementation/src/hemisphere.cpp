#include"shape.h"
#include<math.h>
    /**
     * @brief default constructor
     * 
     */
    hemisphere::hemisphere():radius(0){}
    /**
     * @brief parameterised constructor for hemisphere
     * 
     * @param r radius value
     */
    hemisphere::hemisphere(double r):radius(r){}
    /**
     * @brief Testing the input
     * 
     * @return true 
     * @return false 
     */
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
    /**
     * @brief Displaying the parameters
     * 
     */
    void hemisphere::display()
        {
            std::cout<<"volume="<<volume()<<" "<<"Lateral surface area="<<LSA()<<" "<<"Total surface area="<<TSA()<<"\n";
        }
    /**
     * @brief Calculating volume value
     * 
     * @return double volume value
     */
    double hemisphere::volume()
        {
            return (0.666)*pow(radius,3)*22/7;
        }
    /**
     * @brief Calculating lateral surface area value
     * 
     * @return double lateral surface area value
     */
    double hemisphere::LSA()
        {
            return 2*pow(radius,2)*22/7;
        }
    /**
     * @brief Calculating total surface area value
     * 
     * @return double total surface area value
     */
    double hemisphere::TSA()
        {
            return 3*pow(radius,2)*22/7;
        }
