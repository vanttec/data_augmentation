//------------------------------------------------------------------------------
// @file: data_augmentation_test.cpp
// @created on: March 18th, 2020
// @modified: May 18th, 2020
// @author: Ivana Collado
// @mail: 
// @co-author: Sebastian Martínez
// @mail: sebas.martp@gmail.com
// @brief: Use case of data augmentation and tests that it works properly. 
//------------------------------------------------------------------------------

// INCLUDES --------------------------------------------------------------------
#include "../data_augmentation.h"

// MAIN PROGRAM ----------------------------------------------------------------
int main( int argc, char** argv )
{
   cv::Mat in; 
   cv::Mat out;
   //Blurr param
   int kernel_size=5;
   // Hue params
   u_char min_hue = 0;
   u_char max_hue = 105;
   u_char step = 5;
   DataAugmentation data;

   //Read input image
   data.Read("../../imgs/lena.png");
   //Apply average filter
   data.AverageFilter(kernel_size);
   //Change hue from min_hue to max_hue in steps
   data.Hue(min_hue, max_hue, step);
   //wait for any key to abort
   cv::waitKey(0);
   return 0;
 }
