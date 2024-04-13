#include<iostream>
#include<string.h>
using namespace std;
int main()
{  
  char ch;
  cout<<"enter a character:"<<endl;
  cin.get(ch);
 // cin>>ch;
  
  
//  cout<<"\n Character = ";
  
  cout.put(ch);
  
  char array[20];
  cin.get(ch);
  
  cout<<"\n enter array:"<<endl;
 cin.getline(array,12);
 
  cout<<"enter char:"<<endl;
  cout.write(array,12);
  
  return 0;
}
