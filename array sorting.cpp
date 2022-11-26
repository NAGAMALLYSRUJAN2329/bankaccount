#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<n;
    int arr[n];
    for(int k=0;k<=n;k++){
        cin>>arr[k];
    }
    /*int n=2;
    int arr[n];
    arr[1]=1;
    arr[2]=2;
    arr[0]=3;*/
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp; 
            }
        }
    }
    for(int a=0;a<=n;a++){
        cout<<arr[a];
    }


    return 0;
}