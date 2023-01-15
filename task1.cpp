#include<iostream>
using namespace std;

void activity(string temp, string hummidity);
main()
{
    string temperature, hummidity;
    cout<<"enter the temperature:";
    cin>>temperature;
    cout<<"enter the hummidity";
    cin>>hummidity;
    activity(temperature, hummidity);
    
}

  void activity(string temp, string hummidity)
  {
    if(temp=="warm" && hummidity=="dry")
    {
        cout<<"play tennis";
    }
    else if(temp=="warm" && hummidity=="humid")
    {
        cout<<"swim";
    }
    else if(temp=="cold" && hummidity=="dry")
    {
        cout<<"play basketball"<<endl;
    }
    else if(temp=="cold" && hummidity=="humid")
    {
        cout<<"watch tv"<<endl;
    }
  }