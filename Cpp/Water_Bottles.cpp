class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drunk = numBottles, empty = numBottles;
        while (empty >= numExchange) {
            int new_b = empty / numExchange;
            int remaining = empty % numExchange;
            drunk += new_b;
            empty = new_b + remaining;
        }
        return drunk;
    }
};
