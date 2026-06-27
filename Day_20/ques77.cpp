

#include<iostream>
using namespace std;

int main()
{
  int i,k,n,j,a[20][20];
  cout<<"enter a number n:"<<endl;
  cin>>n;
  cout<<"enter the matrix first:"<<endl;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
  {
    cin>>a[i][j];
  }
}
int b[20][20];
cout<<"enter the matrix second:"<<endl;
for(i=0; i<n; i++){
    for(j=0; j<n; j++)
    {
        cin>>b[i][j];
    }
}
int multi[20][20];

for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        multi[i][j]=0;
       
        for(k=0; k<n; k++){
            multi[i][j]+= a[i][k] * b[k][j];
        }
    }
    }
   cout<<"multiplication of the two matrices:"<<endl;
   for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        cout<< multi[i][j]<<" ";
    }
    cout<<endl;
   }

return 0;
}


