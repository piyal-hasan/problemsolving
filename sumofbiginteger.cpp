   #include<bits/stdc++.h>

   using namespace std;

   int main(){

   string num1="999999998888888888888888888886666";
   string num2="222228888888888888888888888888888888888888888";

   if(num1.length()<num2.length()){
     string temp="";
     temp=num1;
     num1=num2;
     num2=temp;

   }


   int l1=num1.length()-1;
   int l2=num2.length();

   string result="";


   int c=0;

   for(int i=l2-1;i>=0;i--){

         int sum=(num2[i]-'0')+(num1[l1]-'0')+c;

         c=sum/10;

         result+=std::to_string(sum%10);

         l1--;

   }
   for(int i=l1;i>=0;i--){
    int sum=(num1[i]-'0')+c;
       c=sum/10;

      result+=std::to_string(sum%10);
   }

   if(c>0){
    result+=std::to_string(c);
   }

   int l3=result.length()-1;

   while(l3>=0){
     cout<<result[l3];
     l3--;
   }
   return 0;
   }
