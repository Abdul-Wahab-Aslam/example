#include<iostream>
using namespace std;
class calculator
{
	private:
		double multiplication;
	public:
	int sum;
	
	int subtract;
	float  division;
	calculator()
	{
		sum=0;
		multiplication=0.0;
		subtract=0;
		division=0.0;
	}
	void setmultiplaication(double mul)
	{
		multiplication=mul;
	}
	double getMultiplication()
	{
		return multiplication;
	}
	
};
int main()
{
	calculator cal1,cal2;
	cal1.sum=50;
	cal1.subtract=20;
	cal1.division=14;
	cal2.sum=50;
	cal2.subtract=20;
	cal2.division=14;
	cout<<"the sum is:"<<cal1.sum<<endl;
		cout<<"the subtract is:"<<cal1.subtract<<endl;
		cal1.setmultiplaication(23.45);
			cout<<"the multiplication is:"<<cal1.getMultiplication()<<endl;
}
