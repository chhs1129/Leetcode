class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int head=0;
        int end=nums.size()-1;
        unordered_map<int,int> hash_map;
        if(nums.size()==1)
            return nums[0];
        while(head<end){
            if (hash_map.count(nums[head]))
                hash_map[nums[head]]+=1;
            else
                hash_map[nums[head]]=1;
            if (hash_map.count(nums[end]))
                hash_map[nums[end]]+=1;
            else
                hash_map[nums[end]]=1;
            head++;
            end--;
        }
        if(head==end)
            if (hash_map.count(nums[head]))
                hash_map[nums[head]]+=1;
            else
                hash_map[nums[head]]=1;
        int max=0;
        int ret=0;
        for(auto i:hash_map){
            if(i.second>max){
                max=i.second;
                ret=i.first;
            }
                
        }
        return ret;
    }
};
