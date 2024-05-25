// https://neetcode.io/problems/string-encode-and-decode
// couldn't do it omo. saw the video solution.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string encode(const vector<string>& strs) {
    string encoded;
    for (const string& str : strs) {
        encoded += to_string(str.length()) + "#" + str;
    }
    return encoded;
}

vector<string> decode(const string& s) {
    vector<string> decoded;
    int i = 0;
    while (i < s.length()) {
        int pos = s.find('#', i);
        int len = stoi(s.substr(i, pos - i));
        i = pos + 1;
        decoded.push_back(s.substr(i, len));
        i += len;
    }
    return decoded;
}

int main() {
    vector<string> strs;
    string s;
    while (getline(cin, s)) {
        strs.push_back(s);
    }

    string encoded = encode(strs);
    cout << "Encoded: " << encoded << endl;

    vector<string> decoded = decode(encoded);
    cout << "Decoded: ";
    for (const string& str : decoded) {
        cout << str << ",";
    }
    cout << endl;

    return 0;
}
