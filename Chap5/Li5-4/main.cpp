#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
map<string, int> temp;
vector<string> words;

string Change(const string str) {
    string tes = str;
    for (int i = 0; i < tes.length(); i++) {
        tes[i] = tolower(tes[i]);
    }
    sort(tes.begin(), tes.end());
    return tes;
}

int main() {
    string str1;
    while(cin >> str1) {
        if(str1[0] == '#')
            break;
        words.push_back(str1);
        string r = Change(str1);
        if(!temp.count(r))
            temp[r] = 0;
        temp[r]++;
    }
    vector<string> ans;
    for (int i = 0; i < words.size(); i++) {
        //cout << words[i] << " " << temp[Change(words[i])] << "\n";
        if(temp[Change(words[i])] == 1)
            ans.push_back(words[i]);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\n";
    return 0;
}
