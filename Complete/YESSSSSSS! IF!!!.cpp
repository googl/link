#include<iostream>
#include<string>

using namespace std;

int main()
{
	string Temp_Name, AuthorName = "Deitel & Deitel";
	string Temp_Book, Auther_Book = "C++...Program";
	
	
	cout <<"Please enter the author's name and title of book: " << endl;
	cin  >>Temp_Name, Temp_Book;
	
	if(Temp_Name == AuthorName && Temp_Book == Auther_Book)
	
	cout <<"You've entered: " << Temp_Name << endl;
	
	else 
	cout <<"Copies not in stock!" << endl;
	
	
	return 0;
}
