#ifndef APPLICATION_H_
#define APPLICATION_H_

#include"DxLib.h"
#include"../World/World.h"

class Application {
public:
	//開始
	 void start();
	//更新
	 void update();
	//描画
	 void draw();
	//終了
	 void end();
private:
	World world_;
};
#endif // !APPLICATION_H_
