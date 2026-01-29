class FoodRatings
{
public:
    unordered_map<string, pair<string, int>> foodInfo;
    unordered_map<string, set<pair<int, string>>> csnMap;
    FoodRatings(vector<string> &foods, vector<string> &cuisines,
                vector<int> &ratings)
    {
        int n = foods.size();
        for (int i = 0; i < n; i++)
        {
            string food = foods[i];
            string csn = cuisines[i];
            int rtg = ratings[i];
            foodInfo[food] = {csn, rtg};
            csnMap[csn].insert({-rtg, food});
        }
    };

    void changeRating(string food, int newRating)
    {
        string csn = foodInfo[food].first;
        int old = foodInfo[food].second;
        csnMap[csn].erase({-old, food});
        csnMap[csn].insert({-newRating, food});
        foodInfo[food].second = newRating;
    }

    string highestRated(string cuisine)
    {
        return csnMap[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */