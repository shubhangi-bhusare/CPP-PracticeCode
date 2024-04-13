#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int ch,n;
	cout<<"1.show vector 2.Add 3. count 4.sort 5.reverse"<<endl;
	
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
			case 6:
				break;
					
		}
		
	}while (ch!=6);
}
