#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


// Prints stock shortage to screen
void NotInStock(void)
 {
 	cout << "Not in stock" << endl;
 	
 };  //End of function
 
 //Basic Layout for table (Header).
// setw(40) works better than \t
 void TableLayout()
 { 	
  	cout << "|==========================================================================|" << '\n';
    cout << '|' << setw(40) << "Bookshop Inventory" << setw(35) << '|' << '\n';  // use endl to push to screen
 	cout << "|==========================================================================|" << endl;
 	cout << "| Author's Name|";
    cout << "| Book Title   |"; 
    cout << "| Unit Price 	|";
    cout << "| Publisher   	|"; 
    cout << "| Stock Count 	|" << endl;
 };
    
/*	void search_data()
 {	
	string author_name;
	string book_title;
	
 	cout <<"Enter Author's Name: " << endl;
 	cin  >> author_name >> endl;
 	cout <<"Enter Book Title" << endl;
 	cin  >> book_title >> endl;
 }   
    */
int main()
{
		
	TableLayout();	
	//system("pause");


	return 0;
}
