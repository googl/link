/*(C) Dwayne Reid */

#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

void if_function()
{
	string Temp_Name, AuthorName = "Deitel & Deitel";
//	string Temp_Book, AutherBook = "C++...Program";

//	string Temp_Name, AuthorName = "Dwayne";
//	string Temp_Book, AutherBook = "Home";

	cout <<"Please enter the author's name: " << endl;
    getline(cin,Temp_Name);

	cout <<"Please enter the title of book: " << endl;
    getline(cin,Temp_Book);
	
	if(Temp_Name == AuthorName && Temp_Book == AutherBook)
	cout << "You entered: " << AuthorName << " and " << AutherBook << endl;
	
	else
	
	cout << "Copies not in stock" << endl;
}

/****************************************************************************/



// Basic Layout for table (Header).
// setw(40) works better than \t

 void TableLayout()
 {
    cout << "|==========================================================================|" << '\n';
    cout << '|' << setw(40) << "Bookshop Inventory" << setw(35) << '|' << '\n';  // use endl to push to screen
	cout << "|==========================================================================|" << endl;
	cout << "| Author's Name|";
    cout << "| Book Title  |";
    cout << "| Unit Price  |";
    cout << "| Publisher   |";
    cout << "| Stock Count |\n";
    cout << "|--------------------------------------------------------------------------|\n" << endl;
 }; //End of basic Layout for table (Header).

/****************************************************************************/


class book
{
	private:
	string author_name;
	string book_title;
	float Book_Price;
	string Book_Publisher;
	int Stock_Count;
	public:
	book(){};
	~book(){};
	string get_author(void)    {return author_name;}
    string get_title(void)     {return book_title;}
    double get_unitprice(void) {return Book_Price;}
    string get_publisher(void) {return Book_Publisher;}
    int get_avail_stock(void)  {return Stock_Count;}
    void newrecord(void){}
    
	void SetAuthorName(string A_NTemp)
    {
    	author_name = A_NTemp;
    }
    void SetBookTitle(string B_tTemp)
    {
    	book_title = B_tTemp;
    }
    void SetBookPrice(float B_PTemp)
    {
    	Book_Price = B_PTemp;
    }
    void SetPublisher(string B_PubTemp)
    {
    	Book_Publisher = B_PubTemp;
    }
	void SetStock(int S_Temp)
	{
		Stock_Count = S_Temp;
	}
};



int main()
{
	TableLayout(); //Runs Table Layout function (Header)
	if_function();
	
	return 0;
}
