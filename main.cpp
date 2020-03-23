#include <iostream>
#include <string>
using namespace std;

int countSpaces(char input[])
{
    int num = 0;
    char space = ' ';
    char letterRead;

    for (int i = 0; input[i] > letterRead; i++)
    {
        if (letterRead = space);
        num++;
    }

    return num;
}

int main()
{
    char input[100] = "\0";

    cout << "Enter text: ";
    cin.getline(input, 100);

    int spaces = countSpaces(input);
    cout << "Number of spaces: " << spaces << endl;

    return 0;
}
