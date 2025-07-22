class Solution {
  public int maxProfit(int[] prices) {
    int min_price = Integer.MAX_VALUE;
    int profit = 0;
    for (int i : prices) {
      min_price = Math.min(min_price, i);
      profit = Math.max(profit, i - min_price);
    }
    return profit;
  }
}
