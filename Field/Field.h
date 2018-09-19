#ifndef FIELD_H_
#define FIELD_H_

#include "../BoundingRectangle/BoundingRectangle.h"

class Field {
public:
	//�R���X�g���N�^
	Field() = default;
	//�R���X�g���N�^
	explicit Field(const BoundingRectangle& area);
	//������
	void initialize();
	//�X�V
	void update();
	//�`��
	void draw()const;
	// �G���A�̊O�����H 
	bool is_outside(const BoundingRectangle& rect);
	// �G���A�̎擾 
	const BoundingRectangle& area() const;

private:
	// �y��G���A 
	BoundingRectangle area_{ 64.0f, 64.0f, 416.0f, 520.0f };


};

#endif // !FIELD_H_
