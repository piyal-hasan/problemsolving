 #include<bits/stdc++.h>

 using namespace std;

 #define ASCII 256

 int main(void){

 string str="sample string";

 int count_char[ASCII]={0};

 int max_val=-1;

 char result;

 for(int i=0;i<str.length();i++){
    count_char[str[i]]++ ;

    if(count_char[str[i]]>max_val){
      max_val=count_char[str[i]];

      result=str[i];

    }

 }

 cout<<"max occour string is "<<result;

 }
