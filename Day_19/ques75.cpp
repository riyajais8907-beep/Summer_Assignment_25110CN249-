#include<iostream>
using namespace std;

int main()
{
  int i,row,column,j,a[20][20];
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

for(i=0; i<row; i++){
for(j=0; j<i; j++){
{
    int temp = a[i][j];
    a[i][j]=a[j][i];
    a[j][i] =temp;
    
}
}
}
cout<<"transpose of matrix:"<<endl;
for(i=0; i<row; i++){
    for(j=0; j<column; j++){
        cout<<a[i][j]<<" ";
    }
}
cout<<endl;
return 0;
}