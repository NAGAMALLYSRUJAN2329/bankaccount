#include<iostream>
using namespace std;
int main(){
    string word;
    cin>>word;
    int a=0;
    int l;
    l=word.length();
    int i=0;
    for(i;i<l-1;i++){
        if(word[i]==word[i+1]){
            a++;
            for(int j=0;j<=l-i-3;j++){
                word[i+j]=word[i+j+2];
    }word[l-1]=0;
    word[l-2]=0;
    i=i-2;
    l=l-2;
    }}
    if(a%2==0){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}
