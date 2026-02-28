use std::cell::RefCell;
use std::cmp;
use std::rc::Rc;

impl Solution {
    pub fn is_balanced(root: Option<Rc<RefCell<TreeNode>>>) -> bool {
        Self::check_height(root) != -1
    }

    fn check_height(root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
        match root {
            None => 0,
            Some(node) => {
                let node_ref = node.borrow();

                let left_h = Self::check_height(node_ref.left.clone());
                if left_h == -1 {
                    return -1;
                }

                let right_h = Self::check_height(node_ref.right.clone());
                if right_h == -1 {
                    return -1;
                }

                if (left_h - right_h).abs() > 1 {
                    return -1;
                }

                cmp::max(left_h, right_h) + 1
            }
        }
    }
}
