#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::string s = "qoeudbduwiwgsuxjshdowpqosksbdjcjsishwgqgdieidvdiwjdvdiqowowoeur";
  std::vector<int> count(26, 0); // ��ʼ��һ����СΪ26�����飬���ڼ�¼ÿ����ĸ�ĳ��ִ���

  // �����ַ�������¼ÿ����ĸ�ĳ��ִ���
  for (char c : s)
  {
    if (c >= 'a' && c <= 'z')
    {
      count[c - 'a']++;
    }
  }

  int maxCount = 0;
  char maxChar = 'a';

  // �����������飬�ҵ����ִ���������ĸ
  for (int i = 0; i < 26; i++)
  {
    if (count[i] > maxCount)
    {
      maxCount = count[i];
      maxChar = 'a' + i;
    }
  }

  std::cout << "���ִ���������ĸ��: " << maxChar << ", ���ִ���: " << maxCount << std::endl;

  return 0;
}
