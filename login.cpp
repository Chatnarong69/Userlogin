#include <iostream>
#include <string>
using namespace std;
int main()
{
	char Menu;
	string ure;
	string pre;
	string ulog;
	string plog;
	do
	{
		cout << "///////Menu//////" << endl;
		cout << "1. Register" << endl;
		cout << "2. Login" << endl;
		cout << "Q. Exit Program" << endl;
		cout << "__________________" << endl;
		cout << "Enter menu : " ;
		cin >> Menu;
		if(Menu == '1')
		{
			cout << "*******Register********" << endl;
			cout << "Input Username : ";
			cin >> ure;
			cout << "Input Password : ";
			cin >> pre;
		}
		else if (Menu == '2')
		{
			cout << "******Login********" << endl;
			cout << "Input Username : " ;
			cin >> ulog;
			cout << "Pass_log : ";
			cin >> plog;
			if(ulog != ure && plog != pre)
			{	
					cout << "!!!!Username or Password incorrect Please try again!!!!" << endl;
					cout << "Input Username : " ;
					cin >> ulog;
					cout << "Pass_log : ";
					cin >> plog;
			}else
			{
				cout << "Username or Password correct ^___^";
			}
		}
	}while(Menu != 'Q');
	cout<<"Exit Program......"<<endl;

	return(0);
}