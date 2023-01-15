#include<iostream>
using namespace std;

main()
{
  string month, type;
  int stay;
  float price, price1;
  cout<<"enter month :";
  cin>>month;
  cout<<"enter number of stay:";
  cin>>stay;
  if((month=="may" || month=="october") )
  {
    price1 = 65*stay;
    price = 50*stay;
    if(stay>7 && stay<=14)
    {
      price = price-(price*5)/100;
    }
    else if(stay>14)
    {
     price1 = price1-(price1*10)/100;
     price = price-(price*30)/100;
    }
     cout<<"studio:"<<price<<endl;
     cout<<"appartment:"<<price1<<endl;
  }

  if((month=="june" || month=="september") )
  {
    price1 = 68.70*stay;
    price = 75.20*stay;
    if(stay>14)
    {
     price1 = price1-(price1*10)/100;
     price = price-(price*20)/100;
    }
     cout<<"studio:"<<price<<endl;
     cout<<"appartment:"<<price1<<endl;
  }
  
  if((month=="july" || month=="august") )
  {
    price1 = 77*stay;
    price = 76*stay;
    if(stay>14)
    {
     price1 = price1-(price1*10)/100;
     
    }
     cout<<"studio:"<<price<<endl;
     cout<<"appartment:"<<price1<<endl;
  }
  
  
  
}