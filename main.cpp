#include "src/UI/mainwindow.h"
#include <QApplication>

//#include <opencv2/opencv.hpp>
//#include "src/ActiveContour/active_contour.h"


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

//cv::Mat src_act = cv::imread("C:\\Users\\mahmo\\OneDrive\\Desktop\\img3.jpg");
//cv::cvtColor(src_act, src_act, cv::COLOR_BGR2GRAY);
//cv::Mat dst_act = ACTIVE_CONTOUR::active_contour(src_act, 20, 2.5, 0.9, 20, 80, 100);
//cv::imshow("Hello World", dst_act);
//cv::waitKey();


  return a.exec();
}
