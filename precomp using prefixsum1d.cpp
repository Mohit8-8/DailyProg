/*
Given Array a of N integers 
Given Q queries and in each query given L and R print sum of array elemnets from index L to R (both included)

constraints
1 <= N <= 10^5
1 <= a[i] <= 10^5
1 <= L , R <=N
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int a[N];


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int i=l;i<=r;i++){
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    //O(N)+O(Q*N)=10^10
}






//USING PREFIX SUM
const int N = 1e5+7;
int a[N];
int pfs[N];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pfs[i]=pfs[i-1]+a[i];
    }
    
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pfs[r]-pfs[l-1]<<endl;
    }
    //O(N)+O(Q)=10^5
}
