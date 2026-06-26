#include<iostream>
using namespace std;

int main()
{
  int i,row,coloumn,j,a[20][20];
  cout<<"enter a number row and coloumn:"<<endl;
  cin>>row>>coloumn;
  cout<<"enter the matrix first:"<<endl;
  for(i=0; i<row; i++)
  {
    for(j=0; j<coloumn; j++)
  {
    cin>>a[i][j];
  }
}
int b[20][20];
cout<<"enter the matrix second:"<<endl;
for(i=0; i<row; i++){
    for(j=0; j<coloumn; j++)
    {
        cin>>b[i][j];
    }
}
int sub[i][j];
for(i=0; i<row; i++){
    for(j=0; j<coloumn; j++){
        sub[i][j]=a[i][j]-b[i][j];
        cout<<"the subtract of the matrices:"<<sub[i][j]<<endl;
    }
   cout<<endl;
}
return 0;
}


