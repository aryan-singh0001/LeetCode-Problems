class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0, high = 0;
        int res = INT_MIN;
        int n = fruits.size();
        unordered_map<int, int> f;

        for(high = 0; high<n; high++){
            f[fruits[high]]++;
            int size = f.size();

            while(f.size() > 2){
                f[fruits[low]]--;
                if(f[fruits[low]] == 0)
                f.erase(fruits[low]);
                low++;
            }
            int len = high - low + 1;
            res = max(res,len);
        }
        if(res == INT_MIN)
        return -1;
        return res;
    }
};