#include<stdio.h>

bool is_perfectsqrt(int n){
         for(int i=1;i<=n;i++){
                  if((n%i==0)&&(n/i==i)){
                     return true;
                  }

         }

         return false;

}

int main(void){

   int n;

   scanf("%d",&n);

   if(is_perfectsqrt(n))
   printf("yes");
   else{
    printf("no");
   }


}
