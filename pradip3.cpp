/*Write a program create employee class with members variable as EmpId,Name of Employee and
             Salary. For 10 Employees 
	Print list of all employees.
	Print list of employee who got heights salary.
*/
#include<iostream>
using namespace std;
class employe
{
	private:
		int emp_id,salary;
		char name[10];
	
	public:
		
	void get()
	{
		cout<<"\n Enter the employee no =";
		cin>>emp_id;
		cout<<"\n Enter the name =";
		cin>>name;
		cout<<"\n Enter the salary=";
		cin>>salary;
	}
	void show()
	{
		cout<<"\n employee no ="<<emp_id;
		cout<<"\n Name ="<<name;
		cout<<"\n Salary ="<<salary;
	}
	int sal()
	{
		return (salary);
	}
	
};
main()
{ 
    int i,a;
	employe e[10];
	cout<<"\n Enter 10 emplyee information";
	for(i=0;i<10;i++)
	{
		e[i].get();
		
	}
	for(i=0;i<10;i++)
	{
		e[i].show();
		
	}
	cout<<"\n -------------";
	for(i=0;i<10;i++)
	{
		
		if(e[i].sal()>a)
		{
			a=e[i].sal();
		}
	}
	cout<<"\n highest salary of emplyee information";
	for(i=0;i<10;i++)
	{
		if(a==e[i].sal())
		{
		  e[i].show();
		}
		
	}

}
	
