#include"DxGraph/DxGraph.h"
//#include"Application/Application.h"
#include"Texture/TextureID/TextureID.h"
#include"DxLib.h"
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	ChangeWindowMode(TRUE);	//�E�B���h�E���[�h�ɕύX����ׂ̊֐�
	SetGraphMode(800, 600, 32);// ��ʃ��[�h�̐ݒ�

	if (DxLib_Init() == -1)			// �c�w���C�u��������������
	{
		return -1;					// �G���[���N�����璼���ɏI��
	}

	
	//Application app_;

	
	//app_.start();

	//app_.update();
	//app_.draw();
	//app_.end();

	//int ha;
	//ha = LoadGraph("Resource/block.png");

	//DrawGraph(0, 0, ha, TRUE);

	WaitKey();     // �L�[���͂�����܂őҋ@

	DxLib_End();   // DX���C�u�����I������

	return 0;						// �\�t�g�̏I�� 
}


