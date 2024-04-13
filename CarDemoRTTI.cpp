#include<iostream>
#include<typeinfo>
using namespace std;
namespace myNamespace
{
	class car
	{
		private:
			string name;
			int wheels;
			string colour;
			int seats;
			
		public:
			virtual void speed()=0;
			car()
			{   
			    name="abc";
				wheels=4;
				colour="White";
				seats=6;
			}
			car(string name,int wheels,string colour,int seats)
			{
				this->name=name;
				this->wheels=wheels;
				this->colour=colour;
				this->seats=seats;
			}
			
			
			void display()
			{
				cout<<"Wheels: "<<wheels<<"  Color:"<<colour<<" Seats: "<<seats<<"  Name: "<<name<<endl;
			}
			
	};
	
	class Nano: public car
	{
//		private: int size;
		public:
			Nano()
			{
//				size=100;
			}
			Nano(string name,int wheels,string colour,int seats):car(name,wheels,colour,seats)
			{
//				this->size=size;
			}
			void speed()
			{
				cout<<"Speed of the nano car is: 80km/hr"<<endl;
			}
			
			void price()
			{
				cout<<"Price of nano car: 100000"<<endl;
			}
//			void display()
//			{   
//			    car::display();
//				cout<<"Size: "<<size<<endl;
//			}
	};
	
	class Audi: public car
	{
//		private: string spec;
		public:
			Audi()
			{
//				spec="xyz";
			}
			Audi(string name,int wheels,string colour,int seats):car(name,wheels,colour,seats)
			{
//				this->spec=spec;
			}
			void speed()
			{
				cout<<"Speed of audi is: 120km/hr"<<endl;
			}
			
			void Engine()
			{
				cout<<"Engine of audi: 25cc"<<endl;
			}
			
//			void display()
//			{   
//			    car::display();
//				cout<<"spec: "<<spec<<endl;
//			}
	};
	
}

int main()
{
//	myNamespace::Nano n;
//	n.speed();
//	n.price();
//	myNamespace::Audi a;
//	a.Engine();
cout<<"-----MENU-----\n";
cout<<"1.Add Nano\n 2.Add Audi\n 3.ShowAll 4.Exit"<<endl;
            int ch, index=0;
            string name;
			int wheels;
			string colour;
			int seats;
//			int size;
//			string spec;
			myNamespace::car*arr[5];
			typedef myNamespace::Nano Nano;
//			Nano*n();
			typedef myNamespace:: Audi Audi;
//			Audi*a();
			
			do{
				cout<<"Enter choice"<<endl;
				cin>>ch;
				switch(ch)
				{
//					cout<<"Enter name,wheels,colour,seats for nano"<<endl;
//						cin>>name>>wheels>>colour>>seats;
					case 1:
						if(index<5)
						{
						cout<<"Enter name,wheels,colour,seats for nano"<<endl;
						cin>>name>>wheels>>colour>>seats;
						Nano* n=new Nano(name,wheels,colour,seats);
						arr[index=0]=n;
						index++;
					    }
					    else
						{
					      cout<<"Basket is full"<<endl;	
						}
						break;
					case 2:
						if(index<5)
						{
						cout<<"Enter name,wheels,colour,seats for nano"<<endl;
						cin>>name>>wheels>>colour>>seats;
						Audi* a=new Audi(name,wheels,colour,seats);
						arr[index=0]=a;
						index++;
					    }
					    else
						{
					      cout<<"Basket is full"<<endl;	
						}
						break;
	
					case 3:
						for(int i=0;i<index;i++)
						{
							arr[i]->display();
							arr[i]->speed();
//						Audi a=(Audi)arr[i];
						if(typeid(*arr[i])==typeid(Audi))
						{
							Audi* a=dynamic_cast<Audi*>(arr[i]);
						   a->Engine();
							
						}
						if(typeid(*arr[i])==typeid(Nano))
						{
							Nano* n=dynamic_cast<Nano*>(arr[i]);
						   n->price();
							
						}
					}
						break;
					case 4:
						cout<<"Exit"<<endl;
						break;
						
					default:
						cout<<"Invalid choice"<<endl;
				}
				
			}while(ch!=4);



}
