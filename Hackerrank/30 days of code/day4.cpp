#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	int age;
	Person(int initialage);
	void amIOld();
	void yearPasses();
};
Person::Person(int initialage)
{
	if(initialage<0)
	{
		age=0;
		cout<<"Age is not valid, setting age to 0."<<endl;
	}
	else
    {
        age=initialage;
    }
}
void Person::amIOld()
{
	//cout<<age;
	if(age<13 && age>=0)
	{
		cout<<"You are young."<<endl;
	}
	if(age>=13 && age <18)
	{
		cout<<"You are a teenager."<<endl;
	}
	if(age>=18)
	{
		cout<<"You are old."<<endl;
	}
}
void Person::yearPasses()
{
	age+=1;
	//cout<<age;
}
int main()
{
	int t;
	int age;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>age;
		Person p(age);
		
		p.amIOld();
		for(int j=0;j<3;j++)
		{
			p.yearPasses();
		}
		p.amIOld();

	}
}
