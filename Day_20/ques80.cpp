#include<iostream>
using namespace std;

int main()
{
  int i,k,row,column,j,a[20][20];
  cout<<"enter a number row and column:"<<endl;
  cin>>row>>column;
  cout<<"enter the matrix first:"<<endl;
  for(i=0; i<row; i++)
  {
    for(j=0; j<column; j++)
  {
    cin>>a[i][j];
  }
  }
  for(int i =0;i<column;i++){
            int sum=0;
            for(int j=0;j<row;j++){
                sum=sum+a[j][i];
               
            }
             cout<<"the sum of column"<<sum<<endl;
        
    }
    return 0;
}