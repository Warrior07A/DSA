//Array is a collection of similar kind of data stored in a continuous location

int S[100];   //CREATING AN ARRAY TO STORE 100 VARIABLES IN MEMORY
//indexing will begin from 0 to N-1
//Initially the blocks will contain some random value -> GARBAGE VALUE


S[5]=10; //setting value at index 5=10

[10,"abc",true]//VALID IN JS

[1,2,4,4,5,] //valid in cpp(type =samee)

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


