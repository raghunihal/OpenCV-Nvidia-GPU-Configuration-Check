#include <opencv2/core.hpp>
#include <opencv2/cudaarithm.hpp>
#include <iostream>

int main()
{
    cv::cuda::printShortCudaDeviceInfo(cv::cuda::getDevice());

    std::cout << "OpenCV GPU runs with: "
              << cv::cuda::getCudaEnabledDeviceCount() << " GPU devices" << std::endl;

    return 0;
}
