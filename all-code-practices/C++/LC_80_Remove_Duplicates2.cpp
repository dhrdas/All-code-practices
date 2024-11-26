#include<iostream>
#include<vector>
#include<cassert>
int removeDuplicates(std::vector<int>& nums) {
        //count each unique value till 2, m-> 0 to 2;
        int counter=0;
        int a=1;
        //remove duplicates beyond after counter reach till 2
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]==nums[i-1]){
                counter++;
                if(counter>=2){
                    nums.erase(nums.end()-a);
                }
                else{
                    a++;
                }
            }
            else{
                counter=0;
                a++;
            }
        }
        return nums.size();
    }
void test1(){
    std::vector<int> nums={0,0,1,1,1,1,2,3,3};
    std::vector<int> expected_answer={0,0,1,1,2,3,3};
    int expected_result=7;
    int result=removeDuplicates(nums);
    assert( result==expected_result and "test1 k value failed");
    for(int i=0;i<expected_result;i++){
        assert(nums[i]==expected_answer[i] and "failed test1 array order");
    }
   std::cout<<"Test1 successfull \n";

}
void test2(){
    std::vector<int> nums={1,1,1,2,2,3};
    std::vector<int> expected_answer={1,1,2,2,3};
    int expected_result=5;
    int result=removeDuplicates(nums);
    assert( result==expected_result and "test2 k value failed");
    for(int i=0;i<expected_result;i++){
        assert(nums[i]==expected_answer[i] and "failed test2 array order");
    }
   std::cout<<"Test2 successfull \n";

}
int main(){
   test1();
   test2();
    //test3()
}