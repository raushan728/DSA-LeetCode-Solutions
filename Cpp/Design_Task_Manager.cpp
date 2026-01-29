class TaskManager {
public:
    unordered_map<int, pair<int, int>> tMap;
    set<vector<int>> sTasks;
    TaskManager(vector<vector<int>>& tasks) {
        for (auto& t : tasks)
            add(t[0], t[1], t[2]);
    }

    void add(int userId, int taskId, int priority) {
        tMap[taskId] = {userId, priority};
        sTasks.insert({priority, taskId, userId});
    }

    void edit(int taskId, int newPriority) {
        auto [userId, oldPri] = tMap[taskId];
        sTasks.erase({oldPri, taskId, userId});
        sTasks.insert({newPriority, taskId, userId});
        tMap[taskId].second = newPriority;
    }

    void rmv(int taskId) {
        auto [userId, pri] = tMap[taskId];
        sTasks.erase({pri, taskId, userId});
        tMap.erase(taskId);
    }

    int execTop() {
        if (sTasks.empty())
            return -1;
        auto it = sTasks.rbegin();
        int pri = (*it)[0];
        int taskId = (*it)[1];
        int userId = (*it)[2];
        sTasks.erase(prev(sTasks.end()));
        tMap.erase(taskId);
        return userId;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */