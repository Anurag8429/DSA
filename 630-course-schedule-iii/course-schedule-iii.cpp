class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        int n = courses.size();
        sort(courses.begin(),courses.end(),comp);

        priority_queue<int>q;
        int time = 0;
        for(auto x : courses){
            int duration = x[0];
            int last = x[1];

            time+=duration;
            q.push(duration);

            if(time>last){
                time-=q.top();
                q.pop();
            }

        }

        return q.size();
    }
};