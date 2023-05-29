#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;

    unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

    string palindrome;
    char oddChar = '\0';

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        char ch = it->first;
        int frequency = it->second;

        if (frequency % 2 == 0) {
            for (int i = 0; i < frequency / 2; ++i) {
                palindrome = ch + palindrome + ch;
            }
        } else {
            if (oddChar != '\0') {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            oddChar = ch;
            for (int i = 0; i < frequency / 2; ++i) {
                palindrome = ch + palindrome + ch;
            }
        }
    }

    cout << palindrome;
    if (oddChar != '\0') {
        cout << oddChar;
    }
    reverse(palindrome.begin(), palindrome.end());
    cout << palindrome << endl;

    return 0;
}