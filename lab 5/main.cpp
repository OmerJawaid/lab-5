#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book {
	string name, book_no, author;
	int book_quantity;
public:
	Book(string na, string bn,string auth,int quantity) : name(na), book_no(bn), author(auth), book_quantity(quantity){};
	string getName() { return name; }
	string getBookNo() { return book_no; }
	string getAuthor() { return author; }
	int getQuantity() { return book_quantity; }
};

vector<Book> library;

void add_book() {
	string name, book_no,author;
	int quantity;
	cout << "Enter the book name: ";
	cin >> name;
	cout << "Enter the book no: ";
	cin >> book_no;
	cout << "Enter author name: ";
	cin >> author;
	cout << "Enter book quantity: ";
	cin >> quantity;
	library.push_back(Book(name, book_no,author,quantity));
	cout << "Book added successfully" << endl;
}


int main() {
	add_book();
	add_book();
	return 0;
}
