string Solution::largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string> myvec;
    for (int i = 0; i < A.size(); i++)
    {
        string s = to_string(A[i]);
        myvec.push_back(s);
    }
    sort(myvec.begin(), myvec.end(), [](const string &p1, const string &p2) {
    string s1(p1 + p2);
    string s2(p2 + p1);
    return s1.compare(s2) >= 0;
    });
    string s = "";
    for (auto const& e : myvec)
    {
        s += e;
    }
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0')
            flag = 1;
    }
    if (flag == 0)
        return "0";
    else
        return s;
}
