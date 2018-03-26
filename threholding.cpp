/*	CS440_640_Lab6_part1.cpp
*	Artificial Intelligence Spring 2018
*	Lab 6 part1
*	--------------
*	This program introduces the following concepts:
*		a) Become familiar with using Visual Studio and the OpenCV library
*		b) Read an image from a file, display the image, write an image to a file
*		c) Learn about image representation in OpenCV: BGR and grayscale
*		d) Perform basic thresholding operations on an image
*	--------------
*/

//opencv libraries
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
//C++ standard libraries
#include <iostream>
#include <string>

using namespace cv;
using namespace std;


// In C++, functions must be declared or defined in the file before you attempt you use them.
// To help keep your file organized, you can provide a declaration (just the function signature) 
// before you provide the body of the function. The arguments and return value of the declaration 
// and definition must match exactly.

//function declarations
/**
Function that set blue channel of image to be 255
@param image: The source image 
*/
void tintImageBlue(Mat& image);

int main()
{
	Mat image;
	image = imread("boston.jpg", IMREAD_COLOR); // Read the file

	if (image.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return 0;
	}

	//tintImageBlue(image);

	namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Display window", image);                // Show our image inside it.

	waitKey(0); // Wait for a keystroke in the window
	return 0;
}

//----------------
//Your goal: set the blue channel of all pixels to be 255 and display the image
//You need to insert your code in 2 places
//----------------
void tintImageBlue(Mat& image)
{
	if (image.empty())
	{
		cout << "Error: image is unallocated" << endl;
		return;
	}

	int channels = image.channels();
	for (int row = 0; row<image.rows; row++)
	{
		//the .ptr method of the Mat class returns a pointer to the specifed row.
		//the type of the returned pointer is given inside the angle brackets
		//
		// The reason you might prefer to use this notation is because
		// Mat objects can be used to store other types of data too, not just unsigned char's.
		// However, the data member variable is always of unsigned char.
	    
		//1. insert code here

		for (int col = 0; col<image.cols; col++)
		{
			// Once you have a pointer to the beginning of the row, you still need to calculate
			// the index of the element of the row that you want to access

			//2. insert code here


		}
	}
}