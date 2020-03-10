#include<bits/stdc++.h>

using namespace std;


int main(void){

int x,y,z,n;
//while(1){
cin>>n;
int x1=0,y1=0,z1=0;
while(n){
cin>>x>>y>>z;
 x1+=x;
 y1+=y;
 z1+=z;
 n--;
}

if(x1==0&&y1==0&&z1==0){
  cout<<"YES"<<endl;
}else{
 cout<<"NO"<<endl;
}
//}


}
