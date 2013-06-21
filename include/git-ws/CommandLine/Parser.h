#ifndef GITWS_COMMANDLINE_PARSER
#define GITWS_COMMANDLINE_PARSER

#include <string>
#include <stdexcept>

namespace ssvcl
{
	template<typename T> struct Parser;
	template<> struct Parser<int>
	{
		inline static int parse(const std::string& mString)
		{
			try { return stoi(mString); }
			catch(...) { throw std::runtime_error("Cannot convert '" + mString + "' to int"); }
		}
	};
	template<> struct Parser<std::string>
	{
		inline static std::string parse(const std::string& mString) { return mString; }
	};
}

#endif
