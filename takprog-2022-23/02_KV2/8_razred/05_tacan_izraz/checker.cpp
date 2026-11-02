#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    
    if(argc != 4){
        cout << "Argument count invalid" << endl;
        return -1;
    }

    ifstream userOutput(argv[1]);
    ifstream expectedOutput(argv[2]);
	
	vector<string> userOut;
	vector<string> expectOut;
	
	string line;
	while(getline(expectedOutput, line)){
		if(line.size() > 0)
			expectOut.push_back(line);
	}
	
	while(getline(userOutput, line)){
		if(line.size() > 0){
			userOut.push_back(line);
		}
	}
	
	if(expectOut.size() != userOut.size()){
		cerr << "User solution isn't a subset!" << endl;
		return -1;
	}
	
	sort(expectOut.begin(), expectOut.end());
	sort(userOut.begin(), userOut.end());
	
	
	for(int i = 0; i < expectOut.size(); i++){
		if(expectOut[i] != userOut[i]){
			cerr << "User solution isn't a subset!" << endl;
			return -1;
		}
	}
    
    return 0;
}
