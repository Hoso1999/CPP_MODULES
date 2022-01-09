#include <iostream>
#include <fstream>
#include <streambuf>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Invalid arguments count" << std::endl;
        return 1;
    }
    std::fstream file(argv[1]);
    if (!file.is_open())
    {
        std::cerr << "Cannot open file < " << argv[1] << " >" <<  std::endl;
        return 1;
    }
    else
    {
        std::string str((std::istreambuf_iterator<char>(file)),
                 std::istreambuf_iterator<char>());
        std::string oldstr(argv[2]);
        std::string newstr(argv[3]);
        std::string newfilename(argv[1]);
        newfilename += ".replace";
        std::fstream newfile(newfilename, std::fstream::out);
        std::size_t it;
        while ((it = str.find(oldstr)) != std::string::npos)
            str.replace(it, oldstr.size(), newstr);
        newfile << str << std::endl;
        newfile.close();
    }
    file.close();

    return 0;
}