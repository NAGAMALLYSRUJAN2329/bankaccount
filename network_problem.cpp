#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,ans;
    cin>>a>>b>>c;
    ans=(a-b)*c/b;
    cout<<ceil(ans);
    return 0;
}   