class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double solution = 0.0;
        bool pairty = false;

        vector<int> nums3;

        for(auto i: nums1){
            nums3.push_back(i);
        }
        for(auto i: nums2){
            nums3.push_back(i);
        }
        std::sort(nums3.begin(), nums3.end());

        pairty = ((nums3.size() % 2 ) == 0) ? true : false;

        // even = true, odd = false

        cout << pairty;
        return pairty ? (nums3[(nums3.size()-1)/2] + nums3[nums3.size()/2])/2.0: nums3[nums3.size()/2] ;
    }
};