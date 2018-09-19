#ifndef ACTOR_MANAGER_H_
#define ACTOR_MANAGER_H_

#include"../Actor.h"
#include"../ActorPtr/ActorPtr.h"
#include<list>

class ActorManager {
public:
	//�R���X�g���N�^
	ActorManager() = default;
	//�A�N�^�[�̒ǉ�
	void add(const ActorPtr& actor);
	//�X�V
	void update();
	//�`��
	void draw()const;
	//�Փ˔���
	void collide();
	//�Փ˔���
	void collide(Actor& other);
	//�Փ˔���
	void collide(ActorManager& other);
	//�폜
	void remove();
	//�A�N�^�[�̌���
	ActorPtr find(const std::string& name)const;
	//�A�N�^�[����Ԃ�
	unsigned int count() const;
	//����
	void clear();
	//�R�s�[�֎~
	ActorManager(const ActorManager& other) = delete;
	ActorManager& operator =(const ActorManager& other) = delete;

private:
	using ActorList = std::list<ActorPtr>;
	//�A�N�^�[���X�g
	ActorList	actors_;


};

#endif // !ACTOR_MANAGER_H_
