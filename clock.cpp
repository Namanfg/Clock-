#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std; 
int main()
{
    int hrs,min,sec,h,m,s;
    cout<<"Enter the current time in the format hh/mm/ss"<<endl;
    cin>>hrs>>min>>sec;
    cout<<"Set Alarm in HH:MM:SS\n\n";
    cin>>h>>m>>s;
    if(hrs<24&& min<60 && sec<60)
    {
    start:
    for(hrs;hrs<24;hrs++)
    {
        for(min;min<60;min++)
        {
                for(sec;sec<60;sec++)
                {
                    system("CLS");
                    cout<<hrs<<" : "<<min<<" : "<<sec<<" ";
                    if(hrs>12)
                    {
                        cout<<" PM";
                    }
                    else 
                    {
                        cout<<" AM";
                    }
                    if(h==hrs && m==min && s==sec)
                    {
                        cout<<"\a\a\a\a\a\a\a";
                    }
                    for(double i=0;i<99999999;i++)
                    {
                        i++;
                        i--;
                    }
                    
                }
                sec=0;
        }
        min=0;
    }
    hrs=0;
    goto start;
    }
    else 
    {
        cout<<"Enter correct time in the format HH:MM:SS\n\n"<<endl;
    }
    return 0;
}