#include<bits/stdc++.h>
using namespace std;


void func(int n){
    if(n==0) return;
    func(n-1);
    cout<<n<<endl;
}

// int main(){
//     func(5);
// }


//there should always be a base condition in recursive programs 

//how to compute time complexity of recursive programs 
//1=numer of function calls - n
//2=what is complexity of each function 
//total tc =  1*2

int sum(int n, int a[]){
    if(n<0) return 0;
    return sum(n-1,a)+a[n];
}


int digit(int n){
    if(n==0) return 0;
    return digit(n/10) +(n%10);
}

int main(){
    int n;
    cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // cout<<sum(2,a);
    cout<<digit(n);
}



