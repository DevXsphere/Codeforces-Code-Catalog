  #include <bits/stdc++.h>
  #define lli long long int
  #define pii pair<int,int>
  #define mii map<int,int>
  #define vi vector<int>                      //(num<<i) == num* pow(2,i);
  #define pb push_back                        //(num>>i) == num/pow(2,i);
  #define vlli vector<long long int>
  #define nl cout<<'\n'
  #define yy cout << "YES\n" 
  #define nn cout << "NO\n" 
  #define all(a) a.begin(),a.end()
  #define IM  INT_MAX
  #define IMN INT_MIN
  #define pc cout<<count<<'\n'
  #define int long long int
  #define mp make_pair
  #define vpii vector<pair<int,int>>
  using namespace std;
  signed main(){
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
     int t;cin>>t;
     while(t--){
        int n;cin>>n;
        int a[n+1]={0};
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a[x]++;
        }
        int l=0,r=a[1]+1;
        while(l+1<r){
            int mid=(l+r)/2;
            int sum=a[1]-mid;
            bool ok=false;
            for(int i=2;i<=mid;i++){
                sum+=a[i];
                if(sum<1){
                    ok=true;
                    break;
                }
                else{
                    sum--;
                }
            }
            if(ok)r=mid;
            else l=mid;
        }
        cout<<l;nl;
     }
  }