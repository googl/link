#include <iostream>
#include <string>
using namespace std;


// Prints stock shortage to screen
void NotInStock(void)
 {
 	cout << "Not in stock" << endl;
 	
 };  //End of function
 
 //Basic Layout for table (Header).
 void TableLayout()
 { 	
  	cout << "|==============================================================================|\n" << endl;
 	cout << "\t\t\t\t Bookshop Inventory	\t\t\t								   			\n";
 	cout << "|==============================================================================|" << endl;
 	cout << "| Author's Name|";
    cout << "| Book Title   |"; 
    cout << "| Unit Price 	|";
    cout << "| Publisher   	|"; 
    cout << "| Stock Count |" << endl;
 };

class Books
{
	public:
    Books() : author_("Deitel & Deitel"),
              title_("C++...Program"),
              unitprice_(2500.00),
              publisher_("Pearson"),
              quantity_(15)
              {}
//      {cout << "|" <<  author_ << " | " << title_ << " | " << unitprice_ <<
//      " | " << publisher_ << " | " << quantity_ <<  "|" << '\n';
//      };
//    double CustomerWants(int quantity) {quantity_ <=  quantity ?: NotInStock() : return quantity * unitprice_;
	private:
    string author_;
    string title_;
    double unitprice_;
    string publisher_;
    int quantity_;
  };
    
    
    
int main()
{
	
	TableLayout();	
	//system("pause");
	return 0;
}
