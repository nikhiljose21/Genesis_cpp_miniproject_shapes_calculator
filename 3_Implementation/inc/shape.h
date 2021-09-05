#ifndef  __BOX_h__
#define  __BOX_h__
#include<iostream>

class shape
{
    public:
        virtual double perimeter()=0;
        virtual double area()=0;
        virtual bool valid_input()=0;
        virtual void display()=0;
};

class shape_3D
{
    public:
        virtual bool valid_input()=0;
        virtual void display()=0;
        virtual double volume()=0;
        virtual double LSA()=0;
        virtual double TSA()=0;
};

class regular
{
    protected:
        double side;
        int interior_angle;
        int exterior_angle;
};

class circle : public shape
{
    private:
        double radius;
    public:
        //default constructor
        circle();
        //paramised constructor
        circle(double);
        bool valid_input();
        void display();
        double perimeter();
        double area();
};

class ellipse : public shape
{
    private:
        double semi_major_axis,semi_minor_axis;
    public:
        //default constructor
        ellipse();
        //paramised constructor
        ellipse(double, double);
        bool valid_input();
        void display();
        double perimeter();
        double area();
};

class rhombus : public shape
{
    private:
        double diagonal1,diagonal2;
    public:
        //default constructor
        rhombus();
        //paramised constructor
        rhombus(int, int);
        bool valid_input();
        void display();
        double perimeter();
        double area();
};

class enneagon : public shape,public regular
{
    
    public:
        //default constructor
        enneagon();
        //paramised constructor
        enneagon(double);
        bool valid_input();
        void display();
        double perimeter();
        double area();
};

class hexagon : public shape, public regular
{
    public:
        //default constructor
        hexagon();
        //paramised constructor
        hexagon(double);
        bool valid_input();
        void display();
        double perimeter();
        double area();
};

class octagon : public shape , public regular
{

    public:
        //default constructor
        octagon();
        //paramised constructor
        octagon(double);
        bool valid_input();
        void display();
        double perimeter();
        double area();
};

class pentagon : public shape , public regular
{
    public:
        //default constructor
        pentagon();
        //paramised constructor
        pentagon(double);
        bool valid_input();
        void display();
        double perimeter();
        double area();
};

class square : public shape , public regular
{

    public:
        //default constructor
        square();
        //paramised constructor
        square(double);
        bool valid_input();
        void display();
        double perimeter();
        double area();
};

class cone : public shape_3D
{
    private:
        double radius;
        double height;
    public:
         //default constructor
        cone();
        //paramised constructor
        cone(double,double);
        bool valid_input();
        void display();
        double volume();
        double LSA();
        double TSA();
};

class hemisphere : public shape_3D
{
    private:
        double radius;
    public:
         //default constructor
        hemisphere();
        //paramised constructor
        hemisphere(double);
        bool valid_input();
        void display();
        double volume();
        double LSA();
        double TSA();
};

#endif