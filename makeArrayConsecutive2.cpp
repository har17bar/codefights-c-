/*

Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, each statue having an non-negative integer size. Since he likes to make things perfect, he wants to arrange them from smallest to largest so that each statue will be bigger than the previous one exactly by 1. He may need some additional statues to be able to accomplish that. Help him figure out the minimum number of additional statues needed.

Example

For statues = [6, 2, 3, 8], the output should be
makeArrayConsecutive2(statues) = 3.

Ratiorg needs statues of sizes 4, 5 and 7.

*/
#include <stdio.h>

#include <iostream>
 
#include <vector>


using namespace std;


int makeArrayConsecutive2(std::vector<int> statues) {
   int makeArrayConsecutive2(std::vector<int> statues) {
    int min=statues[0];
    int max=statues[0];
    for(int i = 1; i< statues.size(); ++i){
        if(min>statues[i]){
            min=statues[i];
        }
        if(max<statues[i]){
            max=statues[i];
        }
    }
    int comp=max-min+1;
    return statues.size()==1 ? 0 :comp-statues.size();
}

int main()
{
    vector<int> a= {6, 2, 3, 8};
    makeArrayConsecutive2(a);
    return 0;
}
