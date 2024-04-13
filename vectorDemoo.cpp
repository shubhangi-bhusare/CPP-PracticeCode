#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main12()
{
	int ch,n;
	cout<<"1.show vector 2.Add 3. count 4.Pop from last entered element 5.sort 6.reverse7.Exit"<<endl;
	
	vector<int> vect;
	do{
		
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"-----Show vector---"<<endl;
				for(int i=0;i<vect.size();i++)
				{
					cout<<vect[i]<<" "<<endl;
				}
				break;
				
			case 2:
				cout<<"Enter no"<<endl;
				cin>>n;
				vect.push_back(n);
				break;
				
			case 3:
				cout<<"count: "<<vect.size();
				break;
				
			case 4:
			cout<<"pop"<<endl;
			vect.pop_back();
			break;
			case 5:
				cout<<"After Sorting"<<endl;
				
				sort(vect.begin(),vect.end());
				for(int i=0;i<vect.size();i++)
				{
					cout<<vect[i]<<" "<<endl;
				}
				cout<<endl;
				break;
				
			case 6:
				cout<<"Reverse"<<endl;
				reverse(vect.begin(),vect.end());
				for(int i=0;i<vect.size();i++)
				{
					cout<<vect[i]<<" "<<endl;
				}
				break;
			case 7:
				cout<<"exit"<<endl;
				break;
			default:
				cout<<"Invalid Choice"<<endl;
		}
		
	}while (ch!=7);
}
