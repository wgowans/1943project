#ifndef GRAPHELEMENT_H
#define GRAPHELEMENT_H

using namespace std;

class GraphElement {
	public:
		GraphElement (int, int);
		void SDL_graph_function (int argc, char* args[], string fileName);
	private:
		int x_pos;
		int y_pos;
		SDL_Surface *element;

};

#endif