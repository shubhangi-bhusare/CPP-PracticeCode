//assignment:Exception
//create Stack class  for storing 10 numbers
//create function push(int number)--->number will get stored in array
//create function pop() will return top most number ,last added number
//
//Note:Hadle StackFull and StackEmpty Exception
//Stack s;//array[4];
//s.push(10);s.push(20);s.push(30);//s.push(40); s.push(50);
//
//int a=s.pop();//------> 30
//  a=s.pop();//----->20
//   a=s.pop();//------>10
//
//s.pop();//
#include<iostream>
using namespace std;
class myStack
{  
   private:
   	int *arr;
   	int top;
   	int index;
   	
   	public:
   		myStack()
   		{
   		  arr=new int [5];
			 top= -1;	
	    }
	void push(int no)
	{
		if(top<5)
		arr[++top]=no;
		else
		cout<< "stack is full\n";
	}
	
	int pop()
	{
		if(top>0)
		return arr[top--];
		else 
		return 0;
	}
	void display()
	{
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
};
int main4()
{
	myStack m();
	m.push(5);
	m.display();
	cout<<"-----Pop start-----";
	m.pop();
}




