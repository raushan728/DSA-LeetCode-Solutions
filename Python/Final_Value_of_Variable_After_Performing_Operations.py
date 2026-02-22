class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        ans = 0
        for x in operations:
            if "++" in x:
                ans += 1
            else:
                ans -= 1
        return ans