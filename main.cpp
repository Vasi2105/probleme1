#include <iostream>
#include <string>
using namespace std;
char input[100] = "";

void read_message()
{
    cout << "Enter text: ";
    cin.getline(input, 100);
}

int count_spaces(char input[])
{
    int num = 0;
    char letterRead = input[0];
    int i = 1;
    while( letterRead != 0)
    {
        if (letterRead == 32)
            num += 1;
        letterRead = input[i];
        i++;
    }
    cout<<i-1<<" caractere procesate."<<endl;
    return num;
}

void write_results()
{

    int spaces = count_spaces(input);
    cout << "Number of spaces: " << spaces << endl;
}

int main()
{
    read_message();
    write_results();
    return 0;
}
