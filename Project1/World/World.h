#ifndef WORLD_H_
#define WORLD_H_

#include"IWorld/IWorld.h"
#include"../Actor/ActorGroupManager/ActorGroupManager.h"
#include"../Field/Field.h"
#include"../Actor/ActorPtr/ActorPtr.h"
#include<functional>

class World :public IWorld {
public:
	// �R���X�g���N�^ 
	World(); 
	// ������ 
	void initialize(); 
	// �X�V
	void update(); 
	// �`�� 
	void draw() const; 

	// ���� 
	void clear();
// �A�N�^�[�̒ǉ� 
	virtual void add_actor(ActorGroup group, const ActorPtr& actor) override;
	// �A�N�^�[�̌��� 
	virtual ActorPtr find_actor(ActorGroup group, const std::string& name) const override;
	// �A�N�^�[���̎擾 
	virtual unsigned int count_actor(ActorGroup group) const override;

	// �t�B�[���h���擾
	virtual Field& field() override;
// �R�s�[�֎~ 
	World(const World& other) = delete; World& operator = (const World& other) = delete;
private: 
	// �A�N�^�[�}�l�[�W���[ 
	ActorGroupManager actors_; 
	// �t�B�[���h 
	Field field_; 

};
#endif // !WORLD_H_
