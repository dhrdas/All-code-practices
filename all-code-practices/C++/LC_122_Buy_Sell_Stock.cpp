#include<iostream>
#include<vector>
#include<cassert>
 int maxProfit(std::vector<int>& prices) {
        int profit=0;
        int current_stock=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>current_stock ){
                profit+=prices[i]-current_stock;
                current_stock=prices[i];
            }else if(current_stock>prices[i]){
                current_stock=prices[i];
            }
        }
        return profit;
    }
void test(){
    std::vector<int> a={1,2,3,4,5};
    int expected_profit=4;
    int profit=maxProfit(a);
    assert(expected_profit==profit && "test failed expected profit is 8");
    std::cout<<"test passed \n";
}
void test1(){
    std::vector<int> a={7,1,5,3,6,4};
    int expected_profit=7;
    int profit=maxProfit(a);
    assert(expected_profit==profit && "test1 failed expected profit is 9");
    std::cout<<"test1 passed \n";
}
void test2(){
    std::vector<int> a={7,6,4,3,1};
    int expected_profit=0;
    int profit=maxProfit(a);
    assert(expected_profit==profit && "test2 failed expected profit is 7");
    std::cout<<"test2 passed \n";
}
void test3(){
    std::vector<int> a={10,9,6,3,1};
    int expected_profit=0;
    int profit=maxProfit(a);
    assert(expected_profit==profit && "test3 failed expected profit is 0");
    std::cout<<"test3 passed \n";
}
int main(){
    test();
    test1();
    test2();
    test3();
}