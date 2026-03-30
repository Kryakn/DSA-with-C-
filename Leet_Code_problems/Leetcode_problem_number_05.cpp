#include<iostream>
using namespace std;

    string longestPalindrome(string s) {
        int n = s.length();
    
    int start = 0;
    int maxLen = 1;

    for(int i=0; i<n; i++){
        
        // Odd length palindrome
        int left = i;
        int right = i;
        
        while(left >= 0 && right < n && s[left] == s[right]){
            int currLen = right - left + 1;

            if(currLen > maxLen){
                start = left;
                maxLen = currLen;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;
        
        while(left>=0 && right<n && s[left] == s[right]){
            int currLen = right - left + 1;

            if(currLen > maxLen){
                start = left;
                maxLen = currLen;
            }
            left--;
            right++;
        }
    }
    return s.substr(start, maxLen);
    }
int main(){
    return 0;
}