int Solution::maxArr(vector<int> &A) {
    int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN,m4=INT_MIN;
    int m5=INT_MAX,m6=INT_MAX,m7=INT_MAX,m8=INT_MAX;
    for (int i = 0; i < A.size(); i++)
    {
        m1 = max(A[i]+i,m1);
        m2 = max(A[i]-i,m2);
        m3 = max(-A[i]+i,m3);
        m4 = max(-A[i]-i,m4);
    }
    for (int j = 0; j < A.size(); j++)
    {
        m5 = min(A[j]+j,m5);
        m6 = min(A[j]-j,m6);
        m7 = min(-A[j]+j,m7);
        m8 = min(-A[j]-j,m8);
    }
    int ans = max({(m1-m5),(m2-m6),(m3-m7),(m4-m8)});
    return ans;

}
