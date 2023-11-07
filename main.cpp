#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int solution(int a, int b)
    {
        string a_in = to_string(a);
        string b_in = to_string(b);

        string s_result;

        int max_length = a_in.length() > b_in.length() ? a_in.length() : b_in.length();

        if (a_in.length() + b_in.length() > 9)
        {
            return -1;
        }

        for (int loc = 0; loc < max_length; loc++)
        {
            if (loc < a_in.length())
            {
                s_result += a_in[loc];
            }

            if (loc < b_in.length())
            {
                s_result += b_in[loc];
            }
        }

        int32_t i_result = stoi(s_result);

        if (i_result > 100000000)
        {
            return -1;
        }

        return i_result;
    }
};

int a;

int main()
{
    std::cout << a << std::endl;
    return 0;
}