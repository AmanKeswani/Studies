#include <iostream>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int max=1;
        int len = s.length();
        for(int i=0; i<len; i++){
            if(s[i] == ' ') s[i] = '_';
            if(map.find(s[i]) == map.end()){
                map[s[i]]=i;
                max = map.size();
            }
            if(max<map.size()){
                max = map.size();
                map.clear();
                map[s[i]]=i;
            }
        }
        return max;
    }

    int main(){
        cout<<lengthOfLongestSubstring("pwwkew");
}