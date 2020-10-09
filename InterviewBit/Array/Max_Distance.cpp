bool mysort( pair<int, int> i1, pair<int, int> i2 )
{
    return i1.first < i2.first;
}


int Solution::maximumGap(const vector<int> &A) {

    vector<pair<int, int>> arr;

    for( int i = 0; i < A.size(); i++ )
        arr.push_back( make_pair( A[i], i ) );

    sort( arr.begin(), arr.end(), mysort );

    int ans = 0;
    int rmax = arr[arr.size()-1].second;
    for( int i = arr.size() - 2; i >= 0; i-- )
    {
        ans = max( ans, rmax - arr[i].second );
        rmax = max( rmax, arr[i].second );
    }
    return ans;;
}
