#include <bits/stdc++.h>
using namespace std;

int main(void){

int a[]={2,2,2,2,1,2,1,3,3};

set<int> v;

for(int i=0;i<sizeof(a);i++){

v.insert(a[i]);

}

set<int>::iterator it;

for(it=v.begin();it!=v.end();it++){

   cout<< *it<<" ";
   cout<<endl;

}
}

