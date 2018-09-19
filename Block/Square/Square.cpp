#include "Square.h"
#include"../../Actor/ActorGroup/ActorGroup.h"
#include"../../World/IWorld/IWorld.h"
#include"../../Texture/TextureID/TextureID.h"
#include"../../Field/Field.h"

Square::Square(IWorld & world, const Vector2 & position)
{
	world_ = &world;
	name_ = "Square";
	position_ = position;
	body_ = BoundingRectangle{ 0.0f,0.0f,32.0f,32.0f };
	texture_ = TEXTURE_BLOCK1;
}

void Square::update()
{
	Vector2 velocity{ 0.0f,0.0f };
	if (CheckHitKey(KEY_INPUT_W))velocity.y = -1.0f;
	if (CheckHitKey(KEY_INPUT_A))velocity.x = -1.0f;
	if (CheckHitKey(KEY_INPUT_S))velocity.y =  1.0f;
	if (CheckHitKey(KEY_INPUT_D))velocity.x =  1.0f;
	velocity_ = velocity.normalize()*2.0f;
	position_ += velocity_;

	const auto& area = world_->field().area();

}

void Square::react(Actor & other)
{

}
