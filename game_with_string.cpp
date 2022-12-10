#include<iostream>
using namespace std;
int main(){
    string word;
    cin>>word;
    int a=0;
    int l;
    l=word.length();
    int i=0;

    for(i;i<l;i++){
        if(word[i]==word[i+1]){
            a++;
            for(int j=0;j<=l-i-3;i++){
                word[i+j]=word[i+j+2];
    }i--;
    l=l-2;
    }
    }
    if(a%2==0){
        cout<<"No";
    }else{
        cout<<"Yes";
    }

    return 0;
}