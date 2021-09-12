long long greatestValueDays(vector<int> ratings) {
    int mn = INT_MAX;
    long long sum =0;
    long long mx = INT_MIN;
    int l=0, r=0;
    for(int r=0;r<ratings.size();r++){
        sum = ratings[r];
        long long res=ratings[r]*ratings[r];
        mx = max(mx,res);
        mn = ratings[r];
        for(int i=r+1;i<ratings.size();i++){
            sum+=ratings[i];
            mn = min(mn, ratings[i]);
            long long curr = sum *mn;
            
            mx = max(mx,curr);
            
        }
    }
    return mx;

}
 // mn = min(mn, ratings[i]);
        // sum += ratings[i];
        // int curr = sum *mn;
        // curr = max(curr,ratings[i]*ratings[i]);
        // if(curr>mx){
        //     mx=curr;
        // }
        // else{
        //     sum =0;
        //     mn =INT_MAX;
        // }
        // sum += ratings[r];
        
        // mn = min(mn, ratings[r]);
        // int curr = sum *mn;
        // if(curr-[])
        
        