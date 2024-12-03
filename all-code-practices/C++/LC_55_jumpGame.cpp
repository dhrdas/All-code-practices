#include<iostream>
#include<vector>
#include<cassert>

 bool canJump(std::vector<int>& nums) {
    int goal=nums.size()-1;
    for(int i=nums.size()-2;i>=0;i--){
        if(i+nums[i]>=goal){
            goal=i;
        }
    }
    return goal==0;
    }
void test(){
    std::vector<int>v={2,3,1,1,4};
    bool expected_result=true;
    bool output=canJump(v);
    assert(output==expected_result && "test failed");
    std::cout<<"Test0 successfull \n";

}
void test1(){
    std::vector<int>v={3,2,1,0,4};
    bool expected_result=false;
    bool output=canJump(v);
    assert(output==expected_result && "test1 failed");
    std::cout<<"Test1 successfull \n";
}
void test2(){
    std::vector<int>v={1};
    bool expected_result=true;
    bool output=canJump(v);
    assert(output==expected_result && "test1 failed");
    std::cout<<"Test2 successfull \n";
}
void test3(){
    std::vector<int>v={2,0};
    bool expected_result=true;
    bool output=canJump(v);
    assert(output==expected_result && "test1 failed");
    std::cout<<"Test2 successfull \n";
}

int main(){
    test();
    test1();
    test3();
    
}