#include <iostream>
#include <string>
using namespace std;
int main()
{	string Name;
	int S;
	int Sa;
	int Cp;
	cout	<<"Enter name";
	cin>>Name;
	cout	<<"Enter Salary :";
	cin	>>S;
	cout	<<"Enter Sale :";
	cin>>Sa;
	cout	<<"Enter Commission Percent :";
	cin>>Cp;
	cout	<<"Your Name = "<<Name<<endl;
	cout	<<"TotalRevenue"<<S+(Sa*Cp)/100<<endl;
	system("pause");
}