#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

bool ReplaceCmp(const string s1, const string s2)
{
  size_t count = 0; 
  for(size_t i = 0; i < s1.size(); ++i)
  {
    if(s1[i] != s2[i])
    {
      ++count;
    }

    if(count == 2)
    {
      return false;
    }
  }
  return true;
}

bool DeleteCmp(const string& s1, const string& s2)
{
  int count = 0;
  for(size_t i = 0, j = 0; i < s1.size(); ++i, ++j)
  {
    if(s1[i] != s2[j])
    {
      ++count;
      --i;
    }

    if(count == 2)
    {
      return false;
    }
  }
  return true;
}

bool IsSimilar(const string& s1, const string& s2)
{
  if(s1.size() == s2.size())
    return ReplaceCmp(s1, s2);
  else 
    return DeleteCmp(s1, s2);
}

int main()
{
  // 词典以及待查找词数组的初始化
  int n = 0;
  int m = 0;
  cin>>n>>m;
  vector<string> dirc;
  vector<string> need;
  dirc.reserve(n);
  need.reserve(m);
  string tmp;
  for(int i = 0; i < n; ++i)
  {
    cin>>tmp;
    dirc.push_back(tmp);
  }
  for(int j = 0; j < m; ++j)
  {
    cin>>tmp;
    need.push_back(tmp);
  }
  // 对于每一个待查找词，遍历词典中的每一个词，看是否相似
  for(const auto& needWord : need)
  {
    bool flag = false;
    for(const auto& dircWord : dirc)
    {
      int distance = abs((int)needWord.size() - (int)dircWord.size());
      if(distance <= 1)// 长度差小于等于1可能是相似或相等
      {
        if(needWord.size() < dircWord.size()?IsSimilar(needWord, dircWord):IsSimilar(dircWord, needWord))
          flag = true;
        else 
          continue;
      }
    }
    if(flag)
      cout<<1<<endl;
    else 
      cout<<0<<endl;
  }
  return 0;
}
