//#include<iostream>
//using namespace std;
//int main(){
//
//int i = 78612;
//int r;
//
//	for(r=0;r<5;r++)
//	{
//		cout<<i%10;
//		i=i/10;
//	}
//return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main(){
		string str="Pakistan";
		int  i;
//		for(i=7;i>=0;i--)
//		{
//			cout<< str[i];
//		}
int count=0;
    for(i=0;str[i]!='\0';i++)
      {
      	count++;
	  }
	  cout<<count;
//		cout<< "\n" <<str[7];
		return 0;
	
	}
	
	
