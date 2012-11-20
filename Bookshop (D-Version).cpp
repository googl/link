//Copyright 2012 Dwayne Reid, Carey Riley
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Prints stock shortage to screen
// Put all global variables under namespace {
namespace {  // unnamed namespace make it true OOP

void NotInStock(void) { cout << "Not in stock" << endl;};

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

 void search_data()
  {
    string author_name;
    string book_title;

    cout <<"Enter Author's Name: " << endl;
    getline(cin,author_name);
    cout <<"Enter Book Title: " << endl;
    getline(cin,book_title);

// Functions in function = bad idea.
// Don't make a setter conditional
/*
   if(author_name == "Deitel & Deitel")
     {
      NotInStock()
     }
  }


  void setName(string author_name)
  {
    author_name = "Deitel & Deitel";
  }
  void setTitle(string book_title)
  {
    book_title = "C++...Program";
  }
    int setCount(int stock_count)
  {
    stock_count = 15;
  }
    float setUnitPrice(float unit_price)
    {
    unit_price = 2500.00;
  }

*/
};
}

// Array may require a more advanced for array called vectors.

class test
{
// getters work
  public:
    string get_author(void)    { return author_;    }
    string get_title(void)     { return title_;     }
    double get_unitprice(void) { return unitprice_; }
    string get_publisher(void) { return publisher_; }
    int get_quantity(void)     { return quantity_;  }

//rename test to official name, which would be Books
   test() : author_("Deitel & Deitel"),
           title_("C++...Program"),
           unitprice_(2500.00),
           publisher_("Pearson"),
           quantity_(15)
           {}

  private:
    string author_;
    string title_;
    double unitprice_;  // double larger than float
    string publisher_;
    int quantity_;
};


int main()
{

  TableLayout();

  test test_obj;
  search_data(); // how do we use the variables in this now?
  cout << test_obj.get_author() << '\n';

    //system("pause");
// to test variables
//cout << book_title << "by" << author_name;

  return 0;
}
