func twoSum(nums []int, target int) []int {
    
    var res []int

    for i, val := range nums{
        for j := i + 1; j < len(nums); j++{
            if val + nums[j] == target {
                res = append(res, i, j)
                return res
            }
        }
    }
    return res
}