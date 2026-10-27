#ifndef __SETTING_PROPERTY_INTEGER_BLOCK__
#define __SETTING_PROPERTY_INTEGER_BLOCK__

#include "SettingPropertyBlock.Hxx"

namespace Game {

	class SettingPropertyIntegerBlock : public SettingPropertyBlock {

	private:

		int _minimumValue;
		int _maximumValue;
		bool _hasSlideBar;

		int value;

	public:

		SettingPropertyIntegerBlock(
			int minimumValue,
			int maximumValue,
			bool hasSlideBar
		) :
			_minimumValue(minimumValue),
			_maximumValue(maximumValue),
			_hasSlideBar(hasSlideBar) {}

	public:

		int GetValue() const;
		bool SetValue(int value);

	public:

		std::string	Serialize() const override;
		void Deserialize(std::string const& serialized) override;

	};

}

#endif