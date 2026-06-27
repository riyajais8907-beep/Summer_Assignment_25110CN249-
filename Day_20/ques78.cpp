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

int transpose[20][20];
for(i=0; i<row; i++){
    for(j=0; j<coloumn; j++){
        transpose[i][j]=a[j][i];
    }
}
for(i=0; i<row; i++){
    for(j=0; j<coloumn; j++){
        if(a[i][j]==transpose[i][j]){
            continue;
        }
        else{
            cout<<"the matrix is not symmetric "<<endl;
            return 0;
        }
    }
}
cout<<"the matrix is symmetric:"<<endl;
return 0;
}


