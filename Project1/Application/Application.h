#ifndef APPLICATION_H_
#define APPLICATION_H_

#include"DxLib.h"
#include"../World/World.h"

class Application {
public:
	//�J�n
	 void start();
	//�X�V
	 void update();
	//�`��
	 void draw();
	//�I��
	 void end();
private:
	World world_;
};
#endif // !APPLICATION_H_
