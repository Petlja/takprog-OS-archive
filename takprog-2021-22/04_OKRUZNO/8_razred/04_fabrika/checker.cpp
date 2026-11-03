#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define INF 1000000000
#define LINF 10000000000000000LL
#define pb push_back
#define all(x) x.begin(), x.end()
#define len(s) (int)s.size()
#define test_case { int t; cin>>t; while(t--)solve(); }
#define single_case solve();
#define line cerr<<"----------"<<endl;
#define ios { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL); }
#define mod 1000000007LL

const int N = 30005;
ll a[N];
ll n, sum;


int main(int argc, char* argv[])
{
    if (argc != 4) {
	  cout << "Argument count invalid" << endl;
	  return -1;
  }

  ifstream user_output(argv[1]);
  ifstream expected_output(argv[2]);
  ifstream input(argv[3]);
  input>>sum>>n;
  for(int i = 0;i<n;i++) input>>a[i];
  ll x, y, z;
  user_output>>x>>y>>z;
  if(x+y+z!=sum)
  {
      return -1;
  }
  multiset<ll> s;
  s.insert(x);
  s.insert(y);
  s.insert(z);
  for(ll x : a)
  {
      if(s.count(x))
      {
          s.erase(s.find(x));
      }
  }

  if(len(s)) return -1;




    return 0;
}
