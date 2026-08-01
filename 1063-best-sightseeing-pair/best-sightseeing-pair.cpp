class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& a) {
        //rearranging a[i]+a[j]+i-j -> (a[i]+i)+(a[j]-j) i need maximize these to find ans 
        //intially max will be the first obe 
        // we only store the max a[i]+i value and add the max value to a[j]-j 
        int aiplusi=a[0]+0;
        int ans=0;
        for(int j=1;j<a.size();j++){
            ans=max(ans,aiplusi+a[j]-j);
            aiplusi=max(aiplusi,a[j]+j);
        }
        return ans;
        
    }
};