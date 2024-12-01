#include<iostream>
#include<vector>
#include<algorithm>
#include<cassert>
int majorityElement(std::vector<int>& nums){
        int s=nums.size()/2;
        sort(nums.begin(),nums.end());
        return nums[s];
}
void test0(){
    std::vector<int> nums={3,2,3};
    int expected_answer=3;
    int result=majorityElement(nums);
    assert(result==expected_answer and "test1 failed");
    std::cout<<"test0 passed\n";
    
}
void test1(){
    std::vector<int> nums={3,1,2,2,2,3};
    int expected_answer=2;
    int result=majorityElement(nums);
    assert(result==expected_answer and "test2 failed");
    std::cout<<"test1 passed\n";
}
int main(){
    test1();
    test0();
}
