vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    long long int currsum[100000]={0},maxsum[100000]={0},sindex[100000]={0},eindex[100000]={0};
	long long int n = A.size();
	long long int foo,highestsum=INT_MIN;
// 	cin>>n;
// 	F(i,0,n)
// 		cin>>arr[i];
	sindex[0] = 0, eindex[0] = 0;
	currsum[0] = A[0], maxsum[0] = A[0];
    highestsum = A[0];
	for(long long int i =1; i < n; i++)
	{	
		if (A[i] < 0)
		{
			currsum[i] = A[i];
			maxsum[i] = highestsum;
			sindex[i] = i, eindex[i] = i;
		}
		else
		{
			if (A[i-1] < 0)
			{
				currsum[i] = A[i];
				if (currsum[i] > highestsum)
					highestsum = currsum[i];
				maxsum[i] = highestsum;
				sindex[i] = i;
				eindex[i] = i;
			}
			else
			{
				currsum[i] = A[i] + currsum[i-1];
				if (currsum[i] > highestsum)
					highestsum = currsum[i];
				maxsum[i] = highestsum;
				sindex[i] = sindex[i-1];
				eindex[i] = eindex[i-1]+1;
			}
		}
	}
	// cout<<"----"<<highestsum<<"\n";
	// F(i,0,n)
	// 	cout<<currsum[i]<<"\t";
	// cout<<"\n";
	// F(i,0,n)
	// 	cout<<maxsum[i]<<"\t";
	// cout<<"\n";
	// F(i,0,n)
	// 	cout<<sindex[i]<<"\t";
	// cout<<"\n";
	// F(i,0,n)
	// 	cout<<eindex[i]<<"\t";
	// cout<<"\n";
	long long int start = 0;
	long long int end = -1;
	for(long long int i = 0; i < n; i++)
	{
		if (currsum[i] == highestsum)
		{
			if ((eindex[i] - sindex[i]) > (end-start))
			{
				start = sindex[i];
				end = eindex[i];
			}
		}
	}	
// 	cout<<start<<"\t"<<end<<"\n";
	// cout<<"The starting index is "<<start<<" and the ending index is "<<end<<"\n";
	vector<int> myvec;
	for(long long int i = start; i < end+1; i++)
	{
	    if (A[i] < 0)
	        continue;
	    myvec.push_back(A[i]);
	}
    return myvec;
}
