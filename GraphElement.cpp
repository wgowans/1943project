GraphElement::GraphElement (int x, int y) {
	x_pos = x;
	y_pos = y;
	element = NULL;
}

void SDL_graph_function (int argc, char* args[], string fileName) {
	element = SDL_LoadBMP (fileName);
}