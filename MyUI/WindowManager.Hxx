#ifndef __WINDOW_MANAGER_HXX__
#define __WINDOW_MANAGER_HXX__

#include <string>
#include <SFML/Graphics.hpp>

#include "Scene.Hxx"

namespace Game {

	class WindowManager {

	private:
		
		std::string const* title = nullptr;
		sf::RenderWindow* window = nullptr;

	public:

		WindowManager(std::string const& title);
		~WindowManager();

	public:

		void Draw(Scene const& scene);

		void Resize(sf::Vector2u size);
		void SetFullScreen(bool isFullScreen);

	};

}

#endif