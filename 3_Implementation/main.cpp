#include <iostream>
#include "shape.h"

int main()
{
    int choice;
    std::cout << "Available choices:\n"
                 "1.Regular shapes\n"
                 "2.Irregular shapes\n"
                 "3.3D shapes\n"
                 "4.Exit\n";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int choice1;
        std::cout << "Available choices:\n"
                     "1.Square\n"
                     "2.Pentagon\n"
                     "3.Hexagon\n"
                     "4.Octagon\n"
                     "5.Enneagon\n"
                     "6.Exit\n";
        std::cin >> choice1;
        switch (choice1)
        {
            double side;
        case 1:
        {
            std::cout << "Enter the length of the Square side\n";
        sq_input:
            std::cin >> side;
            square s(side);
            if (s.valid_input())
            {
                s.display();
            }
            else
            {
                std::cout << "Invalid input reenter the side length\n";
                goto sq_input;
            }
            break;
        }
        case 2:
        {
            std::cout << "Enter the length of the Pentagon side\n";
        pe_input:
            std::cin >> side;
            pentagon p(side);
            if (p.valid_input())
            {
                p.display();
            }
            else
            {
                std::cout << "Invalid input reenter the side length\n";
                goto pe_input;
            }
            break;
        }
        case 3:
        {
            std::cout << "Enter the length of the Hexagon side\n";
        he_input:
            std::cin >> side;
            hexagon h(side);
            if (h.valid_input())
            {
                h.display();
            }
            else
            {
                std::cout << "Invalid input reenter the side length\n";
                goto he_input;
            }
            break;
        }
        case 4:
        {
            std::cout << "Enter the length of the Octagon side\n";
        oc_input:
            std::cin >> side;
            octagon o(side);
            if (o.valid_input())
            {
                o.display();
            }
            else
            {
                std::cout << "Invalid input reenter the side length\n";
                goto oc_input;
            }
            break;
        }
        case 5:
        {
            std::cout << "Enter the length of the Enneagon side\n";
        en_input:
            std::cin >> side;
            enneagon e(side);
            if (e.valid_input())
            {
                e.display();
            }
            else
            {
                std::cout << "Invalid input reenter the side length\n";
                goto en_input;
            }
            break;
        }
        case 6:
          {  exit(0);}
        default:
           { std::cout << "Invalid choice";
            break;}
        }
        break;}
    case 2:
    {
        int choice3;
        std::cout << "Available choices:\n"
                     "1.Circle\n"
                     "2.Ellipse\n"
                     "3.Rhombus\n"
                     "4.Exit\n";
        std::cin >> choice3;
        switch (choice3)
        {
        case 1:{
            double radius;
            std::cout << "Enter the radius of the circle\n";
        ci_input:
            std::cin >> radius;
            circle c(radius);
            if (c.valid_input())
            {
                c.display();
            }
            else
            {
                std::cout << "Invalid input reenter the radius\n";
                goto ci_input;
            }
            break;}
        case 2:
           { double semi_major_axis, semi_minor_axis;
            std::cout << "Enter the length of semi major axis and semi minor axis of the ellipse\n";
        el_input:
            std::cin >> semi_major_axis >> semi_minor_axis;
            ellipse e(semi_major_axis, semi_minor_axis);
            if (e.valid_input())
            {
                e.display();
            }
            else
            {
                std::cout << "Invalid input reenter the length of semi major axis and semi minor axis\n";
                goto el_input;
            }
            break;}
        case 3:
           { int diagonal1, diagonal2;
            std::cout << "Enter the length of the rhombus diagonals\n";
        rh_input:
            std::cin >> diagonal1 >> diagonal2;
            rhombus r(diagonal1, diagonal2);
            if (r.valid_input())
            {
                r.display();
            }
            else
            {
                std::cout << "Invalid input reenter the length of the rhombus diagonals\n";
                goto rh_input;
            }
            break;}
        case 4:
            {exit(0);}
        default:
            {std::cout << "Invalid choice\n";
            break;}
        }
        break;}
    case 3:
    {
        {
        int choice4;
        std::cout << "Available choices:\n"
                     "1.Cone\n"
                     "2.Hemisphere\n"
                     "3.Exit\n";
        std::cin >> choice4;
        switch (choice4)
        {
            double radius;
        case 1:
            {double heigth;
            std::cout << "Enter the radius and heigth of the cone\n";
        co_input:
            std::cin >> radius >> heigth;
            cone c(radius, heigth);
            if (c.valid_input())
            {
                c.display();
            }
            else
            {
                std::cout << "Invalid input reenter the radius and heigth of the cone\n";
                goto co_input;
            }
            break;
            }
        case 2:

            {std::cout << "Enter the radius of the hemisphere\n";
        hem_input:
            std::cin >> radius;
            hemisphere h(radius);
            if (h.valid_input())
            {
                h.display();
            }
            else
            {
                std::cout << "Invalid input reenter the radius of the hemisphere\n";
                goto hem_input;
            }
            break;}
        case 3:
            {exit(0);}
        default:
            std::cout << "Invalid choice\n";
            break;
        }
        break;
    }
    case 4:
      { exit(0);}
    default:
        {
        std::cout << "Invalid choice\n";
        break;
        }
    }}
    return 0;
}