#include "FrameBuffer.h"

void FrameBuffer::init()
{
	_img.allocate(1024, 768, ofImageType::OF_IMAGE_COLOR_ALPHA);
	clear(ofColor::black);
}

void FrameBuffer::update()
{
}

void FrameBuffer::draw()
{
	for (int x = 0; x < 1024; x++) {
		putPixel(x, 768 / 2, ofColor::green);
	}

	for (int y = 0; y < 768; y++) {
		putPixel(1024 / 2, y, ofColor::red);
	}
}

void FrameBuffer::putPixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);
	_img.update();
	_img.draw(ofPoint(0, 0, 0));
}

void FrameBuffer::clear(const ofColor & color)
{
	for (int y = 0; y < 768; y++) {
		for (int x = 0; x < 1024; x++) {
			FASTputpixel(x, y, color);
		}
	}

	_img.update();
	_img.draw(ofPoint(0, 0, 0));
}

void FrameBuffer::FASTputpixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);
}
