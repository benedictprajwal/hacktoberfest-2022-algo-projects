#include<iostream>
using namespace std;
int main()
{
char c='A';

	for(int i=1,m=1;i<=5;i++)
	{
	for(int k=1;k<=5-i;k++)
	 
 	       cout<<" ";
 	 
	

	if(i%2==0)
	for(int j=1;j<=i;j++,c++)
          {
	 cout<<c;
          }
	else

	for(int j=1;j<=i;j++,m++)
	
	cout<<m;
	cout<<"\n";
	}

return 0;
}
/*
    1
   AB
  234  
 CDEF
56789
*/
