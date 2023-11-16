#include <iostream>
#include <fstream>

int error(std::string message)
{
	std::cerr << message << std::endl;
	return (1);
}

int main(int ac, char **av)
{
	std::ofstream	outfile;
	std::ifstream	infile;
	std::string		str;
	int				pos;
	char			c;
	
	if (ac != 4)
		return (error("./SedPerdant fileName strToReplace strReplace"));
	infile.open(av[1]);
	if (infile.fail())
		return(error("Error opening file."));
	while(!infile.eof() && infile >> std::noskipws >> c)
		str += c;
	infile.close();
	outfile.open((std::string(av[1]) + ".replace").c_str());
	if (outfile.fail())
		return (error("Creating outfile failed."));
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(av[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0); 
}
