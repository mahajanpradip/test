/* Banking Record System.
File handling has been effectively used for each feature of this project
Operations
•	Add Record:
•	Show/List Data:
•	Search Record:
•	Edit Record:
•	Delete Record:
*/
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string name,line;
	int ac_no,c;
	cout<<"\n 1. Add Record \n 2. Show data \n 3. Search record \n 4.Edit record \n Delete Record";
	cout<<"\n Enter choice";
	cin>>c;
	switch(c)
	{
		case 1:
			ofstream out("Banking.txt");
	        cout<<"\n Enter name=";
	        cin>>name;
	        cout<<"\n enter bank account number";
	        cin>>ac_no;
	        cout<<"\n Data Was add in file";
	        out<<"\n Name="<<name;
	        out<<"\n Account no="<<ac_no;
	        out.close();
	        break;
	    
	    case 2:
	    	cout<<"\n List of data"
	    	ifstream in("Banking.txt");
	    	while(getline(in,line))
	    	{
	    		cout<<" "<<line;
			}
			in.close();
			break;
		case 3:
			cout<<"\n Enter record if you want"
			
		default:
			cout<<"\n Invalid choice";
			break;
			
	}
	
	
}
           
			
		}
	        