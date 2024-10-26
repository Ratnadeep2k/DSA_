class Solution
{
public:
    int possibleStringCount(string word)
    {
        int totalCount = 1;
        int n = word.size();
        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && word[j] == word[i])
            {
                j++;
            }
            int length = j - i;
            if (length > 1)
            {
                totalCount += length - 1;
            }
            i = j;
        }
        return totalCount;
    }
};