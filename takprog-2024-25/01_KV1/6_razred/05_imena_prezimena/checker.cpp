#include <fstream>
#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 4) {
	  cout << "Argument count invalid" << endl;
	  return -1;
  }
 
  ifstream user_output(argv[1]);
  ifstream expected_output(argv[2]);
  ifstream input(argv[3]);

  
  multiset<pair<string, string>> expected_lines, user_lines;

  string word1, word2;

  while (expected_output >> word1 >> word2)
      expected_lines.insert({word1, word2});

  while (user_output >> word1 >> word2)
      user_lines.insert({word1, word2});
 

  if (expected_lines == user_lines)
    return 0;
  else
    return -1;
  
}
