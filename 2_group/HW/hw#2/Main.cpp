#include"GraphicEditor.h"

int main() {
	GraphicEditor *editor = new GraphicEditor();
	editor->start();
	delete editor;

	return 0;
}