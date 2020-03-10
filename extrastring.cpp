#include<bits/stdc++.h>

using namespace std;

int main(){
string input;
int n;
cin>>input>>n;

int deff=n-input.length();
int end_point=0;

if(deff%2){
  end_point=deff/2+1;
}else{
  end_point=deff/2;
}

for(int i=1;i<=deff;i++){
     if(i<=end_point){
     input="-"+input;
     }else{
     input=input+"-";
     }

}

cout<<input;

return 0;
}
