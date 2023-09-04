#include <iostream>
using namespace std;
void CalCircle();
void Rectangle();

int main()
{
	char Ch;
	cout<<"Program Calculate of Circle."<<endl;
	cout<<"****************************"<<endl;
	cout<<"1.Circle"<<endl;
	cout<<"2.Rectangle"<<endl;
	cout<<"3.Exit"<<endl;
	cout<<"Choose Menu :";
	cin>>Ch;
	if(Ch == 1)CalCircle();	
	else if(Ch =='2') Rectangle();
		else if(Ch == '3')cout<<"Exit"<<endl;
			else cout<<"Wrong Menu"<<endl;
			CalCircle();
	system("pause");
	return(0);
}
void CalCircle()
{
	float Radius,Area,Circumference;
	cout<<"input radius : ";
	cin>>Radius;
	Area=3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;
	cout<<endl;
	cout<<"Area of circle :"<<Area<<endl;
	cout<<"Cicumference of circle :"<<Circumference<<endl;
	cout<<"Diameter of circle :"<<(2*Radius)<<endl;
}
void Rectangle()
{
	float wide,Long,sum;
	cout<<"input wide: ";
	cin>>wide;
	cout<<"input Long: ";
	cin>>Long;
	sum = wide*Long;
	cout<<"Area of Rectangle:"<<sum<<endl;
	cout<<endl;
	
}