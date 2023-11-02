#include <iostream>
#include <string>
using namespace std;

int main()
{
	int option = 0,issue_date,return_date ;
	int days_book_borrowed,payment=0 ;
	string book_name,book_return ;
	cout << "Press 1 if you want to borrow book?\n";
	cout << "Press 2 if you want to return book?\n";
	cout << "Option = ";
	cin >> option;
	cin.ignore();

	if (option == 1)
	{
		cout << "Enter the name of the book to be issued to:\n";
		getline(cin, book_name);
		cout << "the book " << book_name << " has been issued to you for 14 days.\n";
	}
	else if (option == 2)
	{
		cout << "Enter the name of the book you want to return:\n";
		getline(cin, book_return);
		cout << "Enter the Issue date of book: \n";
		cin >> issue_date;
		cout << "Enter the return date of book: \n";
		cin >> return_date;
		days_book_borrowed = return_date - issue_date;

		if (days_book_borrowed > 14)
		{
			cout << "Book not successfully returned\n";
			payment = days_book_borrowed * 1;
			cout << "you have to pay= $" << payment <<"\n";

		}
		else if(days_book_borrowed < 14)
		{
			cout << "You have successfully submitted the book ";
		}
		system("pause");
			return 0;

	}


}