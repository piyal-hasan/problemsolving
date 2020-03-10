#include<bits/stdc++.h>

using namespace std;


int main(void){
  string str1;
  string str2;
  cin>>str1>>str2;

  for(int i=0,j=str1.length()-1;i<(str1.length())/2;i++,j--){
     char temp=str1[i];
     str1[i]=str1[j];
     str1[j]=temp;

  }

  if(str1==str2){
      cout<<"YES"<<endl;
  } else{
     cout<<"NO"<<endl;
  }
}
