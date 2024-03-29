#pragma once
#include "Common.h"
class FaceTracker
{
private:
	int m_dynamicModelDim; // dynamic model dimensions
	int m_measureModelDim; // measurement model dimensions
	cv::KalmanFilter m_faceTracker;
public:
	FaceTracker();
	FaceTracker(int dynamDim, int measDim);
	cv::Mat predict();
	void update(const cv::Mat &inMat);
	void currentPredictDisplayRect(cv::Mat &inImage);
	void currentPredictDisplay(cv::Mat &inImage);
	void setFirstState(cv::Mat &inMat);
	~FaceTracker();
};

