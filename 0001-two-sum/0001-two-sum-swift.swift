class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        
        var mp = [Int: Int]()

        for(i, v) in nums.enumerated(){
            if var addent = mp[v]{
                return [addent, i]
            }
            else{
                mp[target - v] = i
            }
        }
        return []
    }
}