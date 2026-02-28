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
    pub fn reverse_between(
        head: Option<Box<ListNode>>,
        left: i32,
        right: i32,
    ) -> Option<Box<ListNode>> {
        if left == right {
            return head;
        }
        let mut dummy = Box::new(ListNode { val: 0, next: head });
        let mut pre = &mut dummy;
        for _ in 0..(left - 1) {
            pre = pre.next.as_mut().unwrap();
        }
        let mut curr = pre.next.take().unwrap();
        for _ in 0..(right - left) {
            let mut then = curr.next.take().unwrap();
            curr.next = then.next.take();
            then.next = pre.next.take();
            pre.next = Some(then);
        }
        let mut tail = pre.next.as_mut().unwrap();
        while tail.next.is_some() {
            tail = tail.next.as_mut().unwrap();
        }
        tail.next = Some(curr);

        dummy.next
    }
}
