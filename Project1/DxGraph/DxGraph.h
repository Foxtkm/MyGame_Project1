#ifndef DX_GRAPH_H_
#define DX_GRAPH_H_
#include"../Vector/Vector2D/Vector2D.h"

class DxGraph {
private:

	//�O���t�B�b�N�n���h��
	int handle;

public:

	void load(char*);

	~DxGraph();

	int draw(float, float, float, float);
};
#endif // !DX_GRAPH_H_
