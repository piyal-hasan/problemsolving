#include<bits/stdc++.h>

using namespace std;


bool is_prime(int n){

  if(n==2){
       return true;
  }

   for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
        return false;
      }

   }
   return true;

}

int main(void){

int n=100;

for(int i=2;i<=100;i++){

  if(is_prime(i)){
     cout<<i<<endl;
  }

}


}
