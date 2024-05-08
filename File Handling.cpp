#include <iostream>
//#include <fstream>
using namespace std;
//ifile.open();
//ifile("My New file is"),ios::in;
//ifile.close();

//int main(){
//	
//	string str ="Pakistan";
//	for(int i=8;i>=0;i--)
//	{
//	
//	cout<<str[i];
//    }   
//    return 0;
//}


//int main()
//{
//	int r=7854;
//	for (int i=0;i<=4;i++);
//	{
//		cout<< r%10;
//		r= r/10;
//		
//	}
//return 0;
//}
//


//void exchange(int*,int*);
//int main(){
//	int n1,n2;
//	cout << "Enter two numbers = ";
//	cin>>n1,n2;
//	cout<<"Value before swapping: \n ";
//	cout<<"n1 ="<<n1<<endl;
//	cout<<"n2 ="<<n2<<endl;
//	
//	exchange(&n1,&n2);
//	
//}
//
//void exchange(int *a,int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}

//void swap(int &a,int &b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int main(){
//	int n1,n2;
//	cout<<"Enter two integer number=";
//	cin>> n1,n2;
//	
//	cout<< "n1 ="<<n1<<endl;
//	cout<<"n2 ="<<n2<<endl;
//	swap(n1,n2);
//	
//}


//struct MyCar
//{
//	string brand;
//	int model;
//	string color;
//};
//int main()
//{
//	MyCar mycar1,mycar2,mycar3;
//	mycar1.model =  2024 ;
//	mycar1.brand = "BMW";
//	mycar1.color = "Red";
//	
//    mycar2.model = 2019 ;
//	mycar2.brand = "Flari";
//	mycar2.color = "Black";
//	
//	mycar3.model = 2018 ;
//	mycar3.brand = "Lan Curosor";
//	mycar3.color = "White";
//cout<< mycar1.model<<" "<<mycar2.model<<" "<<mycar3.model<<" "<<endl;
//cout<< mycar1.brand<<" "<<mycar2.brand<<" "<<mycar3.brand<<" "<<endl;
//cout<< mycar1.color<<" "<<mycar2.color<<" "<<mycar3.color<<" "<<endl;
//
//cin>>mycar1.model;
//cin>>mycar2.brand;
//cin>>mycar3.color;
//}


struct Student
{
	int studentID;
	char name[10];
	double cgpa;
	
};
int main()
{
    Student s1 = {121,"xyz",3.5};
	cout<<"Enter Student Id";
	cin>>s1.studentID;
	cout<<"Enter your name";
	cin>>s1.name;
	cout<<"Enter your student GPA";
	cin>>s1.cgpa;
	
	cout<<"Student ID"<<s1.studentID<<endl;
	cout<<"Student Name: "<<s1.name<<endl;
	cout<<"Student ID:  "<<s1.cgpa;
}
