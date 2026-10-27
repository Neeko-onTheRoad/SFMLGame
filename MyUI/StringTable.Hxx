#ifndef __STRING_TABLE_HXX__
#define __STRING_TABLE_HXX__

#include <string>
#include <unordered_map>

namespace Game {

	class StringTable {

	private:

		std::unordered_map<std::string, std::u32string> contents;

	public:

		StringTable(std::string localeId, std::istream contents);

	public:

		std::u32string const& Get(std::string const& id);

	};

}

#endif