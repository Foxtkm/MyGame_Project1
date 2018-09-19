#ifndef ACTOR_GROUP_MANAGER_H_
#define ACTOR_GROUP_MANAGER_H_

#include "../ActorManager/ActorManager.h"
#include<map>

enum class ActorGroup;

class ActorGroupManager {

public:
	//�R���X�g���N�^
	ActorGroupManager() = default;
	// �O���[�v�̒ǉ�
	void add(ActorGroup group);
	// �A�N�^�[�̒ǉ� 
	void add(ActorGroup group, const ActorPtr& actor);
	// �X�V 
	void update();
	// �`�� 
	void draw() const;
	// �`�� 
	void draw(ActorGroup group) const;
	// ���� 
	void clear();
	// �A�N�^�[������ 
	ActorPtr find(ActorGroup group, const std::string& name) const;
	// �A�N�^�[����Ԃ� 
	unsigned int count(ActorGroup group) const;
	// �Փ˔��� 
	void collide(ActorGroup group1, ActorGroup group2);
	// �폜 
	void remove();

	// �R�s�[�֎~ 
	ActorGroupManager(const ActorGroupManager& other) = delete;
	ActorGroupManager& operator=(const ActorGroupManager& other) = delete;
private:
	using ActorGroupMap = std::map<ActorGroup, ActorManager>; ActorGroupMap actor_group_map_;
};

#endif // !ACTOR_GROUP_MANAGER_H_
