#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::string s = "qoeudbduwiwgsuxjshdowpqosksbdjcjsishwgqgdieidvdiwjdvdiqowowoeur";
  std::vector<int> count(26, 0); // 初始化一个大小为26的数组，用于记录每个字母的出现次数

  // 遍历字符串，记录每个字母的出现次数
  for (char c : s)
  {
    if (c >= 'a' && c <= 'z')
    {
      count[c - 'a']++;
    }
  }

  int maxCount = 0;
  char maxChar = 'a';

  // 遍历计数数组，找到出现次数最多的字母
  for (int i = 0; i < 26; i++)
  {
    if (count[i] > maxCount)
    {
      maxCount = count[i];
      maxChar = 'a' + i;
    }
  }

  std::cout << "出现次数最多的字母是: " << maxChar << ", 出现次数: " << maxCount << std::endl;

  return 0;
}
