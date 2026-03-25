#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
     
    int current = 0;
    int maxLen = 0;

    for(int i = 0; i < s.size(); i++) {

        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            current++;
            
            if(current > maxLen) {
                maxLen = current;
            }
        }
        else {
            current = 0;
        }
    }

    cout << maxLen;
    return 0;
}