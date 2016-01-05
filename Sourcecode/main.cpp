#include "mainwindow.h"
#include <QApplication>

<<<<<<< HEAD
#include "iostream"
#include "Model/xmlparser.h"
=======

>>>>>>> 394c5e56f57ef7f768f38c60226e37d44642ad58

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    MainWindow w;
    w.showFullScreen();

<<<<<<< HEAD
    return a.exec();*/

    XMLParser parser("/home/felilein/Dokumente/Siedler/Sourcecode/Tree.xml");
    parser.parseTree();
=======
    return a.exec();

>>>>>>> 394c5e56f57ef7f768f38c60226e37d44642ad58
}
