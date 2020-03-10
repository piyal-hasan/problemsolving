#include <bits/stdc++.h>
using namespace std;

int main(void){

int a[]={2,2,2,2,1,2,1,5,3,8};

int n=sizeof(a)/sizeof(a[0]);

int rs_array[256]={0};
int finalarr[n];
int j=1;
rs_array[a[0]]=1;
finalarr[0]=a[0];
for(int i=1;i<n;i++){

  if(rs_array[a[i]]==0){
     rs_array[a[i]]=1;
     finalarr[j]=a[i];
     j++;
  }

}

int n2=sizeof(finalarr)/sizeof(finalarr[0]);
cout<<n2<<endl;

for(int it=0;it<j;it++){
   cout<<finalarr[it]<<" ";
}
}

