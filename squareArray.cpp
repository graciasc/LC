// first working solution c++ 139 ms
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int size = nums.size();
   vector<int> resultArray(size);
  int left = 0;
  int right = size-1;
  
  for(int i =0; i < size; i++) {
    if(abs(nums[left]) < abs(nums[right]) ) {
      std::cout << nums[right] << std::endl;
      resultArray[size-i-1] = pow(abs(nums[right]),2);
      right--;
    }    
    else {
      std::cout << nums[left] << std::endl;
      resultArray[size-i-1] = pow(abs(nums[left]),2);
      left++;
    }
  }
        return resultArray;
    }
};

// 64ms
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int size = nums.size();
   vector<int> resultArray(size);
  int left = 0;
  int right = size-1;
  
   for(int i =size-1; i >= 0; i--) {
       int square;
    if(abs(nums[left]) < abs(nums[right]) ) {
      std::cout << nums[right] << std::endl;
      square = nums[right];
      right--;
    }    
    else {
      std::cout << nums[left] << std::endl;
      square = nums[left];
      left++;
    }
       resultArray[i] = pow(square,2);
  }
        return resultArray;
    }
};
