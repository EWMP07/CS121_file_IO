#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ifstream infile("data.csv");   // file pointer

    if (!infile)
    {
        cout << "Unable to open file." << endl;
        return 1;
    }

    string line;

    // Read file one line at a time
    while (getline(infile, line))
    {
        stringstream ss(line);

        string num1Str, num2Str, word;
        int num1, num2;

        // Read each separated by comma
        getline(ss, num1Str, ',');
        getline(ss, num2Str, ',');
        getline(ss, word);

        // Convert strings to integers
        stringstream convert1(num1Str);
        convert1 >> num1;

        stringstream convert2(num2Str);
        convert2 >> num2;

        int total = num1 + num2;

        // Print the word "total" times
        for (int i = 0; i < total; i++)
        {
            cout << word << " ";
        }
       
        cout << endl;
    }

    infile.close();

    return 0;
}