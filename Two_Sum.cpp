/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


*/

vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int, int> hash;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++){
        int numberToFind = target - nums[i];

        // if numberToFind is found in map, return them
        if (hash.find(numberToFind) != hash.end())
        {
            //+1 because indices are NOT zero based
            result.push_back(hash[numberToFind] + 1);
            result.push_back(i);
            return result;
        }

        // number was not found. Put it in the map.
        hash[nums[i]] = i - 1;
    }
    return result;
}