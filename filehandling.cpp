#include<iostream>
#include<fstream>

using namespace std;
int main(){


	ofstream obj;
	obj.open("shubhangi.xt");
	obj<<"welcome to module c++"<<endl;



	ifstream fin;
	string s;
	fin.open("shubhangi.xt");
	fin>>s;

	while(!fin.eof())
	{
		cout<<s;
		s=fin.get();
	}
	return 0;
}
