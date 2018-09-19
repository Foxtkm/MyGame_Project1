#ifndef ACTOR_H_
#define ACTOR_H_
#include"../Vector/Vector2D/Vector2D.h"
#include<string>
#include"DxLib.h"
#include"../BoundingRectangle/BoundingRectangle.h"

class IWorld;

class Actor {
public:

	//�R���X�g
	Actor() = default;
	//�f�X�g
	virtual ~Actor() {}
	//�X�V
	virtual void update();
	//�`��
	virtual void draw()const;
	//�Փˎ����A�N�V����
	virtual void react(Actor& other);

	//�Փ˔���
	void collide(Actor& other);
	//���S����
	void die();

	//�Փ˔��肵�Ă��邩
	bool is_collide(const Actor& other)const;
	//���S���Ă��邩
	bool is_dead()const;
	//���O�擾
	const std::string& name()const;

	//���W���擾
	Vector2 position()const;
	//��]�p�x���擾
	float rotation() const;
	//�ړ��ʂ��擾
	Vector2 velocity()const;
	//�Փ˔���f�[�^���擾
	BoundingRectangle body()const;
	//�R�s�[�֎~
	Actor(const Actor& other) = delete;
	Actor& operator = (const Actor& other) = delete;

protected:
	//���[���h
	IWorld*				world_{ nullptr };
	//���O
	std::string			name_{};
	//���W
	Vector2				position_{ 0.0f,0.0f };
	//��]�p�x
	float				angle_{ 0.0f };
	//�ړ���
	Vector2				velocity_{ 0.0f,0.0f };
	//�Փ˔���
	BoundingRectangle	body_{ 0.0f,0.0f,0.0f,0.0f };
	//���S�t���O
	bool				dead_{ false };
	//�e�N�X�`��ID
	Uint				texture_{ 0 };


};
#endif // !ACTOR_H_
