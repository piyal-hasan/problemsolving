#include<bits/stdc++.h>

using namespace std;

int main(void){

string str;

set<char> ch;

while(1){

cin>>str;

int c[256]={0};
char str1[256];

for(int i=0;i<str.length();i++){

     c[str[i]]++;
     ch.insert(str[i]);

}

for(auto it:ch){
 // cout<<it<<"===="<<c[it]<<endl;
}



set<char>::iterator it = ch.begin();

// Iterate till the end of set
while (it != ch.end())
{
	cout<<*it<<"===="<<c[*it]<<endl;
	if(c[*it]>1)
	//cout<<*it;
	it++;
}

 ch.clear();

}


}
