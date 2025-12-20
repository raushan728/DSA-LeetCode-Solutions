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
    pub fn is_palindrome(head: Option<Box<ListNode>>) -> bool {
        let mut head = head;
        let mut len = 0;
        let mut curr = &head;
        while let Some(node) = curr {
            len += 1;
            curr = &node.next;
        }

        if len <= 1 { return true; }
        let mut second_half = &mut head;
        for _ in 0..(len + 1) / 2 {
            second_half = &mut second_half.as_mut().unwrap().next;
        }
        let mut second_half_head = second_half.take();
        let mut prev = None;
        let mut curr = second_half_head;
        while let Some(mut node) = curr {
            let next = node.next.take();
            node.next = prev;
            prev = Some(node);
            curr = next;
        }
        let mut p1 = &head;
        let mut p2 = &prev;
        
        while let (Some(n1), Some(n2)) = (p1, p2) {
            if n1.val != n2.val {
                return false;
            }
            p1 = &n1.next;
            p2 = &n2.next;
        }

        true
    }
}