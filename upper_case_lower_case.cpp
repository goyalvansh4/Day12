#include<iostream>
#include<string>
using namespace std;

int main(){

string str ="vanshguptabtechcse"

//convert into upper case

for(int i=0;i<str.size();i++){
if(str[i] >= 'a' && str[i]<='z')
   str[i]-=32;
   }
   cout<< str;
   
   //convert to lower case
   
  for(int i=0;i<str.size();i++)
  {
   if(str[i]>='A' && str[i]<='Z')
   {
   str += 32;
   } 
   } 
   cout<< str;
   
   return 0;
   }
