#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Prints stock shortage to screen
namespace {  // unnamed namespace make it true OOP
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
    cout << "| Unit Price   |";
    cout << "| Publisher    |";
    cout << "| Stock Count  |" << endl;
 }; //End of basic Layout for table (Header). 

/*class test
{
	public:	

	void search_data()
 	{
	  string author_name;
	  string book_title;

	  cout <<"Enter Author's Name: " << endl;
	  getline(cin,author_name);
	  cout <<"Enter Book Title: " << endl;
	  getline(cin,book_title);
 	}
};

*/
int main()
{

  TableLayout();

//  test test_obj;
//  test_obj.search_data();

  	//system("pause");
	// to test variables
	//cout << book_title << "by" << author_name;

  return 0;
}
