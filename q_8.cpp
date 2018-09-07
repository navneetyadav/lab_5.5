//calling the library
#include<iostream>
using namespace std;
//calling the main function
int main()
	{
	//declaring a variable to ask for the size of the pattern
	int n;
	//asking the user to enter the size of the triangle pattern
	cout<<"	ENTER THE SIZE OF THE STAR SYSTEM"<<endl;
	cin>>n;
	//starting the loop for printing the vertical lines
	for(int i=0;i<n;i++)

		{
		int j=1;
		while(j<=i)//loop for printing the horizontal lines
		
			{
			cout<<"*";//printing the star
			j++;//post increment of j for the upcoming set 
			}
		cout<<endl;//changing the lines
		}
	
	}

