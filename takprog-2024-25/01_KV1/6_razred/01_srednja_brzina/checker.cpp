#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  ifstream input(argv[3]); // input
  ifstream output(argv[1]); // user output
  ifstream expected_output(argv[2]);
  double expected;
  expected_output >> expected;
  double given;
  output >> given;
  if (expected == given) return 0;
  else return -1;
}
