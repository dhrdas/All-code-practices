#include<iostream>
#include<vector>
#include<cassert>
#include<algorithm>

int maxJumpsteps(std::vector<int>& nums) {
    int ans=0;
    int end = 0;
    int farthest = 0;

   
    for (int i = 0; i < nums.size() - 1; ++i) {
      farthest = std::max(farthest, i + nums[i]);
      if (farthest >= nums.size() - 1) {
        ++ans;
        break;
      }
      if (i == end) {    // Visited all the items on the current level
        ++ans;           // Increment the level
        end = farthest;  // Make the queue size for the next level
      }
    }

    return ans;
    }
  void test1(){
    std::vector<int> v={2,3,1,1,4};
    int expected_result=2;
    int output=maxJumpsteps(v);
    assert(output==expected_result && "test1 failed");
    std::cout<<"test1 successfull\n";
  }
  void test2(){
    std::vector<int> v={2,3,0,1,4};
    int expected_result=2;
    int output=maxJumpsteps(v);
    assert(output==expected_result && "test2 failed");
    std::cout<<"test2 successfull\n";
  }
  int main(){
    test1();
    test2();
  }
