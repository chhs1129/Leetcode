class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1_last = m - 1;
        int nums2_last = n - 1;
        int last = m + n - 1;
    
        while( nums1_last >= 0 && nums2_last >= 0 )
        {
            if( nums1[ nums1_last ] > nums2[ nums2_last ] )
                nums1[ last-- ] = nums1[ nums1_last-- ];
            else
                nums1[ last-- ] = nums2[ nums2_last-- ];
        }
    
        // while( nums2_last >= 0 )
        //     nums1[ last-- ] = nums2[ nums2_last-- ];
    }
};
