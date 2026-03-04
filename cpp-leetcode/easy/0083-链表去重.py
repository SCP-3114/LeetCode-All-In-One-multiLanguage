class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if head is None or head.next is None: return head
        cur, next = head, head.next
        while next:
            if next.val != cur.val: cur = cur.next
            else: cur.next = next.next
            next = next.next
        return head
