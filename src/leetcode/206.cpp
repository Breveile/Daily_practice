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

// 双指针法(从前往后翻转）
// 要时刻想着pre和cur这两个节点的前后连接状态，temp是为了暂存cur后面的那个节点
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

// 递归法（从后往前翻转）看leetcode题解
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