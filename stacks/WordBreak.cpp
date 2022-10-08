#include<bits/stdc++.h>
using namespace std;

void solve(string &s,vector<string> &wordDict,string op,int index, vector<string> &ans)
    {
        if(index == s.length())
        {
            op.pop_back();    //We pop back here to remove space from the last
            ans.push_back(op);
            return;
        }
        string temp = "";
        for(int i = index;i<s.length();i++)
        {
            temp += s[i];
            if(find(wordDict.begin(),wordDict.end(),temp) != wordDict.end())
            {
                 solve(s,wordDict,op+temp+" ",i+1,ans);    //If word find then check for next word
            } 
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
       vector<string> ans;
       string op = "";
       solve(s,wordDict,op,0,ans);
       return ans;
    }

  int main()
  {
    return 0;
  }
