#ifndef IWORLD_H_
#define IWORLD_H_

#include"../../Actor/ActorPtr/ActorPtr.h"
#include<string>

enum class ActorGroup;
class Field;

class IWorld {
public:

	//���z�f�X�g���N�^
	virtual ~IWorld(){}
	//�A�N�^�[�ǉ�
	virtual void add_actor(ActorGroup group, const ActorPtr& actor) = 0;
	// �A�N�^�[������ 
	virtual ActorPtr find_actor(ActorGroup group, const std::string& name) const = 0; 
	// �A�N�^�[���̎擾 
	virtual unsigned int count_actor(ActorGroup group) const = 0; 
	// �t�B�[���h���擾 
	virtual Field& field() = 0;
};
#endif // !IWORLD_H_
