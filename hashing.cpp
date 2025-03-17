/*
Given an array a of N int. given Q queries
and in each query given a number X, print count of that number in array.

Constraints 
1<= N <= 10^5
1<= a[i] <=10^7
1<= Q <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    
    // O(N)+O(Q*N) = O(N^2) = 10^10 this code will not run in 1 second time exceeded error 

    return 0;
}








//OPTIMAL -

//Hashing 
//in this one we will pre compute so that the time complexity will be greatly reduced 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
    
//  O(N) + O(Q) = O(N) = 2*10^5

    return 0;
    
}