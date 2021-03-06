#include "Application.h"
#include"../Block/Square/Square.h"
#include"../Actor/ActorGroup/ActorGroup.h"
#include"../Texture/TextureID/TextureID.h"

void Application::start()
{

	LoadGraph("Resource/block.png");
	world_.add_actor(ActorGroup::Square_Block,
		new_actor<Square>(world_, Vector2{ 64.0f,64.0f }));


	SetDrawScreen(DX_SCREEN_BACK);	//描画先を裏画面に設定

}

void Application::update()
{
	while (1)
	{
		if (ProcessMessage() != 0) {
			break;
		}
		ClearDrawScreen();
		world_.update();

		ScreenFlip();		//裏画面を表画面に反映
		world_.draw();

	}
}

void Application::draw()
{
}

void Application::end()
{
	DxLib_End();
	world_.clear();
}
