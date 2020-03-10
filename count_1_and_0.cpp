#include<bits/stdc++.h>

using namespace std;

int main(void){
int arr[] = {1, 0, 0, 1, 0, 0, 1};
int n=sizeof(arr)/sizeof(arr[0]);

int c[n]={0};

int check[n]={0};

int res_arr[n];

int j=0;
for(int i=0;i<n;i++){

   c[arr[i]]++;

   if(c[arr[i]]==1){
       res_arr[j]=arr[i];
       j++;
   }

}

for(int i=0;i<j;i++){

    cout<<res_arr[i]<<"==="<<c[res_arr[i]]<<endl;
}

}
