int Solution::repeatedNumber(const vector<int> &A) {

    int slow = A[0];
    int fast = A[A[0]];

    // loop to find the cycle
    while( slow != fast )
    {
        slow = A[slow];
        fast = A[A[fast]];
    }

    // to find the entry point of the cycle
    fast = 0;

    while( slow != fast )
    {
        slow = A[slow];
        fast = A[fast];
    }


    if( slow == 0 ) return -1;

    return slow;
}
