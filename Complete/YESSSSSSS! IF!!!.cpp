/*(C) Dwayne Reid */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string Temp_Name, AuthorName = "Deitel & Deitel";
	string Temp_Book, AutherBook = "C++...Program";
	
	
	cout <<"Please enter the author's name: " << endl;
	cin  >>Temp_Name, Temp_Book;

	cout <<"Please enter the title of book: " << endl;
	cin  >> Temp_Book;
	
	if(Temp_Name == AuthorName && Temp_Book == AutherBook)
	cout << "You entered " << AuthorName "and " << AutherBook << endl;

	
	return 0;
}
