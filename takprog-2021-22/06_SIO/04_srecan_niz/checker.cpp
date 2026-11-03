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




int main(int argc, char* argv[])
{
    if (argc != 4) {
	  cout << "Argument count invalid" << endl;
	  return -1;
  }

  ifstream user_output(argv[1]);
  ifstream expected_output(argv[2]);
  ifstream input(argv[3]);

  ll n;
  input>>n;
  vector<ll> v(n);
  for(ll &x: v) input>>x;
  ll diff1 = 0, diff2 = 0;
  ll gcd1;
  user_output>>gcd1;
  diff1 += abs(v[0] - gcd1);
  ll gcd2;
  expected_output>>gcd2;
  diff2 += abs(v[0] - gcd2);
  for(int i = 1;i<n;i++)
  {
      ll us, ex;
      user_output>>us;
      expected_output>>ex;
      gcd1 = __gcd(gcd1, us);
      diff1 += abs(v[i] - us);
      diff2 += abs(v[i] - ex);
  }

  if(diff1!=diff2||gcd1==1) return -1;




    return 0;
}
