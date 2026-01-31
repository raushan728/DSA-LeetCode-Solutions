class Spreadsheet {
public:
    vector<vector<int>> grid;

    pair<int, int> getPos(string s) {
        int col = s[0] - 'A';
        int row = stoi(s.substr(1)) - 1;
        return {row, col};
    }

    Spreadsheet(int rows) { grid.resize(rows, vector<int>(26, 0)); }

    void setCell(string cell, int value) {
        auto pos = getPos(cell);
        if (pos.first >= 0 && pos.first < grid.size()) {
            grid[pos.first][pos.second] = value;
        }
    }

    void resetCell(string cell) { setCell(cell, 0); }

    int getValue(string formula) {
        if (formula[0] == '=') {
            formula = formula.substr(1);
        }

        size_t plusPos = formula.find('+');
        if (plusPos != string::npos) {
            string left = formula.substr(0, plusPos);
            string right = formula.substr(plusPos + 1);
            return getValue(left) + getValue(right);
        }

        if (isdigit(formula[0])) {
            return stoi(formula);
        }

        auto pos = getPos(formula);
        if (pos.first >= 0 && pos.first < grid.size()) {
            return grid[pos.first][pos.second];
        }
        return 0;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */
