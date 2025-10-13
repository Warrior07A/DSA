#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// amount = (sum of all digits) - 2 * (number of lowercase letters) + 3 * (number of uppercase letters)
// Higher amount first
// → more digits first
// → fewer lowercase letters first
// → more uppercase letters first
// → lexicographically smaller address first
struct check
{
    string s="";
    int digit=0;
    int lower=0;
    int upper=0;
    long long amount=0;
};
bool comp(check a, check b){
    if (a.amount > b.amount){
        return true;
    }
    else if (a.amount == b.amount){
        if(a.digit > b. digit){
            return true;
        }
        else if (a.digit == b.digit){
            if(a.lower <  b.lower){
                return true;
            }
            else if (a.lower == b.lower){
                if (a.upper >  b.upper){
                    return true;
                }
                else if (a.upper ==  b.upper){
                    
                    if (a.s < b.s){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    check arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].s;
    }
    for(int i=0;i<n;i++){
        long long sum=0;

        int l=arr[i].s.size();
        string cur_string=arr[i].s;
        for(int j=0;j<l;j++){

            if (cur_string[j]>='0' and cur_string[j]<='9'){
                arr[i].digit++;
                sum+=(cur_string[j]-'0');
            }
            else if (cur_string[j]>='a' and cur_string[j]<='z'){
                arr[i].lower++;
            }
            else if (cur_string[j]>='A' and cur_string[j]<='Z'){
                arr[i].upper++;
            }
        }
        arr[i].amount = sum  - 2 * arr[i].lower + 3 * arr[i].upper;
    }
    sort(arr,arr+n,comp);

    for(int i=0;i<k;i++){
        cout<<arr[i].s<<endl;
    }
}