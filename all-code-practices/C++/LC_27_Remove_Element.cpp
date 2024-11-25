#include<iostream>
#include<vector>
#include<cassert>

int removeElement(std::vector<int>& nums,int val){
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
            }
        }
    
        return nums.size();
}

void test(){
    std::vector<int> num={2,1,3,1,3,2};
    int val=3;
    int result=removeElement(num,val);
    int expected_answer=4;
    assert(result==expected_answer and "test failed");
    std::cout<<"test successful \n";
}
void test1(){
    std::vector<int> num={2,2,4,1,3,6,3};
    int val=2;
    int result=removeElement(num,val);
    int expected_answer=5;
    assert(result==expected_answer and "test1 failed");
    std::cout<<"test1 successful \n";
}
void test2(){
    std::vector<int> num={2,2,2,2,2};
    int val=2;
    int result=removeElement(num,val);
    int expected_answer=0;
    assert(result==expected_answer and "test2 failed");
    std::cout<<"test2 successful \n";
}
int main(){
 
  test();
  test1();
  test2();
}