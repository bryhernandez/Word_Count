#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{

  string line = "";
    cout << "Enter words: ";
  getline(cin, line);

  vector <string> tokens;

  stringstream check1(line);

  string intermediate;
  while(getline(check1, intermediate, ' '))
  {
      tokens.push_back(intermediate);
  }

  cout << endl << "Word Count: " << tokens.size();
}
