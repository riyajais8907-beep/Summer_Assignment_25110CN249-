#include<iostream>
using namespace std;
int main()
{
    //else-if statements.selection control statements
    //int day;
    /*cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"You are a minor.you can't come to the party."<<endl;
    }
    else if(age==18)
    {
        cout<<"You can come to the party."<<endl;
    }
    else
    {
        cout<<"You are already eligible for the party."<<endl;
    }*/
   //switch case statements
  // cout<<"Enter the day number(1-7): "<<endl;
    //cin>>day;
  /*switch (day)
   {
    case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Friday"<<endl;
        break;
        default:
        cout<<"Invalid day"<<endl;
        break;
   }*/
  //for loop
 // for(initialization; condition; increment/decrement)
 // {
    //body of the loop
  //}
 /* for(int i=0; i<12; i++)
  {
    cout<<i<<endl;

  }*/
 //while loop
 /*int i=0;
 while(i<12)
    {cout<<i<<endl;
    i++;
    }*/
   //do while loop
   /*int i=0;
   do
   {
    cout<<i<<endl;
    i++;
   } while (i<12);*/
    //break and continue statements
    for(int i=0; i<12; i++)
    {
        if(i==5)
        {
          //  break;//it will exit the loop when i is 5
          continue;//it will skip the current iteration when i is 5
    }
        cout<<i<<endl;
    }

   





    return 0;
}