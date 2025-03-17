
/*
given an 2d array of N*N integers given q queries ad in each query given a b c d print sume of square represented by (a,b)
as top left point and (c,d) as bottm right point 
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int ar[N][N];


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ar[i][j];
        }
    }
    
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long sum=0;
        for(int i =a;i<=c;i++){
            for(int j=b;j<=d;j++){
                sum+=ar[i][j];
            }
        }
        cout<<sum<<endl;
    }
    //O(N^2) + O(Q+N^2) = 10^11
}


//using prefix sum

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int ar[N][N];
long long pf[N][N];

int main() {
    int n;
    cin >> n;

    // Input matrix and build prefix sum
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> ar[i][j];
            pf[i][j] = ar[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1] << endl;
    }

    return 0;
}
