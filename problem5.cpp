/*Split the content of a paragraph read from a text file into sentances and write them on a new file (one sentance per line).

#include <iostream>
#include<string>
#include<fstream>

using namespace std;

string read(fstream &f)
{
    f.open("date.txt",ios::in);
//    deschidem fisierul
    string line;
    while( !f.eof())
    {
        string new_line;
        getline(f,new_line);
        line += new_line;
    }
    f.close();
    return line;
}
// citim tot continutul din fisier
void write(string line)
{
     fstream g("iesire.txt",ios::out);
     size_t found;
      do {
          found = line.find('.');
          g << line.substr(0, found) << endl;
          line = line.substr(found + 1, line.length() - 1);
          } while (found != string::npos);
      g.close();
}
// cautam punctul de la fiecare propozitie.
// dupa fiecare propozitie dam endl.

int main()
{
    fstream f;
    write(read(f));
    return 0;
}
*/
// Split the content of a paragraph read from a text file into sentances and write them on a new file (one sentance per line).

#include <iostream>
#include<string>
#include<fstream>

using namespace std;

string read(fstream &f)
{
    f.open("C:\\Users\\User\\CLionProjects\\online\\date.txt",ios::in);
//    deschidem fisierul
    string line;
    while(!f.eof())
    {
        string new_line;
        getline(f,new_line);
        line += new_line;
    }
    f.close();
    return line;
}
// citim tot continutul din fisier
void write(string line)
{
    fstream g("C:\\Users\\User\\CLionProjects\\online\\iesire.txt",ios::out);
    size_t found;
    do {
        found = line.find('.');
        g << line.substr(0, found) << endl;
        if (line[found + 1] == ' ')
            found++;
        line = line.substr(found + 1, line.length() - 1);
    } while (found != string::npos);
    g.close();
}
// cautam punctul de la fiecare propozitie.
// dupa fiecare propozitie dam endl.

int main()
{
    fstream f;
    write(read(f));
    return 0;
}