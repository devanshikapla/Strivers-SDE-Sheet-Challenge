int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    //set
    unordered_set < int > st;
    for(auto it : arr){
        st.insert(it);
    }
    int longest = 0;
    for(auto it : st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x + 1) != st.end()){
                x++;
                cnt++;
            }
            longest = max(longest , cnt);
        }
    }
    return longest;
}
