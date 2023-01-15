#include<iostream>
using namespace std;

main()
{
   char code, time;
   int mint;
   float bill;
   cout<<"enter serice code :";
   cin>>code;
   cout<<"inter time of whole day :";
   cin>>time;
   cout<<"enter the number of minutes :";
   cin>>mint;
   if(code=='r' && mint<=50)
   {
     bill = 10;
     cout<<bill<<" $ is the bill";      
   }
   else if(code=='r'&& mint>50)
   {
     bill = 10+(mint-50)*0.20;
     cout<<bill<<" $ is the bill"; 
   }
   else if(code=='p' && time=='d' && mint<=75)
   {
     bill = 25;
     cout<<bill<<" $ is the bill";
   }
   else if(code=='p' && time=='d' && mint>75)
   {
     bill = 25+(mint-75)*0.10;
     cout<<bill<<" $ is the bill";
   }
   else if(code=='p' && time=='n' && mint<=100)
   {
     bill = 25;
     cout<<bill<<" $ is the bill";
   }
   else if(code=='p' && time=='d' && mint>100)
   {
     bill = 25+(mint-100)*0.05;
     cout<<bill<<" $ is the bill";
   }
       


}