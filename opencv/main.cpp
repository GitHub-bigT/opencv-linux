#include <QCoreApplication>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>


using namespace cv;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Mat img = imread("1.jpg");
    namedWindow("linux");
    imshow("linux",img);
    waitKey(60000);
    return a.exec();
}
