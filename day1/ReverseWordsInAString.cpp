#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str) {
    stringstream ss(str);
    string word;
    vector<string> words;
    
    // Extract words and store in a vector
    while (ss >> word)    words.push_back(word);

    
    // Reverse the vector of words
    reverse(words.begin(), words.end());
    
    // Join the words into a single string with a single space between them
    string result = "";
	
    for (int i = 0; i < words.size(); i++) {
        if (i > 0)    result += " ";
        result += words[i];
    }
    
    return result;
}