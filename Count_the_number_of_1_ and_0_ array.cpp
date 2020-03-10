#include<bits/stdc++.h>

using namaspace std;

int main(void){
int arr[] = {1, 0, 0, 1, 0, 0, 1};
int n=sizeof(arr)/sizeof(arr[0]);

int c[n]={0};

int check[n]={0};

int res_arr[n];

res_arr[0]=arr[0];

check[arr[0]]=1;
int j=1;
for(int i=0;i<n;i++){

   c[arr[i]]++;

   if(c[arr[i]]==1){
       res_arr[j]=arr[i];
   }

}

for(int i=0;i<j;i++){

    cout<<res_arr[i]<<"==="<<c[res_arr[i]]<<endl;
}

}