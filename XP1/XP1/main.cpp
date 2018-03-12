#include <SFML\Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML tutorial", sf::Style::Close |sf::Style::Resize);

	while (window.isOpen()) {
		sf::Event evnt;
		while (window.pollEvent(evnt)) {
			
			if (evnt.type == evnt.Closed) {
				window.close();
			}

		}
	}

	return 0;
}