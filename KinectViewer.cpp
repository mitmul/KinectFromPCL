#include "KinectViewer.h"

KinectViewer::KinectViewer() :
    viewer("Kinect from PCL")
{
}

KinectViewer::~KinectViewer()
{

}

void KinectViewer::run()
{
    interface = new pcl::OpenNIGrabber;
    interface->getDevice().get()->setDepthRegistration(true);

    boost::function<void (const pcl::PointCloud<pcl::PointXYZRGB>::ConstPtr&)> f =
            boost::bind (&KinectViewer::show, this, _1);

    interface->registerCallback(f);

    interface->start();

    while (!viewer.wasStopped())
    {
        sleep(1);
    }

    interface->stop();
}

void KinectViewer::show(const pcl::PointCloud<pcl::PointXYZRGB>::ConstPtr &cloud)
{
    if (!viewer.wasStopped())
    {
        viewer.showCloud(cloud);
    }
}
