class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i] , speed[i]});
        }
        sort(v.begin(), v.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
            return a.first > b.first;
        });

        stack<double> s;
        for(int i=0; i<n; i++){
            double time = (double)(target - v[i].first) / v[i].second;
            if(s.empty() || time>s.top()){
                s.push(time);
            }
        }

        return s.size();
    }
};
