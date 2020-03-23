//Determine the number of words in a sentance.
#include<iostream>
#include<string>
using namespace std;

int number_of_words(string sentance)
{
    int nr = 0;
    for(auto s : sentance)
        if (s == ' ') nr++;
    return nr+1;
}

int main()
{
    string sentance;
    getline (cin, sentance);
    cout<< " number of wards: "<<number_of_words(sentance)<<endl;
    return 0;
}