//Determine the most popular word in a paragraph read from a text file.

#include <iostream>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;

string most_popular_word(string sentance)
{
    unordered_map <string,int> freq;
    size_t found;
    do
    {
        found = sentance.find(' ');
        if(found != string::npos)
//        conditie ca sa vedem ca este spatiu
        {
//        found detine indexul primului spatiu
//        gaseste primul saptiu
//        returneaza potizia la care se afla el
        freq[sentance.substr(0,found)]++;
//        vede de cate ori apare fiecare cuvant
        sentance = sentance.substr(found+1,sentance.length()-1);
        }
    } while(found != string::npos);
    freq[sentance]++;
    int max = 0;
    string rezult;
    for(auto i : freq)
    {
      if(max < i.second)
      {
        rezult = i.first;
        max = i.second;
      }
    }
//    rezult : este cuvantulc el mai "popular"
//    max :  de cate ori apare cuvantul cel mai popular
    return rezult;
}
int main()
{
    string sentace;
    getline(cin,sentace);
//    nu stiu de ce nu ma lasa sa sterg & :))
    cout<<" cel mai popular cuvant este: "<<most_popular_word(sentace)<<endl;
    return 0;
}


