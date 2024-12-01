#include<iostream>
#include<vector>
#include<cassert>
int maxProfit(std::vector<int> &nums){
    int max_current=nums[0];
    int max_profit=0;
        for(int i =1;i<nums.size();i++){
            if(nums[i]<max_current){
                max_current=nums[i];
            }else if(nums[i]-max_current>max_profit){
                max_profit=nums[i]-max_current;
            }
            
        }
    return max_profit;
}
void test(){
    std::vector<int> a={7,2,4,10,2,6,9,1};
    int expected_profit=8;
    int profit=maxProfit(a);
    assert(expected_profit==profit && "expected profit is 8");
    std::cout<<"test passed \n";
}
void test1(){
    std::vector<int> a={10,2,6,9,1};
    int expected_profit=7;
    int profit=maxProfit(a);
    assert(expected_profit==profit && "expected profit is 9");
    std::cout<<"test1 passed \n";
}
void test2(){
    std::vector<int> a={1,2,6,9,1};
    int expected_profit=8;
    int profit=maxProfit(a);
    assert(expected_profit==profit && "expected profit is 7");
    std::cout<<"test2 passed \n";
}
void test3(){
    std::vector<int> a={10,9,6,3,1};
    int expected_profit=0;
    int profit=maxProfit(a);
    assert(expected_profit==profit && "expected profit is 0");
    std::cout<<"test3 passed \n";
}
int main(){
    test();
    test1();
    test2();
    test3();
}