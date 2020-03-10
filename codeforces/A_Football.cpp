#include<bits/stdc++.h>

using namespace std;

int main(void){

string str;

//while(1){
cin>>str;

int c=1;

bool flag=false;

for(int i=0;i<str.length()-1;i++){

    if(str[i]==str[i+1]){
          c++;
    } else{
      //cout<<c<<endl;

          if(c>=7){
              flag=true;
          }
          c=1;

    }

}
if(flag||c>=7){
cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}
//}




}
