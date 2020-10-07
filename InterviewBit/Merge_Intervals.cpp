bool sortInterval( Interval I1, Interval I2 )
{
    return ( I1.start < I2.start );
}
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {

    intervals.push_back( newInterval );
    sort( intervals.begin(), interval.end(), sortInterval );

    vector<Interval> ans;

    ans.push_back( A[0] );

    for( int i = 1; i < intervals.size(); i++ )
    {
        if( A[i].start < ans[ans.size() - 1].end )
            ans[ans.size()-1].end = max( A[i].end, ans[ans.size() -1 ].end );
        else
            ans.push_back( A[i] );
    }

    return ans;
}
