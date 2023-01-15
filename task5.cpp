#include<iostream>
using namespace std;

main()
{
  string fruit;
  string day;
  float quantity;
  float price;
  
  cout<<"enter the name of fruit:";
  cin>>fruit;
  cout<<"enter the name of day:";
  cin>>day; 
  cout<<"enter the quantity of fruit:";
  cin>>quantity;
  if((day=="monday" || day=="tuesday" || day=="thursday" || day=="wednesday" || day=="friday") && fruit=="banana")
  {
    price = quantity*2.50;
    cout<<"the price of banana is :"<<price<<endl;
  }
  else if((day=="monday" || day=="tuesday" || day=="thursday" || day=="wednesday" || day=="friday")  && fruit=="apple")
  {
    price = quantity*1.20;
    cout<<"the price of apple is :"<<price<<endl;
  }
  else if((day=="monday" || day=="tuesday" || day=="thursday" || day=="wednesday" || day=="friday")  && fruit=="orange")
  {
    price = quantity*0.85;
    cout<<"the price of orange is :"<<price<<endl;
  }
  else if((day=="monday" || day=="tuesday" || day=="thursday" || day=="wednesday" || day=="friday")  && fruit=="grapefruit")
  {
    price = quantity*1.45;
    cout<<"the price of grapefruit is :"<<price<<endl;
  }
  else if((day=="monday" || day=="tuesday" || day=="thursday" || day=="wednesday" || day=="friday")  && fruit=="kiwi")
  {
    price = quantity*2.70;
    cout<<"the price of kiwi is :"<<price<<endl;
  }
  else if((day=="monday" || day=="tuesday" || day=="thursday" || day=="wednesday" || day=="friday")  && fruit=="pineapple")
  {
    price = quantity*5.50;
    cout<<"the price of pineapple is :"<<price<<endl;
  }
  else if((day=="monday" || day=="tuesday" || day=="thursday" || day=="wednesday" || day=="friday")  && fruit=="grapes")
  {
    price = quantity*3.85;
    cout<<"the price of grapes is :"<<price<<endl;
  }
  
  else if((day=="saturday" || day=="sunday" )  && fruit=="banana")
  {
    price = quantity*2.70;
    cout<<"the price of banana is :"<<price<<endl;
  }
  else if((day=="saturday" || day=="sunday" )  && fruit=="apple")
  {
    price = quantity*1.25;
    cout<<"the price of apple is :"<<price<<endl;
  }
  else if((day=="saturday" || day=="sunday" )  && fruit=="orange")
  {
    price = quantity*0.90;
    cout<<"the price of orange is :"<<price<<endl;
  }
  else if((day=="saturday" || day=="sunday" )  && fruit=="grapefruit")
  {
    price = quantity*1.60;
    cout<<"the price of grapefruit is :"<<price<<endl;
  }else if((day=="saturday" || day=="sunday" )  && fruit=="kiwi")
  {
    price = quantity*3.0;
    cout<<"the price of kiwi is :"<<price<<endl;
  }
  else if((day=="saturday" || day=="sunday" )  && fruit=="pineapple")
  {
    price = quantity*5.60;
    cout<<"the price of pineapple is :"<<price<<endl;
  }
  else if((day=="saturday" || day=="sunday" )  && fruit=="grape")
  {
    price = quantity*4.20;
    cout<<"the price of grape is :"<<price<<endl;
  }




}