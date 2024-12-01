#include<iostream>
#include<cassert>
#include<vector>
void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::vector<int> arr(n);
        k %= n;
        for (int i = 0; i < n; i++) {
            int c=(i + k) % n;
            arr[c] = nums[i];
        }
        for (int i = 0; i < n; i++) {
            nums[i] = arr[i];
        }
    }
void test(){
    std::vector<int> nums={1,2,3,4,5,6,7};
    std::vector<int> expected_answer={5,6,7,1,2,3,4};
    rotate(nums,3);
    assert(nums==expected_answer && "test failed");
    std::cout<<"test succesfull\n";
}
void test1(){
     std::vector<int> nums={1,7,2};
    std::vector<int> expected_answer={1,7,2};
    rotate(nums,-1);
    assert(nums==expected_answer && "test1 failed");
    std::cout<<"test1 succesfull\n";
}
int main(){
    test();
    test1();

}