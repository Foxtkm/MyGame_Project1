#ifndef BOUNDING_RECTANGLE_H_
#define BOUNDING_RECTANGLE_H_

#include "DxLib.h"
#include"../Vector/Vector2D/Vector2D.h"

class BoundingRectangle {
public:
	//�R���X�g���N�^�@
	BoundingRectangle() = default;

	//�R���X�g���N�^
	BoundingRectangle(float left, float top, float right, float bottom);

	//�R���X�g���N�^
	BoundingRectangle(const Vector2& min, const Vector2& max);

	// �_����`�̓����ɓ����Ă��邩?
	bool contains(const Vector2& position)const;

	//��`���d�Ȃ��Ă��邩
	bool intersects(const BoundingRectangle& other)const;

	//���s�ړ�
	BoundingRectangle translate(const Vector2& position)const;

	//��
	float width()const;
	//����
	float height()const;

private:
	Vector2 min_{ 0.0f,0.0f };
	Vector2 max_{ 0.0f,0.0f };

};

#endif // !BOUNDING_RECTANGLE_H_
