use std::cell::RefCell;
use std::cmp::max;
use std::rc::Rc;

impl Solution {
    pub fn max_depth(root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
        match root {
            None => 0,
            Some(node) => {
                let curr_node = node.borrow();
                let left_height = Self::max_depth(curr_node.left.clone());
                let right_height = Self::max_depth(curr_node.right.clone());
                1 + max(left_height, right_height)
            }
        }
    }
}
