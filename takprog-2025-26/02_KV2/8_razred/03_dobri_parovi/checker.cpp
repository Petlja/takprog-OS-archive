#include <bits/stdc++.h>


using namespace std;


int main(int argc, char* argv[]) {
	if (argc != 4) {
		cout << "Argument count invalid" << endl;
		return -1;
	}
	
	ifstream user_output(argv[1]);
	ifstream expected_output(argv[2]);
	ifstream input(argv[3]);
	
	multiset<pair<int, int>> user_pairs, expected_pairs;
    int a, b;

    while (expected_output >> a >> b)
        expected_pairs.insert({a, b});

    while (user_output >> a >> b)
        user_pairs.insert({a, b});
	
	if (!user_output.eof()) {
        return -1; // malformed extra data in one of the files
    }
    
	if (user_pairs == expected_pairs)
        return 0;
    else
        return -1;
}
