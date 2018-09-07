//calling the library
#include<iostream>
using namespace std;
//calling main function
int main()
{
int n;
//ask user to enter the dimensions
cout<<"ENTER THE DIMENSIONS OF THE RHOMBUS"<<endl;
cin>>n;


    for (int i=1; i<=n; i++)
    {
        // Print the  decreasing spaces
        for (int j=1; j<=n - i; j++)
        {   
	 cout << " ";
        }    
        // Print stars after spaces
        for (int j=1; j<=n; j++)
	{            
	cout << "*";
         }    
        // shiftto the next line/row
        cout <<endl;
}
return 0;
}
