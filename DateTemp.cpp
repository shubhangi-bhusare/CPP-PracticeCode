#include<iostream>
using namespace std;

template <class T>
class Date
{
	private:
		T dd;
		T mm;
		T yy;
		
		public:
			Date(T dd, T mm, T yy)
			{
				this->dd=dd;
				this->mm=mm;
				this->yy=yy;
			}
			T getdate()
			{
				return dd;
			}
			T setdate(int dd) 
			{
				dd=dd;
			}
			
			void display()
			{
				cout<<"dd: "<<dd<<" mm:"<<mm<<"  yy:"<<yy<<endl;
			}
};
 int main1()
 {
 	cout<<"Using generic class"<<endl;
 	Date<int> d(10,2,1992);
 	d.display();
 	return 0;
 }
