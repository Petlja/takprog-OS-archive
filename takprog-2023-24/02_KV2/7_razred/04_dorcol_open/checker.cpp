#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 4) {
	  cout << "Argument count invalid" << endl;
	  return -1;
  }
 
  ifstream user_output(argv[1]);
  ifstream expected_output(argv[2]);
  ifstream input(argv[3]);

  int k;
  input >> k;
  int userW, expectedW;
  expected_output >> expectedW;
  user_output >> userW;
  
  if(userW != expectedW)
    return -1;
  
  int m = 1;
  int n = pow(2, k) / 2;
  vector<int> exs(n);
  vector<int> uss(n);
  
  for(int i = 0; i < k; i++){
    for(int j = 0; j < m; j++){
      expected_output >> exs[j];
      user_output >> uss[j];
    }
    sort(exs.begin(), exs.end());
    sort(uss.begin(), uss.end());
    
    for(int j = 0; j < m; j++) if(exs[j] != uss[j]) return -1;
    m *= 2;
  }
  return 0;
}
