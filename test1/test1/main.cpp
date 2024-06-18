#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

int main()
{
	cout << "OpenCV" << CV_VERSION << endl;
	Mat img = imread("Lenna.png");
	if (img.empty())
	{
		cout << "image load fail" << endl;
		return -1;
	}

	imshow("image", img);
	waitKey();
	
	return 0;
}