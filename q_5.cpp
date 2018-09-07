//calling the library
#include<iostream>
using namespace std;
//calling main function
int main()
{
int n;
//ask user to enter the dimension of the hollow rhombus
cout<<"PLEASE ENTER THE DIMENSIONS OF THE HOLLOW RHOMBUS"<<endl;
cin>>n;
    for(int i=1; i<=n; i++)
    {
        /* Print trailing spaces */
        for(int j=1; j<=n-i; j++)
        {
           cout<<" ";
        
	}

        /* Print stars and center spaces */
        for(int j=1; j<=n; j++)
            {
            if(i==1 || i==n || j==1 || j==n)
            {  
		 cout<<"*";
	    }
            else
		{
               cout<<" ";
		}
	     }
        

        cout<<endl;
    }


return 6;

}

