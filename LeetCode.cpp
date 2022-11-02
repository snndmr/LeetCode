#include <iostream>

#include "Solutions.h"

int main() {
	/*Solutions::ListNode* head = new Solutions::ListNode(0);

	head->next = new Solutions::ListNode(1);
	head->next->next = new Solutions::ListNode(0);
	head->next->next->next = new Solutions::ListNode(3);
	head->next->next->next->next = new Solutions::ListNode(0);
	head->next->next->next->next->next = new Solutions::ListNode(2);
	head->next->next->next->next->next->next = new Solutions::ListNode(2);
	head->next->next->next->next->next->next->next = new Solutions::ListNode(0);*/

	Solutions::ListNode* head = new Solutions::ListNode(0);

	head->next = new Solutions::ListNode(1);
	head->next->next = new Solutions::ListNode(0);

	auto result = Solutions::mergeNodes(head);
}
