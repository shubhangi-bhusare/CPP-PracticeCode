#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class book
{
	private:
		int book_id;
		char name[4],author[4];	
	public:
			void accept(int book_id,char *name,char *author)
			{
				this->book_id=book_id;
				strcpy(this->name,name);
				strcpy(this->author,author);
				cout<<"Data accepted"<<endl;		
			}
			void display()
			{
            	cout<<"details of book:"<<endl;
            	cout<<"Book id: "<<book_id<<"\t Book name: "<<name<<"\t Book author: "<<author<<endl;
			}
void writebook(char* filename, book &b1)
{
	ofstream obj;
	obj.open(filename,ios::binary|ios::app);
	cout<<sizeof(book);
	obj.write((char*) &b1,sizeof(book));
	obj.close();
	cout<<"book get strord in file"<<endl;
}
void readbook(char * name)
{
	book b2;
	char * filename;
	ifstream input(filename,ios::binary);
	while(input.read((char*)&b2,sizeof(book)))
	{
		b2.display();	
	}
}
};
int main()
{
	int choice;
	int id;
	char*  filename;
	char name[20],author[20];
	book b2;
	
	cout<<"\n1.add book \t 2.display book \t3.read book from file \t4.write book \t0.exit"<<endl;
	do
	{
		cout<<"enter choice:"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1: cout<<"\n Enter id, name, author : "<<endl;
					cin>>id>>name>>author;
					b2.accept(id,name,author);
					break;
			
			case 2 : b2.display();
					break;
					
			case 3 : cout<<"\n Enter the name of file to read: ";
					 cin>>filename;
					 b2.readbook(filename);
					 b2.display();
				     break;
					 
			case 4 : cout<<"\n Enter the filename to write the book : "<<endl;
					 cin>>filename;
					 b2.writebook(filename, b2);
					 break;
					 
			case 5 : break;
		}
	}while(choice!=0);	
}

