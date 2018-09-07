//call the library
#include<iostream>
using namespace std;
int main()
	{
	//declaring the variable for no. of sides and asking the user to enter the size
	int n;
        
	cout<<"enter the no. of stars"<<endl;
        cin>>n;
	for(int i=0;i<n;i++)//outer loop for vertical lines
	{
        for(int j=i;j<n;j++)//inner loops for horizontal lines
	{
	cout<<"*";//printing the pattern
	
	}
cout<<endl; 
        }
return 0;
}

