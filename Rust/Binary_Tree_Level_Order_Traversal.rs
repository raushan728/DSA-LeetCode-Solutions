use std::cell::RefCell;
use std::rc::Rc;
use std::collections::VecDeque;

impl Solution {
    pub fn level_order(
        root: Option<Rc<RefCell<TreeNode>>>
    ) -> Vec<Vec<i32>> {

        let mut result = Vec::new();

        if root.is_none() {
            return result;
        }

        let mut queue = VecDeque::new();
        queue.push_back(root.unwrap());

        while !queue.is_empty() {
            let size = queue.len();
            let mut level = Vec::new();

            for _ in 0..size {
                let node_rc = queue.pop_front().unwrap();
                let node = node_rc.borrow();

                level.push(node.val);

                if let Some(left) = node.left.clone() {
                    queue.push_back(left);
                }

                if let Some(right) = node.right.clone() {
                    queue.push_back(right);
                }
            }

            result.push(level);
        }

        result
    }
}
