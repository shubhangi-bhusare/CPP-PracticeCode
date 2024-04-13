//Animal Hierarchy:
// Problem Statement: Create a hierarchy of animal classes. Start with a base class 
// Animal and then create derived classes like Mammal, Bird, and Fish. 
// Each of these derived classes should have specific properties and 
// methods related to their respective categories of animals.


#include<iostream>
 using namespace std;
  class Animal
  {
  	private:
	  string name;
	  string colour;
	  int eyes;
	  int legs;
	public:
	Animal()
	{ cout<<"It is a default constructor:"<<endl;
	name = "abc";
	colour = "red";
	eyes = 2;
	legs = 3;
	}
  	
    Animal(string name,string colour,int eyes ,int legs)
	{
    	this->name= name;
    	this->colour=colour;
    	this->eyes=eyes;
    	this->legs=legs;
	}
  	void Display()
	  {
	  	cout<<"-----------"<<endl;
	  	cout<<"Name: "<<name<<"  Colour: "<<colour<<"  eyes: "<<eyes<<"  Legs: "<<legs<<endl;
	  }
	
	void Features()
	{
	cout<<"They are living things"<<endl;
	cout<<"They drink water"<<endl;	
	  }
	
  };
  
  class Mammal :public Animal
  {
  	
  	string speak;
  	int hands;
  	 public:
  	 	Mammal()
  	 	{
  	 	cout<<"default mammal constructor"<<endl;
		   speak="hahaha";
		   	hands=2;
		   }
		   
		   Mammal(string speak,int hands,string name,string colour,int eyes,int legs):Animal( name, colour, eyes, legs) {
		   	this->speak=speak;
		   	this->hands=hands;
		   	
		   }
//		   void Display()
//		   {
//		   	cout<<"Speak: "<<speak<<" Hands: "<<hands<<endl;
//		   }
		   
  	 		
  	 		
	};
  class Bird :public Animal
  {
  	
  	string feather;
  	int beak;
  	 public:
  	 	Bird()
  	 	{
  	 		cout<<"default bird constructor"<<endl;
  	 		feather = "white";
  	 		beak = 1;
		   }
  	 	};
  	 	
    class Fish :public Animal
  {
  	
  	string fin;
  	int tail;
  	 public:
     Fish()
  	 	{
  	 		cout<<"default Fish constructor"<<endl;
  	 		fin = "wings";
  	 		tail=1;
  	 		
		   }		   
  	 		
};
int main1()
 {
 	Animal obj1("cat","balck",2,1);
 	obj1.Display();
 	obj1.Features();
 	Mammal m1("hah",2,"abc","white",2,4);
 	m1.Display();
 	Bird b;
 	b.Display();
 	Fish f;
 	f.Display();
 }
