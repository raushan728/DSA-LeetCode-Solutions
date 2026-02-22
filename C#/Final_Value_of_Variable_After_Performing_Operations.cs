public class Solution {
    public int FinalValueAfterOperations(string[] operations) {
         int ans = 0;
        foreach (string x in operations) {
            if (x.Contains("++"))
                ans++;
            else
                ans--;
        }
        return ans;
    }
    
}