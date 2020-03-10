#include <bits/stdc++.h>

using namespace std;


string substring(string str,int s,int e){

string r="";

 for(int i=s;i<=e;i++){
     r+=str[i];
 }

 return r;

}

int main(void){

string str1="abcde";

string str2="de";


for(int i=0;i<str1.length()-str2.length()+1;i++){

       if(str2==substring(str1,i,(i+str2.length())-1)){
                  cout<<"yes";
       }



}



}
