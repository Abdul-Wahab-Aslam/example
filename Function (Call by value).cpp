//#include <iostream>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	float CGPA;
//float   marks,chem marks,Phy marks;
//};
//int main(
//{
//	struct student Std[5]
//	
//	for(int i=0;i<5;i++)
//      {
//      	cout<<"Enter NAME:";
//      	cin.ignore();
//      	getline(cin,NAME);
//	  }
//}



//int main()
//
//{
//	int i = 1;
//	
//	while(i<=5){
//	
//cout<<i<<"";
//i++;	}
//return 0;
//}



//
//	int i = 1;
//	do{
//		
//	
//	
//	
//cout<<i<<"";
//i++;	}
//while(i<=);
//return 0;
//}


//intsum(int a, int b);
//{
//	int sum = 0 ;
//	sum= a+b;
//	cout<<"Enter sum is"<<sum<<endl;
//}
//
//
//int main()
//{
//	int x=10,y=20;
//	cout<<"Enter input";
//	cin>>x>>y
//	coit<<"Sum is"<<Sum(x+y)<<endl;
//	return 0;
//}


# include<iostream>
using namespace std;

void func(int&a)
{
a = 10;
cout<<"Value of a:"<<a;
}
int main(){
	int x=5;
	cout<<"x value is"<<x;
	func(x);
	
	return 0;
}
