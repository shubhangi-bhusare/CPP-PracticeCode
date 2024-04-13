#include<iostream>
using namespace std;
template<class T>


class stack
{
	private:
		T A[5];
		int i;
	public:
		stack()
		{
			for(i=0;i<5;i++)
			{
				A[i]=0;	
			}
		}
		stack(T A[5])
		{
			for(i=0;i<5;i++)
			{
				cout<<"\n A["<<i<<"] :"<<A[i];
			}	
		}
		void acceptarray()
		{
			for(i=0;i<5;i++)
			{
				cout<<"\n Enter A["<<i<<"]:";
				cin>>A[i];
			}
		}
		displayarray()
		{
			cout<<"A["<<i<<"] = "<<*(A+i);
		}
		void push(int a)
		{
			for(i=0;i<5;i++)
			{
				if(A[i]!=0)
				{
					i++;
					continue;
				}
				cout<<"A["<<i<<"] : "<<*(A+i);
				
			}
		}
		int pop()
		{
			for(i=0;i<5;i++)
			{
				if(A[i]!=0)
				{
					i++;
					continue;
				}
				
			}
			return (*(A+i));
		}
};
int main(void)
{
	stack s1;
	s1.acceptarray();
	s1.displayarray();
}
