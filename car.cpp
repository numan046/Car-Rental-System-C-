#include <iostream>
using namespace std;
int main()
{
	cout<<"                                                     WELCOME"<<endl;
	int j;
	cout<<"\nHow much car you required  :";
	cin>>j;
	for(int i=1;i<=j;i++)
	{
	int d,m,y;
	cout<<"Enter date :";
	cin>>d;
	cout<<"Enter month :";
	cin>>m;
	cout<<"Enter year :";
	cin>>y;
	string name;
	cout<<"\nCustomer name :";
	cin>>name;
	cout<<"Available Cars :"<<endl;
	cout<<"1.Toyota\n2.Honda\n3.BMW\n4.Cultus\n5.Corolla\n6.Alto\n7.Greendi\n8.Mehran\n9.Jeep\n10.civic"<<endl;
	string car;
	cout<<"\nWhich car you need :";
	cin>>car;
	int a[11]={0,3500,4000,5000,6000,7000,3000,8000,9000,10000,3500};
	int v;
	cout<<"\nEnter your car type number :";
	cin>>v;
	cout<<"\nRent per day  :"<<a[v]<<endl;
	int day;
	cout<<"\nHow much days  :";
	cin>>day;
	int z=a[v]*day;
	cout<<endl;
	cout<<"/////////////////////////////////////////////////////////////////"<<endl;
	cout<<".........................Payment................................."<<endl;
	cout<<"| Invoice number...................| #Cnb81353                  |"<<endl;
	cout<<"| Customer name....................|"<<name<<"                       |"<<endl;
	cout<<"| car..............................|"<<car<<"                           |"<<endl;
	cout<<"| per day rent.....................|"<<a[v]<<"                        |"<<endl;
	cout<<"| car rent for how much days.......|"<<day<<"                          |"<<endl;
	cout<<"| Total amount.....................|"<<z<<"                       |"<<endl;
	cout<<"| date.............................|"<<"Date "<<d<<"  "<<"Month "<<m<<"\t"<<"Year "<<y<<"                      |"<<endl;
	cout<<"//////////////////////////////////////////////////////////////////"<<endl;
}
return 0;
}
	
