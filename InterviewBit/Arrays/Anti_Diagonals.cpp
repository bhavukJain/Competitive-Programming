vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    //   cout<<"hello world1\n";
    int numrows = A[0].size();
    // cout<<"hello world1\n";
    int numcolumns = A[0].size();
    // cout<<"hello world\n";
    int tempcolumn,temprow,diff;
    vector<vector<int> > myvec;
    for (int i = 0; i < (2*numrows-1); i++)
    {
        vector<int> foo;
        myvec.push_back(foo);
    }
    // cout<<numrows<<"\t"<<numcolumns<<"\n";
    for (int i = 0; i < numcolumns; i++) // for first row
    {
        diff = i;
        tempcolumn = i;
        temprow = 0;
        while (temprow <= i && tempcolumn >= 0)
        {
            myvec[i].push_back(A[temprow][tempcolumn]);
            temprow++;
            tempcolumn--;
        }
    }
    for (int i = 1; i < numrows; i++)
    {
        temprow = i;
        tempcolumn = numcolumns-1;
        while (temprow < numrows && tempcolumn > 0)
        {
            myvec[numrows-1+i].push_back(A[temprow][tempcolumn]);
            temprow++;
            tempcolumn--;
        }
    }
    return myvec;
}
