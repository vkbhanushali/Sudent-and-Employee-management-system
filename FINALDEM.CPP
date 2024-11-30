#include<iostream.h>
#include<conio.h>
class Person
{
	protected:
		char name[20], gender[7];
		int age;
	public:
		void getData()
		{
			cout<<"\n\t Enter Your Name: ";
			cin>>name;
			cout<<"\n\t Enter Your Age: ";
			cin>>age;
			cout<<"\n\t Enter Your Gender: ";
			cin>>gender;
		}
		void setData()
		{
			cout<<"\t"<<name;
			cout<<"\t"<<age;
			cout<<"\t"<<gender;
		}
};

class Student: public Person
{
	protected:
		int roll, std;
		char div;
	public:
		void getData()
		{
			Person::getData();
			cout<<"\n\t Enter Your Roll No: ";
			cin>>roll;
			cout<<"\n\t Enter Your Standard: ";
			cin>>std;
			cout<<"\n\t Enter Your Division: ";
			cin>>div;
		}
		void setData()
		{
			cout<<"\t"<<roll;
			cout<<"\t"<<std;
			cout<<"\t"<<div;
			Person::setData();
		}
};

class Employee: public Person
{
	protected:
		int empid, sal;
		char desig[20];
	public:
		void getData()
		{
			Person::getData();
			cout<<"\n\t Enter Your Employee ID: ";
			cin>>empid;
			cout<<"\n\t Enter Your Designation: ";
			cin>>desig;
			cout<<"\n\t Enter Your Salary: Rs.";
			cin>>sal;
		}
		void setData()
		{
			cout<<"\t"<<empid;
			cout<<"\t"<<desig;
			cout<<"\tRs."<<sal;
			Person::setData();
		}
};
void func1()
{
	int val, i;
	cout<<"\n\t How Many Students Record You Want To Insert: ";
	cin>>val;
	Student *s;
	s = new Student[val];
	for(i=0; i<val; i++)
	{
		cout<<"\n\t Enter Record Of Student "<<i+1;
		s[i].getData();
	}
	cout<<"\n\tRollNo\tStd\tDiv\tName\tAge\tGender";
	for(i=0; i<val; i++)
	{
		cout<<"\n";
		s[i].setData();
	}
}
void func2()
{
	int val, i;
	cout<<"\n\t How Many Employee Record You Want To Insert: ";
	cin>>val;
	Employee *s;
	s = new Employee[val];
	for(i=0; i<val; i++)
	{
		cout<<"\n\t Enter Record Of Employee "<<i+1;
		s[i].getData();
	}
	cout<<"\n\tEmpID\tDesig\tSalary\tName\tAge\tGender";
	for(i=0; i<val; i++)
	{
		cout<<"\n";
		s[i].setData();
	}
}

void main()
{
	clrscr();
	int choice;
	Pravin:
	cout<<"\n\t Whose Data You Want To Insert: \n\t1.Student\n\t2.Employee";
	cout<<"\n\t Enter Your Choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			func1();
			break;
		case 2:
			func2();
			break;
		default:
			cout<<"\n\tInvalid Input.";
	}
	char again;
	cout<<"\n\n\tWant to enter data again:";
	cin>>again;
	if (again == 'y' || again == 'Y')
	{
		goto Pravin;
	}
	else
		cout<<"\n\t Thank You For Using Our Application.";
	getch();
}