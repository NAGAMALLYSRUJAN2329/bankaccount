#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<n;
    cin>>n;
    int max=0;
    int arr[n];
    for(int k=0;k<=n;k++){
        cin>>arr[k];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            if(arr[i+1]>max){
                max=arr[i+1];
            }
        }else if(arr[i]>max){
            max=arr[i];
        }cout<<"maximimum mumber till "<<i+1<<" is "<<max<<endl;
    }
    cout<<"maximum number="<<max;
    return 0;
}