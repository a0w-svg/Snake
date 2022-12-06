#include "Window.h"
#include "Snake.h"
#include "World.h"
#include "TextBox.h"

class Game
{
public:
	Game();
	~Game();

	void HandleInput();
	void Update();
	void Render();
	Window* GetWindow();

	sf::Time GetElapsed();
	void RestartClock();

private:
	Window m_window;
	sf::Texture m_mushroomTexture;
	sf::Sprite m_mushroom;
	sf::Vector2i m_increment;

	sf::Clock m_clock;
	float m_elapsed;

	World m_world;
	Snake m_snake;
	TextBox m_textbox;
};

