class NumMatrix
{
private:
    vector<vector<int>> grid;

public:
    NumMatrix(vector<vector<int>>& matrix)
    {
        for (size_t i = 0; i < matrix.size(); i++)
        {
            grid.push_back({ 0 });
        }

        for (size_t i = 0; i < matrix.size(); i++)
        {
            for (size_t j = 1; j <= matrix[i].size(); j++)
            {
                grid[i].push_back(matrix[i][j - 1] + grid[i][j - 1]);
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int finalSum = 0;

        for (int i = row1; i <= row2; i++)
        {
            finalSum += grid[i][col2+1] - grid[i][col1];
        }
        return finalSum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */