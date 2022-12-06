#include "SnakeRect.h"

SnakeRect::SnakeRect(Direction dir) : RectangleShape{}, _direction{dir}
{
}

Direction SnakeRect::direction() const 
{
	return _direction;
}

Direction SnakeRect::oppositeDirection()
{
	return Direction();
}

Direction SnakeRect::oppositeDirection() const
{
	switch (_direction)
	{
	case Direction::Up:
		return Direction::Down;

	case Direction::Down:
		return Direction::Up;

	case Direction::Right:
		return Direction::Left;
	
	case Direction::Left:
		return Direction::Right;
	default:
		break;
	}
}