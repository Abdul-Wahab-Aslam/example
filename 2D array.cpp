//#include<iostream>;
//using namespace std;
//int main()
//
//
//{
//	int age [5];
//	for(int i=0;i<5;i++)
//	{
//		cout<<"Plz enter age :"<<endl;
//		cin >> age[i];
//	}
//		for(int i=0;i<5;i++)
//	
//	cout<< age[i];
//}
//{
// int grt = 0;
//int Arr[6]={23,32,23,11,99}
//  //for(int i=0;i<6;i++)   // user sai number liyee
//  //cin >>Arr[i];
//
//
//grt=Arr[0];
// for(int i=1;i<6;i++)
//   {
//	if (grt=Arr[i])
//
//	{
//		cout<<"This is a greater number"<<grt<<endl;
//	}
//	else if (grt>Arr[i])
//	{
//		cout<<"This is a greater number"<<grt<<endl;
//	}
//  }
//  cout<<"The greater number is:"<<grt<<endl;
//}


	 
//	int sum, product;
//	double multiplication;
//		
//		int arr[5];
//		for(int i=0;i<5;i++)
//		
//		sum=arr[0];
//		for(int i=1;i<5;i++)
//		{
//			cout "The sum is:"<<sum<<endl;
//			cin>>sum[i];
//		}
//		
//	}

#include<iostream>;
using namespace std;
main()
{
	int arr[5];
	cout<<"Enter 5 number"
	 for(int i=0; i<5; i++)
	{
		
			cout<<"Number"<<i+1<<":";
			cin>>arr[i];
    }
    int choice;
    cout<<"Entaer your choice:\n";
    cout<<"Press 1,Calucate Sum:\n";
    cout<<"Press 2,Calculate Product:\n";
    cout<<"Press 3,Calxulate Average:\n";

    cin>>choice;
    
    
    int sum=0;
    int product=1;
	double average;
	
	switch(choice)
	{
		case 1:
			for(int i=0;i<5;i++)
			cout<<"Sum"<<sum+=arr[i];
	}
	cout<<"sum"<<sum<<endl;
	break;
}

