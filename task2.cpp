#include<iostream>
using namespace std;


main()
{
    string name;
    float mark1, mark2,mark3,mark4,mark5;
    cout<<"enter marks of english:";
    cin>>mark1;
    cout<<"enter marks of maths:";
    cin>>mark2;
    cout<<"enter marks of chemistry:";
    cin>>mark3;
    cout<<"enter marks of social science:";
    cin>>mark4;
    cout<<"enter marks of biology:";
    cin>>mark5;
    cout<<"name of student :";
    float total= mark1+mark2+mark3+mark4+mark5;
    float percentage = (total*100)/500;

    if(percentage<40)
    {
        cin>>name;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage is :"<<percentage<<endl;
        cout<<"F"<<endl;
    
    }

    if(percentage>=50 && percentage<60)
    {
        cin>>name;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage is :"<<percentage<<endl;
        cout<<"C"<<endl;
    
    }
    else if(percentage>=40 && percentage<50)
    {
        cin>>name;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage is :"<<percentage<<endl;
        cout<<"D"<<endl;
    
    }
    else if(percentage>=60 && percentage<70)
    {
        cin>>name;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage is :"<<percentage<<endl;
        cout<<"B"<<endl;
    
    }
    else if(percentage>=70 && percentage<80)
    {
        cin>>name;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage is :"<<percentage<<endl;
        cout<<"B+"<<endl;
    
    }
    else if(percentage>=80 && percentage<90)
    {
        cin>>name;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage is :"<<percentage<<endl;
        cout<<"A"<<endl;
    
    }
    else if(percentage>=90 && percentage<=100)
    {
        cin>>name;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage is :"<<percentage<<endl;
        cout<<"A+"<<endl;
    
    }

}