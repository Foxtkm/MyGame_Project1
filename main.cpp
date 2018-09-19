#include"DxGraph/DxGraph.h"
//#include"Application/Application.h"
#include"Texture/TextureID/TextureID.h"
#include"DxLib.h"
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	ChangeWindowMode(TRUE);	//ウィンドウモードに変更する為の関数
	SetGraphMode(800, 600, 32);// 画面モードの設定

	if (DxLib_Init() == -1)			// ＤＸライブラリ初期化処理
	{
		return -1;					// エラーが起きたら直ちに終了
	}

	
	//Application app_;

	
	//app_.start();

	//app_.update();
	//app_.draw();
	//app_.end();

	//int ha;
	//ha = LoadGraph("Resource/block.png");

	//DrawGraph(0, 0, ha, TRUE);

	WaitKey();     // キー入力があるまで待機

	DxLib_End();   // DXライブラリ終了処理

	return 0;						// ソフトの終了 
}


