#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book {
	string name, book_no;
public:
	Book(string na, string bn) : name(na), book_no(bn) {};
	string getName() { return name; }
	string getBookNo() { return book_no; }
};

vector<Book> library;

void add_book() {
	string name, book_no;
	cout << "Enter the book name: ";
	cin >> name;
	cout << "Enter the book no: ";
	cin >> book_no;
	library.push_back(Book(name, book_no));
	cout << "Book added successfully" << endl;
}
void print()
{
	for(auto i : library)
	{
		cout<< i.getName() << "     " << i.getBookNo() << endl;
	}
}

int main() {
	string choice;
	do{
	  cout<<"a) Add Book \n b) Display Books \n c) Exit \n"
	    <<"Enter Your choice = " ;
	  cin>>choice;
		if (choice == "a" || choice == "A" )
		{
			add_book();
		}
		else if(choice == "b" || choice == "B")
		{
			print();
		}
		else if(choice == "c" || choice == "C")
		{
			break;
		}
		else 
		{
			cout<<"Invalid input" << endl;
		}
	}
	while(choice != "c" || choice != "C");
	return 0;
}
