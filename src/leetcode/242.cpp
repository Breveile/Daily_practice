
#include <iostream>
using namespace std;


bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    int temp[26] = { 0 };

    for (char str : s)
        temp[str - 'a']++;

    for (char str : t)
        temp[str - 'a']--;

    for (int i : temp) {
        if (i != 0)
            return false;
    }

    return true;
}

int main() {

    string s1 = "anagram";
    string s2 = "nagaram";

    isAnagram(s1, s2);

    system("pause");
    return 0;
}
