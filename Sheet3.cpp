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


(E) Lowest Number

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  int A[N];
  for (int i=0;i<N;i++){
    cin>>A[i];
  }
  int low=A[0];
  int index=1;
  for (int i=0;i<N;i++){                          
    if (A[i]<low){                                  //dont try A[i]<A[i+1]
      low=A[i];                                      //we have to compare A[i] with lowest not with A[i+1] i.e. next one
      index=(i+1);
    }
  }

  cout<<low<<" "<<index;
}

//(F)REVERSING


#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  int A[N];
  for (int i=0;i<N;i++){
    cin>>A[i];
  }
  int B[N];
  for (int i=0;i<N;i++){
    B[N-i-1]=A[i];                      //ASSIGNING TO THE NEW ELEMENT FROM THE LAST!
    
  }
  for (int i=0;i<N;i++){
    cout<<B[i]<<" ";
  }
}


//(G) PALINDROME ARRAY

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  int A[N];
  for (int i=0;i<N;i++){
    cin>>A[i];
  }
  string what="YES";

    for(int i=0;i<N;i++){
      if(A[i]==A[N-i-1]){
        what="YES";
      }
      else{
        what="NO";
        break;
      }
    }
  cout<<what;
  

}