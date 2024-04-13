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
template<class T>
void swapDate(T &d, T &d1)
{
	T temp= d;
	d = d1; 
	d1 = temp;
}
 int main()
 {
 	cout<<"Using generic class"<<endl;
 	Date<int> d(10,2,1992);
 	Date<int> d1(22,1,2023);
 	swapDate(d,d1);
 	d.display();
 	cout<<"after swapping"<<endl;
 	d1.display();
 	return 0;
 }
