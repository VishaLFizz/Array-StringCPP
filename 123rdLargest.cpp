#include <iostream>
#include<climits>
using namespace std;
int main() 
{
	cout<<"Enter the Length of Array:- ";
	int n;cin>>n;
	cout<<"Enter The Elements:- "<<endl;
	int A[n];
	for(int i=0;i<n;i++)cin>>A[i];
	int first=INT_MIN,second=INT_MIN,third=INT_MIN;

for(int i=0;i<n;i++)
{
	if(A[i]>first)
	{
		third=second;
		second=first;
		first=A[i];
	}
	else if(A[i]>second)
	{
	 third=	second;
	 second=A[i];
	}
	else if(A[i]>third)
	{
		third=A[i];
	
	}
}
cout<<"First Largest:- "<<first<<endl<<"Second Largest:- "<<second<<endl<<"Third Largest:- "<<third;

return 0;
}