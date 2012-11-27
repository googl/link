/* Copyright 2012 Carey R. Riley */
#include<iostream>
#include<string>
// #include "banned.h"
// #include<cassert>
using std::cout;

/*2a.*/
class Date {
    int day;
    int month;
    int year;
  public:
    Date(int, int, int) :
      day(1),
      month(1),
      year(1970) {}
  int getDay() {return day;}
  int getMonth() {return month;}
  int getYear() {return year;}
};

/*2b. InventoryItem containing Name, Cost, Quantity, DatePurchased(Object of the date Class),
InventoryTotal(Static Variable)*/

class InventoryItem {
  std::string Name;
  double Cost;
  int Quantity;
  Date DatePurchased;              /*Object of the date class*/
  static int InventoryTotal;

  public:
  InventoryItem() :
    Name(" "),
    Cost(0.0),
    Quantity(0),
    DatePurchased(1, 1, 1970) {}

    void setInventoryTotal(int amt) { InventoryTotal = amt; }
    std::string getName() {return Name;}
    double getCost() {return Cost;}
    int getQuantity() {return Quantity;}
    // Date getDatePurchased() { }
    int getInventoryTotal() {return InventoryItem::InventoryTotal;}

    /*2.c friend function to change quantity of Inventory item*/

     friend void changeQuantity(int quan);  // { Quantity = quan; }
     void changeQuantity(int quan) { Quantity = quan; }

  ~InventoryItem() {cout << "Object deleted.\n";}  // destructor
  };

  int main()  {
    /*3. main function that instantiates 10 InventoryItem objects using arrays; should use 
    friend function to change   the quantity of 4 InventoryItem objects*/

  // InventoryItem testit[10];
  InventoryItem *p_testit = new InventoryItem[10];
   /* changing quantity works
    testit.changeQuantity(10.00);
   cout << testit.getQuantity();
    */

    for (int sub(0), quan(1); sub <= 3; ++sub, ++quan) {
      p_testit[sub].changeQuantity(quan++);
     // cout << testit[sub].getQuantity() << " in stock." << "\n";
    }
    int i(0);
    while (i <= 3) {
      cout << p_testit[i].getQuantity() << " in stock." << std::endl;
      ++i;
    }
    delete [] p_testit;
}
