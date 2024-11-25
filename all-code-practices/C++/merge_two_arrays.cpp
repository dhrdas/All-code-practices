#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
{

    int midx = m - 1;
    int nidx = n - 1;
    int r_pos = m + n - 1;
    while (nidx >= 0)
    {
        if (midx >= 0 and nums1[midx] > nums2[nidx])
        {
            nums1[r_pos] = nums1[midx];
            midx -= 1;
        }
        else
        {
            nums1[r_pos] = nums2[nidx];
            nidx -= 1;
        }
        r_pos -= 1;
    }
    return nums1;
}


void test1()
{
    std::vector<int> nums1 = {1, 2, 0, 0};
    auto m = int(2);
    std::vector<int> nums2 = {3, 4};
    auto n = int(2);
    const std::vector<int> expected = {1, 2, 3,4};
    auto result = merge(nums1, m, nums2, n);
    assert(result == expected and "test1 failed");
    std::cout<<"Test1 success \n";
}
void test2()
{
    std::vector<int> nums1 = {4,5,6,0,0,0};
    auto m = int(3);
    std::vector<int> nums2 = {1,2,3};
    auto n = int(3);
    const std::vector<int> expected = {1, 2, 3,4,5,6};
    auto result = merge(nums1, m, nums2, n);
    assert(result == expected and "test2 failed");
    std::cout<<"Test2 success \n";
}
int main(){
    test1();
    test2();
}