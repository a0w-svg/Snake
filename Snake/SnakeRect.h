#pragma once
#include <SFML\Graphics.hpp>

enum class Direction {Left, Right, Up, Down};
class SnakeRect : public sf::RectangleShape
{
	using RectangleShape::RectangleShape;
public:
	SnakeRect(Direction dir);
	Direction direction() const;
	Direction oppositeDirection();
private:
	Direction _direction;
};

