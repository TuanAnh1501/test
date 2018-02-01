#include <iostream>
#include <math.h>
using namespace std;

double babylonianRoot(double n);

int main()
{	
	int n;
	char h;
	do
	{
		cout<<"Enter value: ";
		cin>>n;
		cout<<"Square root of "<<n<<" is "<<babylonianRoot(n)<<endl;
		cout<<"Continue? (Y/n): ";
		cin>>h;
	}
	while(h!='n');	

	return 0;
}

double babylonianRoot(double n)
{
	return sqrt(n);
}
