#include "WindowManager.Hxx"

namespace Game {

	WindowManager::WindowManager(std::string const& title) {

		sf::ContextSettings contextSettings;
		contextSettings.antiAliasingLevel = 8;

		this->title = &title;
		this->window = new sf::RenderWindow(
			sf::VideoMode({960, 540}),
			title,
			sf::State::Windowed,
			contextSettings
		);

	}

	WindowManager::~WindowManager() {
		delete window;
	}

	void WindowManager::Draw(Scene const& scene) {
			
	}

	void WindowManager::Resize(sf::Vector2u size) {
		window->setSize(size);
		
	}

	void WindowManager::SetFullScreen(bool isFullScreen) {
		
		auto videoMode = isFullScreen
			? sf::VideoMode::getDesktopMode()
			: sf::VideoMode(window->getSize());


	}

}