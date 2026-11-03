#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool isSubset(int n, vector<int>& sol) {
	set<int> s;
	for(auto x : sol) {
		if(!(x >= 1 && x <= n))
			return false;
		s.insert(x);
	}
	if(s.size() != sol.size())
		return false;
	return true;
}

int main(int argc, char* argv[]) {
  if (argc != 4) {
	  cout << "Argument count invalid" << endl;
	  return -1;
  }
 
  ifstream user_output(argv[1]);
  ifstream expected_output(argv[2]);
  ifstream input(argv[3]);

  int expected_max;
  expected_output >> expected_max;

  int user_max;
  user_output >> user_max;

  if(expected_max != user_max) {
	  cerr << "Subset size doesn't match!" << endl;
	  return -1;
  }
  if(expected_max == 0)
	  return 0;

  vector<int> user_sol(user_max);
  for(int i = 0; i < user_max; i++)
	  user_output >> user_sol[i];



  int n, k;
  input >> n >> k;

  if(!isSubset(n, user_sol)) {
	  cerr << "User solution isn't a subset!" << endl;
	  return -1;
  }

  vector<bool> user_subset(n + 1);
  for(auto x : user_sol)
	  user_subset[x] = true;
  for(int i = 0; i < k; i++) {
	  int a, b, c;
	  input >> a >> b >> c;
	  int count = 0;
	  count += user_subset[a];
	  count += user_subset[b];
	  count += user_subset[c];
	  if(count != 1) {
		  cerr << "Incorrect solution!" << endl;
		  return -1;
	  }
  }
 
  return 0;
}
