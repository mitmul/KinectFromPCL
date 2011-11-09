#-------------------------------------------------
#
# Project created by QtCreator 2011-11-09T14:59:20
#
#-------------------------------------------------

QT       += core gui

TARGET = KinectFromPCL
TEMPLATE = app

SOURCES += main.cpp\
        MainWindow.cpp \
    KinectViewer.cpp

HEADERS  += MainWindow.h \
    KinectViewer.h

FORMS    += MainWindow.ui

mac {

INCLUDEPATH += /opt/local/include \
    /opt/local/include/eigen3 \
    /opt/local/include/vtk-5.6

# PCL
INCLUDEPATH += /usr/local/include/pcl-1.3

LIBS += -L/usr/local/lib \
    -lpcl_common \
    -lpcl_features \
    -lpcl_filters \
    -lpcl_io \
    -lpcl_kdtree \
    -lpcl_keypoints \
    -lpcl_octree \
    -lpcl_people \
    -lpcl_range_image_border_extractor \
    -lpcl_range_image \
    -lpcl_registration \
    -lpcl_sample_consensus \
    -lpcl_search \
    -lpcl_segmentation \
    -lpcl_surface \
    -lpcl_tracking \
    -lpcl_visualization

# OpenNI & NITE
INCLUDEPATH += /usr/include/ni \
    /usr/include/nite

LIBS += -L/usr/lib \
    -lnimCodecs \
    -lnimMockNodes \
    -lnimRecorder \
    -lOpenNI \
    -lOpenNI.jni \
    -lXnVNITE.jni \
    -lXnVNite_1_4_2 \
    -lXnVCNITE_1_4_2 \
    -lXnVFeatures_1_4_2 \
    -lXnVHandGenerator_1_4_2 \

}





