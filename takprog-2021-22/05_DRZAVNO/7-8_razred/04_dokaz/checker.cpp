#include <cstdint>  // added in 2026: g++ 14 needs it
#include <iostream>
#include <fstream>
#include <regex>
#include <sstream>
#include <set>

using namespace std;

int main(int argc, char *argv[]) {

	if(argc != 4)
		return -1;

  ifstream user_output(argv[1]);
  //ifstream expected_output(argv[2]);
  ifstream input(argv[3]);

	uint64_t n;
	input >> n;

	set<int> proved;
	proved.insert(1);

	string step;
	while(getline(user_output, step)) {
		if(regex_match(step, regex("\\s*")))  // preskoci prazne linije
			continue;

		if(!regex_match(step, regex("[0-9]+=[0-9]+\\+[0-9]+\\s*"))) {  // da li je oblika "a=b+c"
			cout << "Invalid output format." << endl;
			return -1;
		}

		stringstream sstr(step);
		uint64_t a, b, c;
		char tmp;
		sstr >> a >> tmp >> b >> tmp >> c;

		if(proved.find(b) == proved.end() || proved.find(c) == proved.end()) {
			cout << "Argument(s) not proved." << endl;
			return -1;
		}

		if(a != b + c) {
			cout << "Incorrect addition result." << endl;
			return -1;
		}

		proved.insert(a);
	}

	if(proved.find(n) == proved.end())
		return -1;

	return 0;
}
