#include<iostream>
using namespace std;

main()
{
   int day;
   string month, sign;
   cout<<"enter day :";
   cin>>day;
   cout<<"enter month :";
   cin>>month;
   if((month=="march" && (day>=21 && day<=30)) || (month=="april" && (day>=1 && day<=19)) )
   {
      sign= "Aries";
      cout<<sign;
   }
   else if((month=="april" && (day>=20 && day<=30)) || (month=="may" &&  (day>=1 && day<=20)) )
   {
      sign= "taurus";
      cout<<sign;
   }
   else if((month=="may" && (day>=21 && day<=30)) || (month=="june" &&  (day>=1 && day<=20)) )
   {
      sign= "Gemini";
      cout<<sign;
   }
   else if((month=="june" && (day>=21 && day<=30)) || (month=="july" &&  (day>=1 && day<=22)) )
   {
      sign= "cancer";
      cout<<sign;
   }
   else if((month=="july" && (day>=23 && day<=30)) || (month=="august" &&  (day>=1 && day<=22)) )
   {
      sign= "Leo";
      cout<<sign;
   }
   else if((month=="august" && (day>=23 && day<=30)) || (month=="september" &&  (day>=1 && day<=22)) )
   {
      sign= "virgo";
      cout<<sign;
   }
   
   else if((month=="september" && (day>=23 && day<=30)) || (month=="october" &&  (day>=1 && day<=22)) )
   {
      sign= "libra";
      cout<<sign;
   }
   else if((month=="october" && (day>=23 && day<=30)) || (month=="november" &&  (day>=1 && day<=21)) )
   {
      sign= "scorpio";
      cout<<sign;
   }
   else if((month=="november" && (day>=22 && day<=30)) || (month=="december" &&  (day>=1 && day<=21)) )
   {
      sign= "Sagittarius";
      cout<<sign;
   }
  else if((month=="december" && (day>=22 && day<=30)) || (month=="january" &&  (day>=1 && day<=19)) )
   {
      sign= "capricorn";
      cout<<sign;
   }
   else if((month=="january" && (day>=20 && day<=30)) || (month=="february" &&  (day>=1 && day<=18)) )
   {
      sign= "aquarius";
      cout<<sign;
   }
   else if((month=="february" && (day>=19 && day<=30)) || (month=="march" &&  (day>=1 && day<=20)) )
   {
      sign= "pisces";
      cout<<sign;
   }
}