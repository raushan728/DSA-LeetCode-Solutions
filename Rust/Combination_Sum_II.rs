impl Solution {
    pub fn combination_sum2(mut candidates: Vec<i32>, target: i32) -> Vec<Vec<i32>> {
        let mut results = Vec::new();
        let mut current_combination = Vec::new();
        candidates.sort();
        Self::backtrack(
            0,
            target,
            &candidates,
            &mut current_combination,
            &mut results,
        );

        results
    }

    fn backtrack(
        index: usize,
        target: i32,
        candidates: &Vec<i32>,
        current: &mut Vec<i32>,
        results: &mut Vec<Vec<i32>>,
    ) {
        if target == 0 {
            results.push(current.clone());
            return;
        }

        for i in index..candidates.len() {
            if candidates[i] > target {
                break;
            }
            if i > index && candidates[i] == candidates[i - 1] {
                continue;
            }
            current.push(candidates[i]);
            Self::backtrack(i + 1, target - candidates[i], candidates, current, results);
            current.pop();
        }
    }
}
