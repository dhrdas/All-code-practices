#include<iostream>
#include<vector>
#include<cassert>
 int hIndex(std::vector<int>& citations) {
        // [3,0,6,1,5] h=3
        // [1,3,1] h=1
        // [7,10,2,3,1,9,9] h=4
        // [0,3,5,1,0,5,8] h=3
        // [1,1,1,1,1,1,1,1,1] h=1
        // [8,8,8,8,8,8,8,8] h=8
        //conclusion
        // h index cannot be more than size of array
        // how to find h index?
            //1->
            //2-> find more than two paper
            //3-> find more than 3 paper 
            //4-> find more than 4 paper
            //stop when you couldn't find potential h index
                // when h index is less than nums size or h index==nums.size()
            // h index is the last candidate h index
            //candidate h index,



            int H_index=0; int candidate_H=0;
            while(candidate_H <=citations.size()){
                int counter=candidate_H;
                for(int i=0;i<citations.size();i++){
                    if(citations[i]>=candidate_H and counter!=0){
                       counter--;
                    }
                    if(counter==0){
                        H_index=candidate_H;
                        // candidate_H++;
                        break;
                    }
                }
                candidate_H++;
                
            }
        return H_index;
    }

void test1(){
    std::vector<int> v={3,0,6,1,5};
    int expected_result=3;
    int output=hIndex(v);
    assert(output==expected_result and "test1 failed");
    std::cout<<"Test1 successfull\n";
}
void test2(){
    std::vector<int> v={1,3,1};
    int expected_result=1;
    int output=hIndex(v);
    assert(output==expected_result and "test2 failed");
    std::cout<<"Test2 successfull\n";
}
void test3(){
    std::vector<int> v={1};
    int expected_result=1;
    int output=hIndex(v);
    assert(output==expected_result and "test3 failed");
    std::cout<<"Test3 successfull\n";
}
int main(){
    // test1();
    // test2();
    test3();
}