#ifndef LOG_HPP
# define LOG_HPP

# include <iostream>
# include <string>
# include <sstream>

# define RESET		"\033[0m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define MAGENTA	"\033[0;35m"
# define CYAN		"\033[0;36m"

# define INFO		"\033[0;34m[INFO]\033[0m  "
# define DEBUG		"\033[0;33m[DEBUG]\033[0m "
# define ERROR		"\033[0;31m[ERROR]\033[0m "

# define IN			"┌─ IN  "
# define WALL		"│  "
# define OUT		"└─ OUT "
# define TRAIL		" ───────┄┄╌┈"

# define DEPTH static short 0;

class Log
{
	private:
		static int	depth;
		std::string	functionName;

	public:
		Log(const std::string &funcName);
		~Log();
		void log(const std::string &message);
};

// Macro for automatic logging
# define AUTO_LOG		Log logInstance(__FUNCTION__);

#define LOG(message) { \
    std::ostringstream oss; \
    oss << message; \
    logInstance.log(oss.str()); \
};

#endif