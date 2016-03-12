#include <stdlib.h>
#include <iostream>
#include <stdio.h> 
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <fstream>
using namespace cv;
using namespace std;
int main()
{
	//Mat img=imread("digit.jpg",0);
	/*Size size(28,28);
	Mat dst;
	resize(img,dst,size);
	imwrite("test.jpg",dst);*/
	system("python run.py");
	int result;
	ifstream fin;
	fin.open("data2.txt");
	
	fin>>result;
	cout<<result<<endl;
	
	


}

//#examples/documents/documents_mean.npy
/*caffe.set_mode_cpu() 
net = caffe.Net(caffe_root + 'examples/documents/deploy.prototxt',
			    caffe_root + 'examples/documents/models/documents_iter_126000.caffemodel',
	            caffe.TEST)*/