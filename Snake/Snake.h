#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "TextBox.h"

struct SnakePart {
	SnakePart(int x, int y) : position(x,y){}
	sf::Vector2i position;
};

using SnakeContainer = std::vector<SnakePart>;
enum class Direction{None, Up, Down, Left, Right};
class Snake
{
public:
	Snake(int l_blockSize, TextBox* l_log);
	~Snake();

	// Helper methods
	void SetDirection(Direction l_dir);
	Direction GetDirection();
	Direction GetPhysicalDirection();
	int GetSpeed();
	sf::Vector2i GetPosition();
	int GetLives();
	int GetScore();
	void IncreaseScore();
	bool HasLost();

	void Lose();
	void ToggleLost();

	void Extend(); // Grow the snake
	void Reset(); // Reset to starting position
	
	void Move(); // Movement method
	void Tick(); // Update method
	void Cut(int l_segments); // Method for cutting snake
	void Render(sf::RenderWindow& l_window);
private:
	void CheckCollision(); 
	
	SnakeContainer m_snakeBody;
	int m_size; // Size of the graphics
	Direction m_dir;
	int m_speed; 
	int m_lives;
	int m_score;
	bool m_lost;
	sf::RectangleShape m_bodyRect;
	TextBox* m_log;

};

