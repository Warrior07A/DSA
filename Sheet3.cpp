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

//(H) SORTING.................................................................................

//(I)SMALLEST PAIR
#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){                                               //will continue until test case ends
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
      cin>>A[i];
    }
    int min=INT_MAX;
    for (int i=0;i<N;i++){                             // will do like (0,1)(0,2)(0,3)..........(N,N)
      for (int j=i+1;j<N;j++){
        int cur=(A[i]+A[j]+j-i);            
        if (cur<min){
          min=cur;
        }
      }
    }
    cout<<min<<endl;                                    //MAKE SURE TO cout it in while loop
  }
}

//(J)LUCKY ARRAY
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  int A[N];
  for (int i=0;i<N;i++){
    cin>>A[i];
  }
  int minimum=A[0];
  for (int i=1;i<N;i++){
    if(A[i]<minimum){
      minimum=A[i];
    }
  }
  int count=0;
  for(int i=0;i<N;i++){
    if (minimum==A[i]){
      count+=1;
    }
  }
  if ((count%2)==0){
    cout<<"Unlucky";
  }else if (count%2!=0){
    cout<<"Lucky";
  }
  
}

