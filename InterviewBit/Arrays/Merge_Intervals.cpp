/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> allIntervals;
    int len = intervals.size();
    int flag = 0;
    int i;
    for (i = 0; i < len; i++)
    {
        if (flag == 0)
        {
            if (newInterval.start < intervals[i].start)
            {
                allIntervals.push_back(newInterval);
                flag = 1;
            }
            allIntervals.push_back(intervals[i]);
        }
        else
            allIntervals.push_back(intervals[i]);
    }
    if (i == len && flag == 0)
        allIntervals.push_back(newInterval);
    // for (int i = 0; i < allIntervals.size(); i++)
    // {
    //     cout<<allIntervals[i].start<<","<<allIntervals[i].end<<"\n";
    // }
    // cout<<"hello world\n";
    stack<Interval> mystack;
    mystack.push(allIntervals[0]);
    len = allIntervals.size();
    for (i = 1; i < len; i++)
    {
        Interval temp = mystack.top();
        if (allIntervals[i].start <= temp.end)
        {
            Interval foo;
            foo.start = temp.start;
            foo.end = max(temp.end,allIntervals[i].end);
            mystack.pop();
            mystack.push(foo);
        }
        else
            mystack.push(allIntervals[i]);
    }
    vector<Interval> ans;
    len = mystack.size();
    Interval bar;
    for (i = 0; i < len; i++)
    {
        bar = mystack.top();
        mystack.pop();
        ans.push_back(bar);
    }
    reverse(ans.begin(),ans.end());
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i].start<<","<<ans[i].end<<"\n";
    // }
    return ans;
}
