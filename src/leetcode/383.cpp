

// unordered_map �ڶ����Ժ�Ĭ�������key��value����0�����Ժ���ֱ��++�ͻ�����1
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