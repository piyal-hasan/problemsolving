#include<bits/stdc++.h>

using namespace std;

char *removedups(char str[]){

bool has_bool[256]={0};

int i_p=0,i_r=0;

while(*(str+i_p)){

char temp=*(str+i_p);

if(has_bool[temp]==0){
has_bool[temp]=1;

*(str+i_r)=*(str+i_p);
i_r++;

}
i_p++;
}

*(str+i_r)='\0';

return str;


}


int main(void){

char str[]="geeksforgeeks";

cout<<removedups(str);
}
