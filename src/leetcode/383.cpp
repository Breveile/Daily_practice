

// unordered_map 在定义以后，默认里面的key和value都是0，所以后面直接++就会自增1
#include <iostream>
#include <unordered_map>
using namespace std;



int main() {

    unordered_map <int, int> temp;
    
    for (int i = 1; i < 6; i++)
        temp[i]=6;

    for (auto i = temp.begin(); i != temp.end(); i++) {
        cout << "key: "<< i->first << " value: " << i->second << " ";
    }

    system("pause");
    return 0;
}