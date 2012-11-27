/*Coursework #3 L.Rowe*/

#include <iostream>
#include <string>
using namespace std;

class Date
 {
 	private:
 	int m_iDay;
 	int m_iMonth;
 	int m_iYear;
 	public:
 	Date();
 	~Date(){};
 	void setdate(int DayTemp, int MonthTemp, int YearTemp)
 	{
	 	m_iDay = DayTemp;
	 	m_iMonth = MonthTemp;
	 	m_iYear = YearTemp;
 	}

 	int getday(){return m_iDay;}
 	int getmonth(){return m_iMonth;}
 	int getyear(){return m_iYear;}
 };

class Person
 {
 	protected:
 	std::string m_sFirstName;
 	std::string m_sLastName;
 	Date DateOfBirth;
 	std::string Address;
 	int Telephone;

 	public:
 	Person();
 	~Person(){};

 	virtual void ShowInfo(void)
 	{
 	    cout<<"The person's name is: "<<m_sFirstName<<" "<<m_sLastName<<endl;
 	    cout<<"The person's date of birth is: "<<DateOfBirth.getday()<<","<<DateOfBirth.getmonth()<<","<<DateOfBirth.getyear()<<endl;
 	    cout<<"The person's address is: "<<Address<<endl;
 	    cout<<"The person's telephone number is: "<<Telephone<<endl;
 	}

 };
class Course
 {
 	public:
	std::string CourseName;
 	std::string CourseCode;
 	int num_of_credits;
 	static float cost_per_credit;
 	
 };
 
class Student: public Person
 {
 	public:
 	int StudentId;
 	int feesPaid;
 	Course Courses[6];
 };
 
int main()
 {
 	cout<<"Welcome to the coursework #3 program!"<<endl;
 	cout<<"-------------------------------------"<<endl;
 	cout<<"Creating objects...."<<endl;
 	Student JohnBrown, MaryJune, MarkLoombs, AnnMartin, JamesBlack, JuniperParks, MarcusVile, JonahWale, BruceMiller, PortiaGolding;
 	Course Intro_to_Psy, Funda_of_math, Intro_to_calc, Calculus, PsychologyII, AgronomicsI, AgronomicsII, Geology, Sociology, Pre_Calc, Disc_Math, Prob_n_Stats, C_Programming, CPP_Programming, HTML_5;
 
	system("pause");
 	return 0;
 }
 