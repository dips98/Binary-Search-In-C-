#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n, int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e) / 2;
        if(key == arr[mid]){
            return mid;
        }
        else if (key < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
    int key;
    cout<<"enter key value "<<endl;
    cin>>key;
    cout<<"The index is at "<<binarySearch(arr,n,key)<<endl;
    return 0;
}

