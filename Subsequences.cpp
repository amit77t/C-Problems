#include<iostream>
#include<vector>
#include<string>

using namespace std;
void solve(string nums,  string output, int index, vector<string>& ans)
{
    //base case
    if(index >=nums.size())
    {   if(output.length()>0)
        ans.push_back(output);
        return ;
    }
    solve(nums, output, index+1,ans);

    char element =nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);

}

vector<string> sub(string nums)
{
    vector<string> ans;
    
    string output=" ";
    int index=0;
    solve(nums,output,index,ans);
    return ans;
}
int main()
{
   
    vector<string> res=sub("abc");
    
    for(int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] <<" ";
        cout << endl;
    }
 
    return 0;

}