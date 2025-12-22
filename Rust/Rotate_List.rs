// Definition for singly-linked list.
// #[derive(PartialEq, Eq, Clone, Debug)]
// pub struct ListNode {
//   pub val: i32,
//   pub next: Option<Box<ListNode>>
// }
//
// impl ListNode {
//   #[inline]
//   fn new(val: i32) -> Self {
//     ListNode {
//       next: None,
//       val
//     }
//   }
// }
impl Solution {
    pub fn rotate_right(mut head: Option<Box<ListNode>>, k: i32) -> Option<Box<ListNode>> {
        if head.is_none() {
            return None;
        }

        let mut len = 0;
        let mut curr = &head;
        while let Some(node) = curr {
            len += 1;
            curr = &node.next;
        }

        let k = k % len;
        if k == 0 {
            return head;
        }

        let mut curr = &mut head;
        for _ in 0..(len - k - 1) {
            curr = &mut curr.as_mut().unwrap().next;
        }

        let mut new_head = curr.as_mut().unwrap().next.take();

        let mut tail = &mut new_head;
        while let Some(node) = tail {
            if node.next.is_none() {
                node.next = head;
                break;
            }
            tail = &mut node.next;
        }

        new_head
    }
}
