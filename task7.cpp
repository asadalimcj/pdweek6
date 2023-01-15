#include<iostream>
using namespace std;

main()
{
  int hour, mint, hour1, mint1, rem, new_hour;
  cout<<"enter exam starting hour";
  cin>>hour;
  cout<<"enter exam starting minute";
  cin>>mint;
  cout<<"enter arrival hour";
  cin>>hour1;
  cout<<"enter arrival minute";
  cin>>mint1;
  int smint = hour*60+mint;
  int amint = hour1*60+mint1;
  int net_mint = smint-amint;
  if(net_mint<-60)
  {
    new_hour = (-1*net_mint)/60;
    rem = (-1*net_mint)%60;
    cout<<"late"<<endl<<new_hour<<":"<<rem<<"hour after start";  
  } 
  else if(net_mint<0 && net_mint>=-59)
  {
    new_hour = (-1*net_mint)/60;
    rem = (-1*net_mint)%60;
    cout<<"late"<<endl<<rem<<"minutes after start";  
  }
  else if(net_mint>0 && net_mint<=30)
  {
    new_hour = net_mint/60;
    rem = net_mint%60;
    cout<<"on time"<<endl<<rem<<"minutes before start";  
  }
  else if(net_mint>30 && net_mint<=59)
  {
    new_hour = net_mint/60;
    rem = net_mint%60;
    cout<<"Early"<<endl<<rem<<"minutes before start";  
  }       
  else if(net_mint>59)
  {
    new_hour = net_mint/60;
    rem = net_mint%60;
    cout<<"early"<<endl<<new_hour<<":"<<rem<<"hours before start";  
  }
  else if(net_mint==0)
  {
    new_hour = net_mint/60;
    rem = net_mint%60;
    cout<<"On time"<<endl;  
  }  
}