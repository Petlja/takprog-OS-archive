#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

double rastojanje(double x1, double y1, double x2, double y2){
  return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(int argc, char* argv[]) {
  if (argc != 4) {
	  cout << "Argument count invalid" << endl;
	  return -1;
  }
 
  ifstream user_output(argv[1]);
  ifstream expected_output(argv[2]);
  ifstream input(argv[3]);

  int n;
  input >> n;
    
  vector<double> xs(n);
  vector<double> ys(n);
  
  for(int i = 0; i < n; i++){
    double m;
    double y;
    input >> y >> m;
    xs[i] = 126 / m;
    ys[i] = y;
  }
  
  double exDistance = 0;
  int p;
  expected_output >> p;
  
  for(int i = 0; i < n - 1; i++){
    int r;
    expected_output >> r;
    exDistance += rastojanje(xs[r-1], ys[r-1], xs[p-1], ys[p-1]);
    p = r;
  }
  double distance = 0;
  user_output >> p;
  
  vector<int> numbering(n);
  
  for(int i = 0; i < n; i++)
    numbering[i] = 0;
  numbering[p-1]++;
  
  for(int i = 0; i < n - 1; i++){
    int r;
    user_output >> r;
    distance += rastojanje(xs[r-1], ys[r-1], xs[p-1], ys[p-1]);
    p = r;
    numbering[r-1]++;
  }
  
  if(abs(distance - exDistance) > 0.05) return -1;
  for(int i = 0; i < n; i++) if(numbering[i] != 1) return -1;
  
  return 0;
}
