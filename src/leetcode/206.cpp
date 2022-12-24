#include <iostream>
using namespace std;


  // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ˫ָ�뷨(��ǰ����ת��
// Ҫʱ������pre��cur�������ڵ��ǰ������״̬��temp��Ϊ���ݴ�cur������Ǹ��ڵ�
ListNode* reverseList(ListNode* head) {
    ListNode* temp;
    ListNode* cur = head;
    ListNode* pre = nullptr;

    while (cur) {
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}

// �ݹ鷨���Ӻ���ǰ��ת����leetcode���
ListNode* reverseList2(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode* cur = reverseList2(head->next);
    head->next->next = head;
    head->next = nullptr;
    return cur;
}

int main() {
    int num;
    cin >> num;
    ListNode* head = new ListNode(num);
    ListNode* cur = head;

    while (cin >> num) {
        ListNode* temp = new ListNode(num);
        cur->next = temp;
        cur = cur->next;
    }

    ListNode* p = reverseList2(head);
    while (p != nullptr)
    {
        cout << p->val << " ";
        p = p->next;
    }

	system("pause");
	return 0;
}