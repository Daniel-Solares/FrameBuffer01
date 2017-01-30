#pragma once
#include "ofImage.h"

class FrameBuffer {
public:

	void init();
	void update();
	void draw();

	void putPixel(const int& x, const int& y, const ofColor& color);
	void clear(const ofColor& color);

private:
	void FASTputpixel(const int& x, const int& y, const ofColor& color);
	ofImage _img;

};
