#include<iostream>
using namespace std;

int main()
{
 int mat[3][3]={ {1,2,3},
                 {4,5,6},
                 {7,8,9} };
                 
 cout<<"given Matrix"<<endl;
 for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
   {
   
 	cout<<mat[i][j];
   }
   cout<<endl;
 }
 cout<<"After transpose"<<endl;
 for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
   {

 	cout<<mat[j][i];
   }
   cout<<endl;
 }
 
	
	return 0;
}