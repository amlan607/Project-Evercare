#include<bits/stdc++.h>
    #define ll long long
    #define pii pair<int,int>
    using namespace std;
    const int mxn=1e5+5;
    const int inf=1e9;
void solve()
{
    int  n,m=0;
    cin>>n;
    vector<ll>a(n+1),b(n+1);//insert kora lagbe extra element so 1 boro nite hobe ar
                                             //vector e "first" bracket e size(n+1) array te third bracket
for(int i=0;i<n;i++)
        cin>>a[i];
         for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
            if(a[i]>b[i]){
            a.insert(a.begin()+i,b[i]);
            a.pop_back();m++;
            }
         cout<<m<<endl;
            }
            int main(){
          ios_base::sync_with_stdio(0);
            cin.tie(NULL); cout.tie(NULL);
            int t=1;
            cin>>t;
            while(t--)solve();

            }

