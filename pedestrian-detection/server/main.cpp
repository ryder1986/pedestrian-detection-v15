#include <QCoreApplication>
#include "tool1.h"
#include "server.h"
#include "camera.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    prt(info,"sever start");
    Server s;
    CameraManager mgr=CameraManager::GetInstance();
    return a.exec();
}
