//#include<iostream>
//using namespace std;
//int main()
//{
//int a[6];
//
//for (int i = 0; i < 6; i++)
//{
//cout << "Enter a[" << i << "]: ";
//cin >> a[i];
//}
//cout<<"Array is:"<<endl;
//for ( int i = 0; i < 6; i++)
//{
//cout << a[i]<<" ";
//}
//
//}

//#include<iostream>
//using namespace std;
//
//voidadd(int arr,int size)
//{
//	int Sum=0;
//	for(int i=0;i<5;i++)
//	   {
//	      Sum = Sum + arr[i]
//	   }
//		cout<<Sum;
//	}
//}
//
//
//
//
//int main()
//{
//	int siz=5;
//	int arr=[5];
//	cout<<"Array is"<<endl;
//	for(i=0;i<5;i++)
//	cin>>arr[i]
//	
//	add(arr,siz)
//	
//	
//	
//}
//# include <iostream>
//# include <fstream>
//using namespace std;
//int main(){
//	ofstream   ofile;
//ofile.open("text.txt  "	);
//cout<<"Writting to the file."<< endl;
//ofile.close();
//}




//#include<iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//ofstream ofile;
//ofile.open("text.txt");
//cout<<"The file is";
//ofile.close();
//	
//	
//	}
# include<iostream>
#include<fstream>

using namespace std;

//intmain(){
//	
//ofstream File("E:\3rd Semester Notes\Cp ADP/text.txt");
//File <<"I am Abdul Wahab"<<endl;
//return 0;
//}
 main()
{
string str;
ifstream read("text.txt")
getline(read,str);
cout<<str;
}


