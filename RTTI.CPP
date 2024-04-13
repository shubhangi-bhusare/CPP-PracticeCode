#include<iostream>
#include<typeinfo.h>
using namespace std;
class Emp{
	public:virtual void calSalary()
	{
		cout<<"----Employee CalsSalary----"<<endl;
	}
	void display()
	{
		cout<<"----Employee details----"<<endl;
	}
};
class Mgr :public Emp{
	public:void ManagerTask()
	{
		cout<<"-----Manager Task-----"<<endl;
	}
	void calSalary()
	{
		cout<<"----Manager CalsSalary----"<<endl;
	}
};
class Admin:public Emp{
public :void AdminTask()
	{
		cout<<"-----Admin Task-----"<<endl;
	}	
	void calSalary()
	{
		cout<<"----Admin CalsSalary----"<<endl;
	}
};
class MarketinExe:public Emp{
public:void MarketinExeTask()
	{
		cout<<"-----MarketinExe Task-----"<<endl;
	}	
void calSalary()
	{
		cout<<"----Marketing CalsSalary----"<<endl;
	}
};
int main()
{
Emp emp;
emp.calSalary();
emp.display();
Mgr mgr;
mgr.calSalary();
Admin adm;
adm.AdminTask();
adm.calSalary();
MarketinExe m;
m.calSalary();
m.MarketinExeTask();


cout<<"------------------------------"<<endl;
Emp*ptr;
ptr=&mgr;
ptr->calSalary();

cout<<"-------usig array-------"<<endl;
Emp*allemp[4];
allemp[0] = &emp;
allemp[1]= &mgr;
allemp[2] = &adm;
allemp[3] = &m;

cout<<typeid(int).name;
for(int i=0;i<4;i++)
allemp[i]->calSalary();
cout<<"datatype at index:"<<i<<typeid(*allemp)<<endl;

}
