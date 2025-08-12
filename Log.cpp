#include "./Log.hpp"

int	Log::depth = 0;
Log::Log(const std::string &funcName) : functionName(funcName)
{
	++depth;
	for (int i = 1; i < depth; i++)
		std::cout << WALL;
	std::cout << IN << functionName << TRAIL << std::endl;
}

Log::~Log()
{
	for (int i = 1; i < depth; i++)
		std::cout << WALL;
	std::cout << OUT << functionName << TRAIL << std::endl;
	--depth;
}

void Log::log(const std::string &message)
{
	for (int i = 0; i < depth; i++)
		std::cout << WALL;
	std::cout << message << std::endl;
}