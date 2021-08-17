#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


void fizzBuzz(int n) 
{   int i;
        
    for(i = 1; i <= n; i++)
    {   
        if((i%3 != 0) && (i%5 != 0))
        {   printf("%d \n", i);
            continue;
        }
        else if ((i%3 == 0) && (i%5 != 0)) 
        {   printf("Fizz\n");
            continue;
        }
        else if ((i%3 != 0) && (i%5 == 0)) 
        {   printf("Buzz\n");
            continue;
        }
        else if ((i%3 == 0) && (i%5 == 0)) 
        {   printf("FizzBuzz\n");
            //break;
        }
    }

}
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    fizzBuzz(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
