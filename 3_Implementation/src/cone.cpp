#include "shape.h"
#include<math.h>


/**
 * @brief Default constructor for cone
 * 
 */
cone::cone():radius(0),height(0){}
/**
 * @brief Parameterised constructor for cone
 * 
 * @param r radius of cone
 * @param h height of cone
 */
cone::cone(double r, double h):radius(r),height(h){}

/**
 * @brief member function to check if the inputs given to a cone is valid or not
 * 
 * @return true if the inputs are valid
 * @return false if the inputs are not valid
 */
bool cone::valid_input()
{
    if(radius == 0.0 || height == 0.0){
        return false;
    }
    else if(radius<0 || height<0){
        radius = fabs(radius);
        height = fabs(height);
        return true;
    }
    else
    {
        return true;
    }
}

/**
 * @brief member function to calculate volume 
 * 
 * @return double volume
 */
double cone::volume()
{
    return (pow(radius,2)*(height/3)*22/7);
}

/**
 * @brief member function to calculate lateral surface area
 * 
 * @return double lateral surface area
 */
double cone::LSA()
{
    return (radius*sqrt(pow(radius,2) + pow(height,2))*22/7);
}

/**
 * @brief member function to calculate total surface area
 *  
 * @return double total surface area
 */
double cone::TSA()
{
    return (radius*(radius + sqrt(pow(radius,2) + pow(height,2)))*22/7);
}

/**
 * @brief member function to display radius, height, volume, lateral surface area and total surface area
 * 
 */
void cone::display()
{
    std::cout<<"Radius = "<<radius<<"\n"<<"Height = "<<height<<"\n";
    std::cout<<"Volume = "<<cone::volume()<<"\n";
    std::cout<<"Lateral Surface Area = "<<cone::LSA()<<"\n";
    std::cout<<"Total Surface Area = "<<cone::TSA()<<"\n";
}