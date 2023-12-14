vector<int> reverseArray(int n, vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        swap(nums[start++], nums[end--]);
    }
    
    return nums;
}
