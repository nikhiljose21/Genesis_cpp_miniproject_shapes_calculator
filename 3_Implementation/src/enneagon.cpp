#include<shape.h>
#include<math.h>



enneagon::enneagon() {
    regular::side = 1;
    regular::interior_angle = 140;
    regular::exterior_angle = 40;
}

enneagon::enneagon(double side_int) {
    regular::side = side_int;
    regular::interior_angle = 140;
    regular::exterior_angle = 40;
 }

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

double enneagon::area()
{
    double cot = cos(180/9)/sin(180/9);
    double enneagon_area = (9/4)*pow(side,2)*cot;
    return enneagon_area;
}

double enneagon::perimeter()
{
    return 9*side;
}


void enneagon::display()
{
    std::cout<<"Area = "<<area()<<"\n";
    std::cout<<"Perimeter = "<<perimeter()<<"\n";
    std::cout<<"Interior Angle = "<<interior_angle<<"\n";
    std::cout<<"Exterior Angle = "<<exterior_angle<<"\n";
}
