#include<iostream>
using namespace std;

int main()
{
  int i,row,column,j,a[20][20],sum=0 ;
  cout<<"enter a number row and column:"<<endl;
  cin>>row>>column;
  cout<<"enter the matrix :"<<endl;
  for(i=0; i<row; i++)
  {
    for(j=0; j<column; j++)
  {
    cin>>a[i][j];
  }
}

for(i=0; i<row&& i<column; i++){
sum+=a[i][i];
}

cout<<"diagonal sum of matrix: "<<sum<<endl;
return 0; 
}
