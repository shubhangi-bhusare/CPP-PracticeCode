#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
//	int a=10;
	
	char ch;
	cout<<"\n Enter character : ";
	cin>>ch;
	
	
//	cout<<"   number = "<<a<<endl;
//	cin>>a;
	
	cout.width(5);
	cout<<ch;
//	cout<<a;
	
	ch ='o';
	cout<<endl;
	cout.fill('*');
	cout<<ch;

	
}
