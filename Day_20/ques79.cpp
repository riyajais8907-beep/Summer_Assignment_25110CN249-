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
  for(int i =0;i<row; i++){
            int sum=0;
            for(int j=0;j<column;j++){
                sum=sum+a[i][j];
               
            }
             cout<<"the sum of rows"<<sum<<endl;
        
    }
    return 0;
}