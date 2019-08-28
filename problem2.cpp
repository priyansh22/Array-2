/*
Time Complexity : O(n)
Space Complexity : O(1)

Did it run on LeetCode : Yes
Any difficulties : No 

*/

#include <iostream>
using namespace std;
	int max1(int a, int b)
	{
	    if(a>b)
	   return a;
	   else
	   return b;
	}
	
	int min1(int a, int b)
	{
	    if(a<b)
	    return a;
	    else
	    return b;
	    
	}
int main() {
	
	int max,min,n=7;
	int array1[7]={2,8,6,2,11,5,70};
	
	max=array1[0];
	min=array1[0];
	

	for(int i=0;i<n;i=i+2)
	{
	    if(i=n-1)
	    {
	        min=min1(min,array1[i]);
	        max=max1(max,array1[i]);
	    }
	    
	    else if(array1[i]>array1[i+1])
	    {
	        max=max1(max,array1[i]);
	        min=min1(min,array1[i+1]);
	    }
	    else
	    {
	       max=max1(max,array1[i+1]);
	        min=min1(min,array1[i]); 
	    }
	    
	}
	
	cout<<min; cout<<" ";
	 cout<<max;
	
	
	return 0;
}