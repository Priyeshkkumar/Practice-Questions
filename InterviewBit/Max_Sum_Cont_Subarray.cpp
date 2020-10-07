int Solution::maxSubArray(const vector<int> &A) {

    int max = INT_MIN , sum = 0;

    for( int i = 0; i < A.size(); i++ )
    {
        sum += A[i];
        if( sum > max )
            max = sum;

        if( sum < 0 )
            sum = 0;
    }

    return max;
}
