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


int main() {
	add_book();
	add_book();
	return 0;
}
