#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

        void display_name(string s_name)
        {
            cout<<"\n THE NAME OF STUDENT IS ->"<<s_name;   
        }
        void display_grades(vector<double> &grades)
        {
            for(int i=0;i<grades.size();i++)
            {cout<<"\t"<<grades[i];}
        }
        int average_marks(vector<double> &grades,int sub)
        {
            double total=0;
            for(int i=0;i<grades.size();i++)
            {
                total+=grades[i];
            }
            return total/sub;

        }
        int high_marks(vector<double> &grading,int sub)
        {
            double marks=0;
             if(grading.size()==0)
            {
                return 0;
            }
            for(int i=0;i<grading.size();i++)
            {
                marks=max(marks,grading[i]);
            }
            return marks;
        }
        int low_marks(vector<double> &grading,int sub)
        {
            double marks=INT_MAX;
            if(grading.size()==0)
            {
                return 0;
            }
            for(int i=0;i<grading.size();i++)
            {
                marks=min(marks,grading[i]);
            }
            return marks;
        }

// string A:: sname="SAHIL";
int main()
{

    int sub;
    cout<<"\n enter the total subjects the student have->";
    cin>>sub;
    string s_name;
    cout<<"\n ENTER THE NAME OF STUDENT->";
    cin>>s_name;
    // display_name(s_name);
    vector<double> s_grades(sub);
    cout<<"\n ENTER THE GRADES OF STUDENT ->";
    for(int i=0;i<sub;i++)
    {
        cin>>s_grades[i];
    }
    int ch;
    cout<<"\n do you want to display your grades-> if yes then press 1 else go-ahead"<<endl;
    cin>>ch;
    if(ch==1)
    {
        display_grades(s_grades);
    }
    // display_name();
    display_name(s_name);
    cout<<"\n THE AVERAGE IS->";
    double a=average_marks(s_grades,sub);cout<<a;
    cout<<"\n THE LOW MARKS IS->";
    double b=low_marks(s_grades,sub);cout<<b;
    cout<<"\n THE HIGH MARKS IS->";
   double c= high_marks(s_grades,sub);cout<<c;


    
}