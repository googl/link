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
 };


void search_data()
 {

//  char author_name[30];
//  char book_title[50];
  string author_name;
  string book_title;

  cout <<"Enter Author's Name: " << endl;
//  cin  >> author_name;
  getline(cin,author_name);
  cout <<"Enter Book Title: " << endl;
//  cin  >> book_title;
  getline(cin,book_title);
 }
}

class TestClass {
  }
int main()
{

  TableLayout();
  search_data();

  //system("pause");
// to test variables
//cout << book_title << "by" << author_name;

  return 0;
}
