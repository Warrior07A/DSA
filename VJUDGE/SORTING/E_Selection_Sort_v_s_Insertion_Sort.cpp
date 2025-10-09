#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        
        //selectioon sort
        int s1=0;
        for (int i=0;i<n;i++){
            int min=i;
            for (int j=i+1;j<n;j++){
                if (arr[j]<arr[min]){
                    min=j;
                }
            }
            if (arr[min]!=arr[i]){
                swap(arr[i],arr[min]);
                s1+=1;
            }
        }
        
        
        // insertion sort
        int s2=0;
        for (int i=1;i<n;i++){
            int j=i-1;
            // int shift=0;
            int temp=arr2[i];
            while(j>=0 and temp<arr2[j]){
                arr2[j+1]=arr2[j];
                s2++;
                j--;
            }
            arr2[j+1]=temp;
            // s2+=shift;   
        }
        // cout<<s1<<" "<<s2;
        if (s1==s2){
            cout<<"Tie"<<endl;
        }
        else if (s1<s2){
            cout<<"Selection Sort"<<endl;
        }
        else if (s1>s2){
            cout<<"Insertion Sort"<<endl;
        }
    }

}