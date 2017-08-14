int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int num = A.size();
    int j,flag = 0,numgreater;
    for (int i = 0; i < num; i++)
    {
        int val = A[i];
        j = i;
        while (A[i] == A[j] && j < num)
            ++j;
        numgreater = num-j;
        if (val == numgreater)
        { 
//            cout<<numgreater<<"\n";
  //          cout<<A[i]<<"\n";
            flag = 1;
        }
    }
    if (flag == 1)
        return 1;
    else
        return -1;
}
