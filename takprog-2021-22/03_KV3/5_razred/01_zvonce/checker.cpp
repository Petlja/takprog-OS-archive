#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]){
    
    if(argc != 4){
        cout << "Argument count invalid" << endl;
        return -1;
    }

    ifstream userOutput(argv[1]);
    ifstream expectedOutput(argv[2]);
    
    double expected1, expected2, user1, user2;

    expectedOutput >> expected1 >> expected2;
    userOutput >> user1 >> user2;

    if(abs(expected1 - user1) > 0.05 || abs(expected2 - user2) > 0.00001){
        cerr << "User solution is not correct" << endl;
        return -1;
    }

    return 0;

}
