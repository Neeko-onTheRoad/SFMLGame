#ifndef __SETTING_PROPERTY_BLOCK_HXX__
#define __SETTING_PROPERTY_BLOCK_HXX__

#include <string>

namespace Game {

	class SettingPropertyBlock {

	private:

		std::string _id;

	public:

		std::string const& GetId() const;
		std::u32string const& GetDisplayName() const;

	public:
		
		virtual std::string Serialize() const = 0;
		virtual void Deserialize(std::string const& serialized) = 0;

	};

}

#endif