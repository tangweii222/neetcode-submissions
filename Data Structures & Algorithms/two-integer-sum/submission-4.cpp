// 放在類別外面，這段程式碼會在 LeetCode 評測一開始就執行，關閉 C++ 的輸入輸出流同步
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> pairs;
        
        // 優化 1：預先配置雜湊表空間，避免動態擴容（Rehash）的時間消耗
        pairs.reserve(nums.size()); 
        
        // 修正：必須將 i 初始化為 0，否則會發生不可預期的隨機亂數錯誤
        for (int i = 0; i < nums.size(); i++) {
            int current_num = nums[i];
            
            // 優化 2：改用 find() 進行單次查找
            // 這樣做可以「同時」檢查是否存在，並在存在時直接拿到對應的索引，避免重複雜湊計算
            auto it = pairs.find(current_num);
            
            if (it != pairs.end()) {
                // 找到了！直接回傳 map 存的索引（it->second）和當前索引（i）
                return {it->second, i};
            }
            
            // 沒找到，把「目標差值」當作 Key，當前索引當作 Value 存起來
            pairs[target - current_num] = i;
        }
        
        return {}; // 防禦性回傳，確保所有編譯器都能順利通過
    }
};
