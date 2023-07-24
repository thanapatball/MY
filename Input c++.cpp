#include <iostream>
using namespace std;
int main()
{
int score;
cout<<"input C++ score :";
cin>>score;
cout<<score<<"is"<<((score >= 50)?"pass":"fail");
cout<<"score."<<endl;
}