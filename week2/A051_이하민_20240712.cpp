#include<iostream>
using namespace std;

int main(){
    string dial;
    int sum=0;
    getline(cin, dial);

    for(int i=0; i<dial.length(); i++){
        if(dial[i]>='A'&&dial[i]<='C')
            sum+=3;
        else if(dial[i]>='D'&&dial[i]<='F')
            sum+=4;        
        else if(dial[i]>='G'&&dial[i]<='I')
            sum+=5;
        else if(dial[i]>='J'&&dial[i]<='L')
            sum+=6;
        else if(dial[i]>='M'&&dial[i]<='O')
            sum+=7;
        else if(dial[i]>='P'&&dial[i]<='S')
            sum+=8;
        else if(dial[i]>='T'&&dial[i]<='V')
            sum+=9;
        else if(dial[i]>='W'&&dial[i]<='Z')
            sum+=10;
    }
    printf("%d",sum);
    return 0;
}