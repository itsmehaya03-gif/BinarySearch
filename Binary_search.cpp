#include<iostream>
using namespace std;
int main()
 {
 		//binary search
 	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
 	int n , loc = -1 , mid , start = 0 , end = 9;
 	cout<<"Enter value to find: "<<endl;
 	cin>>n;


	while(start <= end)
	{
		mid = (start + end)/2;
		if(ar[mid] == n)
		{
			loc = mid;
			break;
		}
		else if(n < ar[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	 	if(loc == -1)
		{
	 		cout<<n<<" not found "<<endl;
 		}
 	    else
 		{
 			cout<<n<<" found at index "<<loc<<endl;
 		}
 
}