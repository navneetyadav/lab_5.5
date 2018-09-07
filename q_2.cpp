//calling the library
#include<iostream>
using namespace std;
int main()
    {
        int n;
	//asking the user to enter the size of the width of square
        cout<< "Enter the dimensions";
        cin>>n;
       
	for(int i=1; i<=n; i++)
        	{
       			if(i <= 1)
      { for(int i=1; i<=n;i++)
                {
                    cout<< "*";
                }
      }
            else if(i<n)
            {
                cout<< endl;
    for(int j=1;j<=n;j++)
          {
          if(j==1 || j==n)
                        cout<< "*";
                    else
                        cout<< " ";
                } //end of for  variable j
            }// end of else if
            else
            {
                cout<< endl;
    for(int k=1; k<=n; k++)
       {
                    cout<<"*";
                }//end of for having variable k
            }// end of else
        }// end of first for loop
    }// end of main function

