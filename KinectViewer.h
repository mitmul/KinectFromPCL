#ifndef KINECTVIEWER_H
#define KINECTVIEWER_H

#include <pcl/io/grabber.h>
#include <pcl/io/openni_grabber.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/kdtree/kdtree_flann.h>
#include <pcl/surface/mls.h>
#include <pcl/visualization/cloud_viewer.h>

class KinectViewer
{
public:
    KinectViewer();
    ~KinectViewer();

    void show(const pcl::PointCloud<pcl::PointXYZRGB>::ConstPtr&);
    void run();

    pcl::visualization::CloudViewer viewer;
    pcl::OpenNIGrabber* interface;
};

#endif // KINECTVIEWER_H
