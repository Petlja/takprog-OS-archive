#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

struct Team {
  string name;
  int score;
  int rank;
  bool operator==(const Team& other) const {
    return name == other.name &&
      score == other.score &&
      rank == other.rank;
  }
};

// Function to read teams from input
vector<Team> readTeams(int numTeams, ifstream& in) {
    vector<Team> teams;
    for (int i = 0; i < numTeams; ++i) {
        int rank;
        string name;
        int score;
        char dot;
        in >> rank >> dot >> name >> score;
        teams.push_back({name, score, rank});
    }
    return teams;
}

// Function to compare two lists of teams
bool compareRankings(vector<Team>& list1, vector<Team>& list2) {
  auto compare = [](const Team& t1, const Team& t2) {
                   return t1.rank < t2.rank ||
                                    (t1.rank == t2.rank && t1.name < t2.name);
                 };
  sort(begin(list1), end(list1), compare);
  sort(begin(list2), end(list2), compare);

  return list1 == list2;
}


int main(int argc, char* argv[]) {
  ifstream output(argv[1]);
  ifstream expected_output (argv[2]);
  ifstream input(argv[3]);

  int numTeams;
  input >> numTeams;
    
  vector<Team> list1 = readTeams(numTeams, output);
  vector<Team> list2 = readTeams(numTeams, expected_output);

  
  if (!compareRankings(list1, list2))
    return -1;

  return 0;
}
