//Shape Hierarchy:
//  Problem Statement: Design a hierarchy of shape classes. Begin with a base
//  class Shape and then create derived classes like Circle, Rectangle,
//  and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry.
#include<iostream>
using namespace std;

class shape
{
	private:
		int length,breadth;
		
		public:
			shape()
			{
				length=2;
				breadth=1;
			}
			shape(int length,int breadth)
			{
			   this->length=length;
				this->breadth=breadth;
			}
			void Display()
			{
				cout<<"length:"<<length<<"  breadth: "<<breadth;
			}
};
class circle:public shape {
	int radius, circ;
	circle()
	{
		radius=3;
		circ=45;
	}
	circle(int radius,int circ)
	{
		this->circ=circ;
		this->radius=radius;
	}
	
};
class Rectangle:public shape {
	int height, diagonal;
	Rectangle()
	{
		height=7;
		diagonal=2;
	}
	Rectangle(int height,int diagonal)
	{
		this->height=height;
		this->diagonal=diagonal;
	}
	
};
int main2()
{
	shape s;
	s.Display();
}




