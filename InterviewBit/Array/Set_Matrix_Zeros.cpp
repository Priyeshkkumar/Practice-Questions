void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int m = A.size(), n = A[0].size();
    int row1 = 0, col1 = 0;

    for( int i = 0; i < n; i++ )
    {
        if( A[0][i] == 0 )
        {
            row1 = 1;
            break;
        }
    }
    for( int i = 0; i < m; i++ )
    {
        if( A[i][0] == 0 )
        {
            col1 = 1;
            break;
        }
    }

    for( int i = 1; i < m; i++ )
    {
        for( int j = 1; j < n; j++ )
        {
            if( A[i][j] == 0 )
            {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    for( int i = 1; i < m; i++ )
    {
        for( int j = 1; j < n; j++ )
        {
            if( A[i][0] == 0|| A[0][j] == 0 )
                A[i][j] = 0;
        }
    }
    if( row1 == 1 )
    {
        for( int i = 0; i < n; i++ )
            A[0][i]=0;
    }
    if( col1 == 1 )
    {
        for( int i = 0; i < m; i++ )
            A[i][0] = 0;
    }
}
