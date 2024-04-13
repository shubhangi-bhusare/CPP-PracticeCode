#include<iostream>
using namespace std;
class Box
{
  private:
  int l, b, h;
  
  public:
  	Box()
  	{
  		l=b=h=10;
	}
	Box(int l, int b, int h)
  	{
  		this->l = l;
  		this->b = b;
  		this->h = h;
	}
	void show()
	{
		cout<<"length:"<<l<<"  bradth:"<<b<<"  Height:"<<h<<endl;
	}
	Box operator+(const Box &obj)
	{
		int l1 = this->l+obj.l;
		int b1 = this->b+obj.b;
		int h1 = this->h+obj.h;
		
		Box newobj(l1,b1,h1);
		return newobj;
	}
};
int main()
{
	Box box1(10,20,30);
	box1.show();
	Box box2(100,110,120);
	box2.show();
	
	Box box3;
	box3=box1+box2;
	box3.show();
	
	
}
