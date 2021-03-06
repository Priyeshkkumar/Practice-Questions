int Solution::solve(vector<int> &A) {

    sort( A.begin(), A.end() );

    if( A[A.size()-1] == 0 )
        return 1;

    for( int i = 0; i < A.size(); i++ )
    {
        if( A[i] == A[i+1] )
            continue;

        if( A[i] == A.size() - 1 - i )
            return 1;
    }

    return -1;
}
