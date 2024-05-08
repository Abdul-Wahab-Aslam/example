//#include<iostream>
//using namespace std;
//
//int main()
//{
//int i;
//int no;
//	cout<<"Enter the number"<<endl;
//	cin>>no; //12532
//	cout<<"Reverse Number is:"<<endl;
//	for(i=0;i<=5;i++)
//	{
//	cout<<no%10;
//	no=no/10;	
//	}
//}

//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	//int r1,r2;
//	srand(0); 
//	cout << "Random from 0 to 6: ";
//	for (int i = 0; i < 6; i++)
//	{
//		cout << rand() % 6 <<" ";
//	}
//	cout << "\nRandom from 1 to 6: ";
//	for (int i = 0; i < 6; i++)
//	{
//		cout << rand() % 6 + 1 <<" ";
//	}
//}
#include<iostream>
//#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
int random = rand();
//No srand() calls before rand(), so seed = 1
cout << "Seed = 1, Random number = " << random << endl;

srand(5);//Seed = 5 
random = rand();
cout << "Seed = 5, Random number = " << random << endl;

return 0;
}



