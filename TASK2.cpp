#include<iostream>
using namespace std;

int add(int a,int b)
{
    int c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c;
    if(a>b)
    {
        return c=a-b;
    }
    else
    {
        return c=b-a;
    }
}

int mul(int a,int b)
{
    int c=a*b;
    return c;
}
void division(int a,int b)
{
    // int c;
    if(a==0 || b==0)
    {
        cout<<"CHANGE THE DENOMINATOR IF (NUMERATOR IS 0 THEN ANS IS 0) OR (DENOMINATOR IS 0 THEN ANS IS NOT DEFINED)";
        
    }
    else
    {
        cout<<"\n AND YOUR ANS IS ->"<<a/b;
    }
}
int main()
{

    int ch;
    cout<<" \t \t \t___________________________________________________________________ \t \t \t"<<endl;
        cout<<"\t \t \t             WELCOME TO THE SIMPLE CALCULATOR \t \t \t"<<endl;
    cout<<" \t \t \t___________________________________________________________________ \t \t \t"<<endl;
    cout<<"\n BEFORE GOING AHEAD ENTER TWO NO'S";
    int a,b;
    cin>>a>>b;
    cout<<"\n  NOW YOU HAVE 4 CHOICES ->"<<endl;
    cout<<"\n PRESS 1  FOR ADDITION \n PRESS 2 FOR SUBTRATION \n PRESS 3 FOR MULTIPLICATION \n PRESS 4 FOR DIVISION"<<endl;
   cin>>ch;
 int ans=1;
 char c;
 while(ans!=0)
 {  
        switch(ch)
        {
                case 1:  
                    cout<<"\n THIS IS ADDITION MODULE"<<endl;
                    cout<<"\n AND YOUR ANS IS ->"<<add(a,b);
                    break;
                case 2:
                    cout<<"\n THIS IS SUBTRACTION MODULE"<<endl;
                    cout<<"\n AND YOUR ANS IS ->"<<sub(a,b);
                    break;   
                case 3:
                    cout<<"\n THIS IS MULTIPLICATION MODULE"<<endl;
                    cout<<"\n AND YOUR ANS IS ->"<<mul(a,b);
                    break;
                case 4:
                    cout<<"\n THIS IS DIVISION MODULE"<<endl;
                    division(a,b);
                    break;
                default:
                    cout<<"\n INVALID INPUT";
        }
        cout<<"\n DO YOU WANT TO USE THIS CALCULATOR AGIAN IF YES THEN PRESS ANY NO EXCEPT 0";
        cin>>ans;
       char c1;
        cout<<"\n OR DO YOU WANT TO CHANGE YOUR NO'S AND WANT TO CHANGE THE MODULE"<<endl<<"\t if yes then type'y' else 'n' and press 1 for change no and 2 for module change"<<endl;
    cin>>c1;int n;
    cin>>n;
       if(c1=='y')
        { 
            switch(n)
            {
                case 1:
                    cout<<"\n ENTER YOUR NEW NO'S"<<endl;
                    cin>>a>>b;
                    break;
                case 2:
                    cout<<"\n AND WHICH MODULE YOU want to use enter your choice from above 4 choices";
                    cin>>ch;

                default:
                    cout<<"\n";
            }
        }
        else{
        

            cout<<"\n  ENTER YOUR CHOICE FROM ABOVE 4 CHOICES"<<endl;
            cin>>ch;
        }
    }          
}