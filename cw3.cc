// Copyright 2012, Carey Riley, Dwayne Reid, <who else?>
#include <iostream>
#include <string>

class Person {
  public:
    
    
    
  private:
    std::string firstname_;
    std::string lastname_;
    class Date {
      int day_;
      int month_;
      int year_;
    };
    std::string address_;
    std::string telephone;
};

class Student:
  public Person {
    std::string studentId_;
    double feespaid;
  };

class Course {
  std::string coursename;
  std::string 
