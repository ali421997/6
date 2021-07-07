// Include libraries
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(void){
	// Read the image
	Mat img = imread("musk.jpg");

	cout << "image size = " << img.size() << endl;
	cout << "image channels = " << img.channels();
}
