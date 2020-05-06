//------------------------------------------------------------------------------
// @file: data_augmentation.h
// @created on: March 18th, 2019
// @author: Ivana Collado
// @co-author: Sebastian Martínez
// @mail: sebas.martp@gmail.com
// @brief: This file contains the definition for the Data Augmentation class. 
//------------------------------------------------------------------------------

// INCLUDES --------------------------------------------------------------------
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

// CLASS DECLARATION -----------------------------------------------------------
class DataAugmentation {
public:

  // CONSTRUCTOR AND DESTRUCTOR ------------------------------------------------
  // Constructor. 
  DataAugmentation();
  // Destructor.
  ~DataAugmentation();

  // FUNCTIONS -----------------------------------------------------------------
  // Reads input Image.
  // 
  // @param path[in]: Path to the input image.
  void Read(const std::string &path);

  // Applies GaussianBlur Filter to image
  // 
  // @param kernel[in]: Size of kernel to be applied.
  void GaussianBlur(const int &kernel);

  // Change brightness of the image
  //
  // @param alpha[in]: contrast control
  // @param beta[in]: brightness control (-100,100) recommended
  void ContrastBrightness(const double alpha, const int beta);

private:
  // MEMBERS -------------------------------------------------------------------
  //Input image Matrix
  cv::Mat in_;
  //Output image Matrix
  cv::Mat out_;
};