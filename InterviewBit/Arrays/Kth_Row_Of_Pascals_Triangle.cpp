vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int numrows = A+1;
    int val1,val2;
    vector<vector<int> > solnvec;
    for (int i = 0; i < numrows; i++)
    {
        vector<int> foo;
        solnvec.push_back(foo);
    }
    for (int i = 0; i < numrows; i++)
    {
        if (i == 0)
            solnvec[i].push_back(1);
        else
        {
            for (int j = 0; j <= i; j++)
            {
                val1 = 0;
                val2 = 0;
                int k = j-1;
                if (k < 0)
                    val1 = 0;
                else
                    val1 = solnvec[i-1][k];
                
                if (j == i)
                    val2 = 0;
                else
                    val2 = solnvec[i-1][j];
                solnvec[i].push_back(val1+val2);
            }
        }
    }
    vector<int> ans;
    ans = solnvec[A];
    return ans;
    
    
}
