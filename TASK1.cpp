#include<iostream>
#include<math.h>
#include<time.h>
// #include<constream.h>
// #include<dos.h>
using namespace std;

int main()
{
    cout<<" ------------------------------------------------------------------------------------------"<<endl<<" \t \t  WELCOME TO THE GUESS GAME->"<<endl<<"------------------------------------------------------------------------------------------";
    cout<<"\n OUR RULES....";
    // cout<<"\n ------------------------------------------------------------------------------------------";
    cout<<"\n ·YOU HAVE TO GUESS THE NO IN SERIES OF 1-100"<<endl<<" ·GUESS ONLY 1 NO AT A TIME AND YOUR ATTEMPTS HAVE BEEN COINTED";
    cout<<"\n ------------------------------------------------------------------------------------------";
    int user_guess;
    int num,nguess=1;
    srand(time(0));
    num=rand() %100 +1;
    int play=1;
    do
    {
    
    
            cout<<"\n GUESS THE NO->";
            cin>>user_guess;
            if(user_guess>num)
            {
                cout<<"\n GUESS THE LOWER NO PLEASE";
            }
            else if(user_guess<num)
            {
                cout<<"\n GUESS THE UPPER NO PLEASE";
            }
            else
            {
                cout<<"\n YOUR GUESS IS CORRECT and have guess it in ->"<<nguess<<" attempts"<<endl;
            }
            nguess++;
             
        
            
            
    }

    while(user_guess!=num);



}


