#ifndef SQUARE_H_
#define SQUARE_H_

#include "../../Actor/Actor.h"

class Square : public Actor{
public:
	Square(IWorld& world, const Vector2& position);

	virtual void update()override;
	virtual void react(Actor& other)override;
private:
	float tex_size{ 64 };
	bool colide_flag{ false };
};
#endif // !SQUARE_H_
