/* Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
 Pay_Rate and Salary. Write necessary functions to calculate and display the 
 salary of Worker. (Use Default values for Pay_Rate Rs. 500 per hours)*/
#include<iostream>
using namespace std;
class worker
{
	private:
		char wn[10];
		int houres,payrate,salary;
	public:
		worker()
		{
			payrate=500;
		}
		void get()
		{
			cout<<"\n Enter worker name=";
			cin>>wn;
			cout<<"\n Enter no of hours worked=";
			cin>>houres;
		}
		void show()
		{
			cout<<"\n Worker name="<<wn;
			cout<<"\n no of hours worked="<<houres;
			cout<<"\n Pay rate="<<payrate;
			salary=houres*payrate;
			cout<<"\n Salary="<<salary;
		}
};
main()
{
	worker w;
	w.get();
	w.show();
}
