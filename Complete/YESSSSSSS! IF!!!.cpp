#include<iostream>
#include<string>


using namespace std;

int main()
{
	string Temp_Name;
	string AuthorName = "Deitel & Deitel";
	string Temp_Book;
	string A_Book = "C++...Program";
	
	
	cout <<"Please enter the author's name: " << endl;
	cin >> Temp_Name;
	
	cout <<"Please enter the title of the book: " << endl;
	cin >> Temp_Book;
	
	if(Temp_Name == AuthorName & Temp_Book == A_Book)
	
	cout <<"You entered: " << Temp_Name "&" Temp_Book << endl;
	
	else 
	cout <<"Copies not in stock!" << endl;
	
	return 0;
}
