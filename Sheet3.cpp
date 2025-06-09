//(A)  SUMMATION
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N,sum=0; //since second line goes to 10**9
  cin>>N;
  int arr[N];
  for (int i=0;i<N;i++){
    cin>>arr[i];
  }
  for (int j=0;j<N;j++){
    sum+=arr[j];
  }
  cout<<abs(sum);
}

//(B) SEARCHING

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,B;
  cin>>N;
  int A[N];
  for (int i=0;i<N;i++){
    cin>>A[i];                            //saving every element as a part of the array
  }
  int ans=-1;                              //initialising ans to avoid else
  cin>>B;
  for(int i=0;i<N;i++){
    if (A[i]==B){
      ans=i;
      break;                            //breaks to avoid going ahead 
    }
  }
  cout<<ans;
}

//(C) REPLACEMENT
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  int A[N];
  for (int i=0;i<N;i++){
    cin>>A[i];
  }
  for (int i=0;i<N;i++){
    if (A[i]>0){
      A[i]=1;
    }else if (A[i]<0){
      A[i]=2;
    }else if(A[i]==0){
      A[i]=0;
    }
    cout<<A[i]<<" ";
  }
  
}


//(D)Positions in Array
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  int A[N];
  for (int i=0;i<N;i++){
    cin>>A[i];
  }
  for (int i=0;i<N;i++){
    if (A[i]<=10){
      cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
  }
}

