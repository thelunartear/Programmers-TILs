#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    vector<int> temp;
    for(int i=0;i<num_list.size();i++)
    {
        while(num_list[i]!=1)
        {
            if(num_list[i]%2==0)
            {
                num_list[i]/=2;
                answer++;
            }
            else
            {
                num_list[i]-=1;
                num_list[i]/=2;
                answer++;
            }
        }
    }
    return answer;
}