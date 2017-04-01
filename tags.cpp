#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()  {
  map<string, int> tags;
  string temp;

  cin >> temp;
  while (temp != "EOF")  {
    for (int i = 0; i < temp.size(); i++)  {  // not char but by word
      if (tags.find(temp) != tags.end())  {
        tags[temp]++;
      }
      else {
        tags.insert(make_pair(temp, 1));
      }
    }
    cin >> temp;
  }

  for (auto it = tags.begin(); it!=tags.end(); ++it)  {
    cout  << it -> first << " => " << it->second << endl;
  }
  //cout << tags.size() << endl;
}
