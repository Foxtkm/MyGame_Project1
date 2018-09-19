#include "Application.h"
#include"../Block/Square/Square.h"
#include"../Actor/ActorGroup/ActorGroup.h"
#include"../Texture/TextureID/TextureID.h"

void Application::start()
{

	LoadGraph("Resource/block.png");
	world_.add_actor(ActorGroup::Square_Block,
		new_actor<Square>(world_, Vector2{ 64.0f,64.0f }));


	SetDrawScreen(DX_SCREEN_BACK);	//�`���𗠉�ʂɐݒ�

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

		ScreenFlip();		//����ʂ�\��ʂɔ��f
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
