#include <iostream>
#include <zlib.h>
#include <opencv2/opencv.hpp>
#include "simple/person.h"

int main() {

    std::cout << "Hello, World!" << std::endl;
    std::cout << zlibVersion() << std::endl;
    person().setAge(5);
    person person("Test", 30);
    cout << person.getAge() << endl;
    cout << person.getName() << endl;

    std::string image_path = "/Users/tungbt/Code/OS/cpp-three/test.png";
    cv::Mat image = cv::imread(image_path, cv::IMREAD_COLOR);

    // Kiểm tra xem việc đọc ảnh có thành công không
    if (image.empty()) {
        std::cerr << "Không thể đọc ảnh!" << std::endl;
        return -1;
    }

    // Hiển thị ảnh gốc
    cv::imshow("Original Image", image);
    cv::waitKey(0);

    // Làm mờ ảnh bằng GaussianBlur
    cv::Mat blurredImage;
    cv::GaussianBlur(image, blurredImage, cv::Size(15, 15), 0);

    // Hiển thị ảnh đã làm mờ
    cv::imshow("Blurred Image", blurredImage);
    cv::waitKey(0);

    // Lưu ảnh đã làm mờ
    cv::imwrite("/Users/tungbt/Code/OS/cpp-three/blur_test.png", blurredImage);

    return 0;
}
