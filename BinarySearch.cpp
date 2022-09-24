#include<iostream> //Y
using namespace std;
int main()
{
  int A[]={10,20,30,40,50};
  int n=sizeof(A)/sizeof(int);
  int T=50,S=0,E=n-1;
  while(S<=E)
  {
     int M=(S+E)/2;
	 if(A[M]==T)
	 {
	 	cout<<T<<" found at index :-"<<M;
	 	break;
	   }  
	   else if(A[M]>T)
	   {
	   	E=M-1;
	   }
	   else
	   {
	   	S=M+1;
	   }
	   
	   
  }
}
  
   