#include<iostream>
using namespace std;

int main() 
{
    int age, pay;
    float incPrice;

    cout << "Enter the Employee's Age: " << endl;
    cin >> age;

    if (age > 20 && age < 30) 
	{
        incPrice = (0.20) * 20000;
        pay = 20000 + incPrice;
        cout << "The Employee Income is: " << pay << endl;
    }
    else if (age > 30 && age < 40) 
	{
        incPrice = (0.30) * 30000;
        pay = 30000 + incPrice;
        cout << "The Employee Income is: " << pay << endl;
    }
    else if (age > 40 && age < 50) 
	{
        incPrice = (0.40) * 40000;
        pay = 40000 + incPrice;
        cout << "The Employee Income is: " << pay << endl;
    }
    else if (age > 50) 
	{
        incPrice = (0.50) * 80000;
        pay = 80000 + incPrice;
        cout << "The Employee Income is: " << pay << endl;
    }
    else
	{
        cout << "Invalid Input" << endl;
    }

    return 0;
}

