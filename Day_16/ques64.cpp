#include<iostream>
using namespace std;
int main()
{
    int i,n,a[40],j,temp;
    cout<<"enter a number n:"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (i = 0; i < n ; i++) {
    for (j = 0; j < n - i; j++) {
        if (a[j] > a[j + 1]) {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
}
 j = 0;
for ( i = 0; i<n- 1; i++) {
    if (a[i] != a[i + 1]) {
        a[j] = a[i];
        j++;
    }
}
a[j]= a[n-1];
j++;
cout<<"array after removing duplicates:"<<endl;
for(i=0; i<j; i++)
{
cout<<a[i]<<endl;
}
return 0;
}