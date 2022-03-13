#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

// Here we look for all the occurences of S1 in a line because we can have multiple occurences

void    replace_line(std::string *line, std::string s1, std::string s2)
{
    size_t i = 0;
    size_t pos;

    while((pos = line->find(s1, i)) != std::string::npos) //means until the end of the string 
    {
        line->erase(pos, s1.length()); // here we delete the length of s1
        line->insert(pos, s2); // here we insert at the position the new string
        i = pos + s2.length(); // here we add s2 lenght to find all occurences of s1
    }
}

void    searchfile(std::ifstream &file, std::ofstream &newFile,
                    std::string s1, std::string s2)
{
    std::string     line;
    if (s1.empty())
        std::cerr << "s1 empty, bisous" << std::endl;
    while(!file.eof())
    {
        std::getline(file, line);
        if (line.empty())
            break;
        if (line.find(s1) != std::string::npos) // means until the end of the string if we find s1 we replace by s2
            replace_line(&line, s1, s2);
        newFile << line << std::endl;
    }
}

int main(int argc, char **argv)
{
    std::ifstream   file;
    std::ofstream newFile;
    std::string     replace;
    if (argc != 4)
    {
        std::cerr << "You have to put a file, str1 and str2, bisous" << std::endl;
        return (1);
    }
    file.open(argv[1]);
    if (file.fail())
    {
        std::cerr << "Unable to open " << argv[1] << std::endl;
        return (1);
    }
    replace = (std::string)argv[1] + ".replace"; // put the right name to the outfile
    newFile.open(replace.c_str()); // we have to do this "Avant le C++11 les constructeurs de ofstream et de ifstream ne prenaientt pas de string en arguments, "
    if (newFile.fail())
    {
        std::cerr << "Unable to open " << replace << std::endl;
        return (1);
    }
    searchfile(file, newFile, argv[2], argv[3]);
    file.close();
    newFile.close();
    return (0);
}