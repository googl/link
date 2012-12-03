// Copyright 2012, Carey Riley, Dwayne Reid, <who else?>
/* Create a person class that contains Firstname, Lastname and Date of Birth (use
the date class from Coursework 1), Address and Telephone Number, along with a
virtual show function.

Create a Student class that inherits from the Person Class and adds StudentId,
feespaid and Courses(this is an Array object of the Course class, A student can
register for a maximum of 6 courses and a minimum of 3). The show function calls
calculatetotalfees that calculate and outputs the total fees for the student; it
should also output the total fees paid and the amount due. Overload the plus
operator within the student class such that it increases the feespaid variable
by an amount specified in the parameter.

Create a class named  Course that contains Coursename, Coursecode, Number of
credits, and Cost per Credit which is a static variable.

Create a function called calculatestotalfees that calculates the fees for a
student by adding the cost of each course that a student takes. The cost of each
course can be found by multiplying the number of credits of each course by the
cost per credit.

Create a main that creates 10 student objects as well as 15 course objects. The
software should use a loop to call the show function of each student object. */
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

namespace {
//  inline *calculatetotalfees(int credits, double cost_per_credit, double paid)
//  {s}
}
// Variables ending with '_' are members of a class.
// Person class
class Person {
//  public:
  private:
    std::string firstname_;
    std::string lastname_;
    class Date {
      int day_;
      int month_;
      int year_;
    };
    std::string address_;
    std::string telephone_;
// virtual show program should call calculatetotalfees
    virtual void show();
};
// Student Class Inherited from Person class
class Student: public Person {
    std::string studentid_;
    int feespaid_;

  public:
// overload operator to increase feespaid by amount specified
// in parameter
    //feespaid(int paid) {feespaid_  = feespaid_ operator+ paid;}
  };
// Course class
class Course {
  std::string coursename_;
  std::string coursecode_;
  int number_of_credits_;
  static double cost_per_credit_;
};

int main() {
  Student* student_objects(new Student[10]);  // 10 student objects
  Course* course_objects(new Course[15]);      // 15 course objects
return 0;
}
