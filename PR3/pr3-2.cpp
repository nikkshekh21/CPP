#include <iostream>
using namespace std;


class Shape
{
private:
	double width, height;
public:
	Shape(double newWidth, double newHeight){
		this->width=newWidth;
		this->height=newHeight;
	}
	double getWidth() const
	{
		return width;
	}
	double getHeight() const
	{
		return height;
	}
};


class Rectangle: public Shape
{
public:
   
    Rectangle(double width, double height):Shape(width,height)
    {


    }
    double area()
    {
        return (getWidth()*getHeight());
    }
};


class Triangle: public Shape
{
public:
    Triangle(double base, double height): Shape(base,height)
    {


    }
    double area()
    {
        return (getWidth()*getHeight())/2.0;
    }
};


int main ()
{
	int r1,r2,t1,t2;
	cout<<"Enter rectangle width : ";
	cin>>r1;
	cout<<"Enter rectangle height : ";
	cin>>r2;
	cout<<"Enter triangle width : ";
	cin>>t1;
	cout<<"Enter triangle height : ";
	cin>>t2;
	Rectangle rectangle(r1,r2);
	Triangle triangle(t1,t2);
	cout <<"Area of rectangle is: "<< rectangle.area() << endl;
	cout <<"Area of triangle is: "<< triangle.area() << endl;


	return 0;
}