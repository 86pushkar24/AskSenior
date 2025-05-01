#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int cost[26];
    cin >> str;
    for (int i = 0; i < 26; i++)
    { // 0 - 25
        cin >> cost[i];
    }
    int size = str.size();
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        // 012345
        // "abcd??"
        counter = 0;
        if (str[i] == '?')
        {
            for (int z = i; z < size; z++)
            { // z=4  z<5
                if (str[z] == '?')
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }
            if (counter == size)
            {
                cout << "0" << endl;
                for (int z = 0; z < size; z++)
                {
                    cout << "a";
                }
                return 0;
            }
            else
            {
                if (i == 0)
                {
                    int ma = INT_MAX, index;
                    // 01234
                    // "bbbec"     101-97 = 4 + 1 = 5
                    for (int z = 0; z < str[counter] - 97 + 1; z++)
                    { // z=0  z<5 0 1 2 3 4
                        int mycost = abs(cost[str[counter] - 97] - cost[z]);
                        if (mycost < ma)
                        {
                            ma = mycost;
                            index = z; // 1
                        }
                    }
                    char c = index + 97; // b
                    for (int z = 0; z < counter; z++)
                    { // 0 1 2  z =0 z<3
                        str[z] = c;
                    }
                    i += counter; // ????xcsdsds??sdad??
                }
                else if (i + counter == size)
                {
                    int ma = INT_MAX, index;
                    // 01234
                    // "bbbec"     101-97 = 4 + 1 = 5
                    // i = 4     counter = 2    =  size
                    for (int z = 0; z < str[i - 1] - 97 + 1; z++)
                    { // z=0  z<5 0 1 2 3 4
                        int mycost = abs(cost[str[i - 1] - 97] - cost[z]);
                        if (mycost < ma)
                        {
                            ma = mycost;
                            index = z; // 1
                        }
                    }
                    char c = index + 97; // b
                    //  01234
                    // "dss??"  i = 3    co = 2
                    for (int z = i; z < size; z++)
                    { // z=3 z< 5    3 4
                        str[z] = c;
                    }
                    // "xcvfdv??"
                    break;
                }
                else
                {
                    int ma = INT_MAX, index;
                    for (int z = 0; z < 26; z++)
                    {
                        // 01234567
                        // abc??des   i = 3 + 2 = 5
                        int mycost = abs(cost[str[i - 1] - 97] - cost[z]) +
                                     abs(cost[z] - cost[str[i + counter] - 97]);
                        if (mycost < ma)
                        {
                            ma = mycost;
                            index = z; // 1
                        }
                    }
                    char c = index + 97; // b
                    for (int z = i; z < i + counter; z++)
                    { // 0 1 2  z =0 z<3
                        str[z] = c;
                    }
                    // "ffdgdd????sdsdfs??"
                    i += counter;
                }
            }
        }
    }

    long long finalCost = 0;
    //  012345
    // "abcdef"
    for (int i = 0; i < size - 1; i++)
    { // i = 4
        finalCost += abs(cost[str[i] - 97] - cost[str[i + 1] - 97]);
    }
    cout << finalCost << endl;
    cout << str << endl;
}