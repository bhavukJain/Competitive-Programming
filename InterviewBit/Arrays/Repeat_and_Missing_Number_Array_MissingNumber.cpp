vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int max = INT_MIN;
    int setbitno,x=0,y=0,val,count1=0,count2=0;
    val = A[0];
    for (int i = 1; i < A.size(); i++)
        val = val ^ A[i];
    for (int i = 1; i <= A.size(); i++)
        val = val ^ i;
    setbitno = val & ~(val-1);
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] & setbitno)
            x = x ^ A[i];
        else
            y = y ^ A[i];
    }
    for (int i = 1; i <= A.size(); i++)
    {
        if (i & setbitno)
            x = x ^ i;
        else
            y = y ^ i;
    }
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == x)
            count1++;
        else if (A[i] == y)
            count2++;
    }
    vector<int> myvec;
    // cout<<x<<"\t"<<y<<"\n";
    if (count1 == 2 && count2 == 0)    
    {
        myvec.push_back(x);
        myvec.push_back(y);
    }
    else
    {
        myvec.push_back(y);
        myvec.push_back(x);
    }
    return myvec;
}