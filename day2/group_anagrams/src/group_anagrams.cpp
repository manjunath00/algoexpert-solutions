#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include "group_anagrams.h"

using namespace std;

// O(wlogn) time / O(wn) space
vector<vector<string>> group_anagrams(vector<string> &words) {
  vector<vector<string>> result;
  unordered_map<string, vector<string>> anagrams;

  for(string word: words) {
    string sorted_word = word;
    sort(sorted_word.begin(), sorted_word.end());

    if(anagrams.count(sorted_word)) {
      anagrams[sorted_word].push_back(word);
    } else {
      anagrams[sorted_word] = vector<string> {word};
    }
  }

  for(auto entry: anagrams) {
    result.push_back(entry.second);
  }

  return result;
}
