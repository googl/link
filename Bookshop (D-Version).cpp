#include <iostream>
#include <string>
using namespace std;


// Prints stock shortage to screen
void NotInStock(void)
 {
 	cout << "Not in stock" << endl;
 	
 };
 
 void TableLayout()
 { 	
 	cout << "| Author's Name 	|";
    cout << "| Book Title       |"; 
    cout << "| Unit Price 		|";
    cout << "| Publisher   		|"; 
    cout << "| Stock Count 		|";
 };
    
    
    
int main()
{
	
	TableLayout();	
	//system("pause");
	return 0;
}
