//(c) Dwayne Reid && Carey Riley

#include <iostream>	/*Header Files*/
#include <string>	/*Header Files*/
#include <iomanip>	/*Header Files*/
using namespace std;

/*------------------------------------------------------------------*/

// Prints stock shortage to screen
namespace {  // unnamed namespace make it true OOP
void NotInStock(void)
 {
  cout << "Required copies not in stock" << endl;

 };  //End of function
 
/*------------------------------------------------------------------*/

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

/*------------------------------------------------------------------*/

 void search_data() //Start of Search function (input from user)
  {
    string author_name;
    string book_title;
    int cop_ies;

    cout <<"Enter Author's Name: " << endl;
    getline(cin,author_name);
    cout <<"Enter Book Title: " << endl;
    getline(cin,book_title);
    cout<<"Please enter the amount of copies needed"<<endl;
    cin>>cop_ies;
    
    

//Need to make a relational comparison between user's input and variables in database
};
}

/*------------------------------------------------------------------*/

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
    void SetBookPrice(string B_PTemp)
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
void newrecord (void)
{
	string A_NTemp;
	
		
	cout<<"Please enter the Author's Name."<<endl;
	cin>>A_NTemp;
	book::SetAuthorName(A_NTemp);
	
	
}


/*------------------------------------------------------------------*/

//Start of main function
int main()
{
	int switchtrig;
	
	
	
	cout<<"---!Welcome to the Coursework #2 Bookshop Inventory Program!---"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Please enter your number of choice for its corresponding task"<<endl;
	cout<<"1. \t Enter a new book record."<<endl;
	cout<<"2. \t Search for a book record."<<endl;
	cout<<"3. \t Enter a new book record."<<endl;
	 
	cin>>switchtrig;
	
	switch(switchtrig){
		case 1:
			cout<<"You have selected to enter a new record"<<endl;
			newrecord();
			break;
		case 2:
			cout<<"You have selected to search for a book"<<endl;
			search_data();
			break;
		default:
			cout<<"Please enter a number from 1 to n"<<endl;
			break;
	}
	
	
	
	
	
	

  TableLayout(); //Runs Table Layout function (Header)

 
  
  search_data(); //Runs Search function (input from user)
 // cout << test_obj.get_author() << '\n';

    //system("pause");
	// to test variables
	//cout << book_title << "by" << author_name;

  return 0;
}
//End of program
