#ifndef VECTOR2D_H_
#define VECTOR2D_H_

#include<iostream>

typedef unsigned Uint;

struct Vector2
{
	float x;
	float y;

    Vector2() = default;							//�f�t�H���g�R���X�g���N�^

	 Vector2(float _x, float _y);					//�R���X�g���N�^

	float length()const;							//�x�N�g���̒������v�Z���郁���o�֐�
	
	 float lengthSquare()const;						//�x�N�g���̒����̓��

	 float dot(const Vector2& other)const;			//��������̃x�N�g���Ƃ̓���

	float distanceFrom(const Vector2& other)const;	//��������̃x�N�g���Ƃ̋���

	Vector2 normalize()const;						//���K��(������ "1" �ɂ���)�x�N�g��


	 bool isZero()const;								//�[���x�N�g���ł��邩

	//**�P�����Z�q�I�[�o�[���[�h**//
	 Vector2 operator +()const;
	 Vector2 operator -()const;

	Vector2 operator +(const Vector2& other)const;	//2�� +
	 Vector2 operator -(const Vector2& other)const;	//2�� -
	 Vector2 operator *(float s)const;				//2�� *
	 Vector2 operator /(float s)const;				//2�� /


	//**�������Z�q�I�[�o�[���[�h**//

	Vector2& operator +=(const Vector2& other);		//����������Z�q +=
	Vector2& operator -=(const Vector2& other);		//����������Z�q -=
	Vector2& operator *=(float s);					//����������Z�q *=
	Vector2& operator /=(float s);					//����������Z�q /=

	//template <class Char> // �o�̓X�g���[��
	//inline std::basic_ostream<Char>& operator <<(std::basic_ostream<Char>& os, const Vec2& v)
	//{
	//	return os << Char('(') << v.x << Char(',') << v.y << Char(')');
	//}

	//template <class Char> // ���̓X�g���[��
	//inline std::basic_istream<Char>& operator >>(std::basic_istream<Char>& is, Vec2& v)
	//{
	//	Char unused;
	//	return is >> unused >> v.x >> unused >> v.y >> unused;
	//}
};

#endif // !VECTOR2D_H_
