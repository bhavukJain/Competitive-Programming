vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int len = A.size();
    vector<int> myvec;
    myvec.resize(len+1,0);
    for (int i = len; i >= 1; i--)
    {
        myvec[i] = A[i-1];
    }
    int lastelement = myvec.back();
    if ((lastelement+1) < 10)
        myvec[len] = lastelement+1;
    else
    {
        int quo = 1;
        int rem = 0;
        for (int i = len; i >= 0; i--)
        {
            int val = myvec[i]+quo;
            if (val >= 10)
            {
                rem = val%10;
                quo = val/10;
                myvec[i] = rem;
            }
            else
            {
                myvec[i] = val;
                break;
            }
        }
    }
    if (myvec.front() == 1)
        return myvec;
    else
    {
        for (int i = len; i >= 1; i--)
        {
            A[i-1] = myvec[i];
        }
        while (A.front() == 0)
        {
            vector<int>::iterator it = A.begin();
            A.erase(it);
        }
        return A;
    }
    
}
