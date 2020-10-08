#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int words = 0, wlen = 0;
    char word[100];
    string outstr;
    cin >> words;
    // FILE* fin = fopen("input.txt", "r"), * fout = fopen("output.txt", "w+");
    // fscanf(fin, "%d", &words);
    // TODO: add comment here
    // FIXME: change sth in code
    for (int i = 0; i < words; i++)
    {
        cin >> word;
        // fscanf(fin, "%s", &word);
        wlen = strlen(word);
        if (wlen > 10)
        {
/*             cout << word << endl;
            cout << wlen << endl;
 */            outstr = word[0] + to_string(wlen - 2) + word[wlen - 1];
            strcpy(word, outstr.c_str());
            cout << word << endl;
            // fprintf(fout, "%s%s", word, "\n");
        }
        else
        {
            cout << word << endl;
            // fprintf(fout, "%s%s", word, "\n");
        }
    }
    cin.ignore();
}
