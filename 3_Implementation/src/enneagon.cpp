#include<shape.h>
#include<math.h>


/**
 * @brief default constructor for enneagon
 * 
 */
enneagon::enneagon() {
    regular::side = 1;
    regular::interior_angle = 140;
    regular::exterior_angle = 40;
}

/**
 * @brief parameterised constructor for enneagon
 * 
 * @param side_int 
 */
enneagon::enneagon(double side_int) {
    regular::side = side_int;
    regular::interior_angle = 140;
    regular::exterior_angle = 40;
 }

/**
 * @brief member function to check if the input is valid or not
 * 
 * @return true if the inputs are valid
 * @return false if the inputs are invalid
 */
bool enneagon::valid_input()
{


    if(side==0){
        return false;
    }
    else if(side<0){
        side = fabs(side);
        return true;
    }
    else{
        return true;
    }
}

/**
 * @brief member function to calculate area of enneagon
 * 
 * @return double area 
 */
double enneagon::area()
{
    double cot = cos(180/9)/sin(180/9);
    double enneagon_area = (9/4)*pow(side,2)*cot;
    return enneagon_area;
}

/**
 * @brief member function to calculate the perimeter of enneagon
 * 
 * @return double perimeter
 */
double enneagon::perimeter()
{
    return 9*side;
}

/**
 * @brief member function to display area, perimeter, interior and exterior angle
 * 
 */
void enneagon::display()
{
    std::cout<<"Area = "<<area()<<"\n";
    std::cout<<"Perimeter = "<<perimeter()<<"\n";
    std::cout<<"Interior Angle = "<<interior_angle<<"\n";
    std::cout<<"Exterior Angle = "<<exterior_angle<<"\n";
}
