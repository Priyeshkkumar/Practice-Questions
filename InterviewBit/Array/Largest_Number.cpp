bool mysort( string a, string b )
{
    string s1 = a + b;
    string s2 = b + a;

    return s1 > s2;
}

string Solution::largestNumber(const vector<int> &A) {

    vector<string> temp;

    for( int i = 0; i < A.size(); i++ )
        temp.push_back( to_string(A[i]) );

    sort( temp.begin(), temp.end(), mysort );

    if( temp[0] == "0" )
        return "0";

    string ans;
    for( int i = 0; i < A.size(); i++ )
        ans += temp[i];

    return ans;
}
