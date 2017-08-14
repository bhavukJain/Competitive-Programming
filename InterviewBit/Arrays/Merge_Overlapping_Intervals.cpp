/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(), A.end(), [](const Interval &interval1, const Interval &interval2) {
        return interval1.start < interval2.start;   
    });
    int len = A.size();
    vector<Interval> ans;
    stack<Interval> mystack;
    mystack.push(A[0]);
    for (int i = 1; i < len; i++)
    {
        Interval temp1 = mystack.top();
        if (A[i].start <= temp1.end)
        {
            mystack.pop();
            Interval temp2;
            temp2.start = temp1.start;
            temp2.end = max(temp1.end,A[i].end);
            mystack.push(temp2);
        }
        else
            mystack.push(A[i]);
    }
    int lenstack = mystack.size();
    for (int i = 0; i < lenstack; i++)
    {
        Interval foo = mystack.top();
        mystack.pop();
        ans.push_back(foo);
    }
    reverse(ans.begin(),ans.end());
    int lenvector = ans.size();
    // for (int i = 0; i < lenvector; i++)
    // {
    //     cout<<ans[i].start<<","<<ans[i].end;
    //     cout<<"\n";
    // }
    return ans;
}
