#include<iostream>
using namespace std;
int main()
{
    //here p=players,sp=snakes position,lp=ladders position,d=dice
  int p1,p2,p3,p4,sp1,sp2,sp3,sp4,sp5,lp1,lp2,lp3,lp4,lp5,d;
  cout<<"enter the position of player 1,player 2,player 3,player 4 : "<<endl;
  cin>>p1>>p2>>p3>>p4;
  cout<<"enter th epositions of 5 snakes and 5 ladders : "<<endl;
  cin>>sp1>>sp2>>sp3>>sp4>>sp5;
  cin>>lp1>>lp2>>lp3>>lp4>>lp5;
  cout<<"the game is going to start ="<<endl; 
  while(p1<100 && p2<100 && p3<100 && p4<100)
  {
    //player 1 is going to play the game

    cout<<"player 1 is going to play the game : "<<endl;
      cout<<"enter the dice value : "<<endl;
      cin>>d;
      if(p1==0 && d==6)
        {
            p1=1;
            cout<<"player 1 is at position : "<<p1<<endl;
            }
            else if(p1==0 && d!=6)
            {
                cout<<"player 1 can't move"<<endl;
            }
       else if(p1>0 && d<=6&& d>0)    
       {
        p1=p1+d;{
            if(p1>100)
            {
                cout<<" player 1 can't move "<<endl;
            }
            else
            {
                cout<<"player 1 is at position : "<<p1<<endl;
            }
        if(p1==sp1 || p1==sp2 || p1==sp3 || p1==sp4 || p1==sp5)
        {
            p1=p1-10;// after any snake bite player goes back to 10 position
            cout<<"player 1 is bitten by snake and goes to position : "<<p1<<endl;
        }
        else if(p1==lp1 || p1==lp2 || p1==lp3 || p1==lp4 || p1==lp5)
        {
             p1=p1+12;//after climbing any ladder player goes forward to 12 position
            cout<<"player 1 climbs the ladder and goes to position  : "<<p1<<endl;
            
        }
        else if(p1==100){
            cout<<"player 1 won the game"<<endl;
            break;
        }
    }
       } 
       //player 2 is going to play the game

            cout<<"player 2 is going to play the game : "<<endl;
      cout<<"enter the dice value : "<<endl;
      cin>>d;
      if(p2==0 && d==6)
        {
            p2=1;
            cout<<"player 2 is at position : "<<p2<<endl;
            }
            else if(p2==0 && d!=6)
            {
                cout<<"player 2 can't move"<<endl;
            }
       else if(p2>0 && d<=6&& d>0)    
       {
        p2=p2+d;{
            if(p2>100)
            {
                cout<<" player 2 can't move "<<endl;
            }
            else
            {
                cout<<"player 2 is at position : "<<p2<<endl;
            }
    
        if(p2==sp1 || p2==sp2 || p2==sp3 || p2==sp4 || p2==sp5)
        {
            p2=p2-10;// after any snake bite player goes back to 10 position
            cout<<"player 2 is bitten by snake and goes to position : "<<p2<<endl;
            
        }
        else if(p2==lp1 || p2==lp2 || p2==lp3 || p2==lp4 || p2==lp5)
        {
             p2=p2+12;//after climbing any ladder player goes forward to 12 position
            cout<<"player 2 climbs the ladder and goes to position  : "<<p2<<endl;
            
        }
        else if(p2==100){
            cout<<"player 2 won the game"<<endl;
            break;
        }
    }
       } 
       //player 3 is going to play the game
            
       cout<<"player 3 is going to play the game : "<<endl;
      cout<<"enter the dice value : "<<endl;
      cin>>d;
      if(p3==0 && d==6)
        {
            p3=1;
            cout<<"player 3 is at position : "<<p3<<endl;
            }
            else if(p3==0 && d!=6)
            {
                cout<<"player 3 can't move"<<endl;
            }
       else if(p3>0 && d<=6 && d>0)    
       {
        p3=p3+d;{
            if(p3>100)
            {
                cout<<" player 3 can't move "<<endl;
            }
            else
            {
                cout<<"player 3 is at position : "<<p3<<endl;
            }
        
        if(p3==sp1 || p3==sp2 || p3==sp3 || p3==sp4 || p3==sp5)
        {
            p3=p3-10;// after any snake bite player goes back to 10 position
            cout<<"player 3 is bitten by snake and goes to position : "<<p3<<endl;
            
        }
        else if(p3==lp1 || p3==lp2 || p3==lp3 || p3==lp4 || p3==lp5)
        {
             p3=p3+12;//after climbing any ladder player goes forward to 12 position
            cout<<"player 3 climbs the ladder and goes to position  : "<<p3<<endl;
            
        }
        else if(p3==100){
            cout<<"player 3 won the game"<<endl;
            break;
        }
    }
       } 
       //player 4 is going to play the game

        cout<<"player 4 is going to play the game : "<<endl;
      cout<<"enter the dice value : "<<endl;
      cin>>d;
      if(p4==0 && d==6)
        {
            p4=1;
            cout<<"player 4 is at position : "<<p4<<endl;
            }
            else if(p4==0 && d!=6)
            {
                cout<<"player 4 can't move"<<endl;
            }
       else if(p4>0 && d<=6&& d>0)    
       {
        p4=p4+d;{
            if(p4>100)
            {
                cout<<" player 4 can't move "<<endl;
            }
            else
            {
                cout<<"player 4 is at position : "<<p4<<endl;
            }
        
        if(p4==sp1 || p4==sp2 || p4==sp3 || p4==sp4 || p4==sp5)
        {
            p4=p4-10;// after any snake bite player goes back to 10 position
            cout<<"player 4 is bitten by snake and goes to position : "<<p4<<endl;
            
        }
        else if(p4==lp1 || p4==lp2 || p4==lp3 || p4==lp4 || p4==lp5)
        {
             p4=p4+12;//after climbing any ladder player goes forward to 12 position
            cout<<"player 4 climbs the ladder and goes to position  : "<<p4<<endl;
        
        }
        else if(p4==100){
            cout<<"player 4 won the game"<<endl;
            break;
        }
       } 
  }
  
return 0;
}    
  }

