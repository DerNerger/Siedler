#include "mainwindow.h"
#include <QApplication>

#include "iostream"
#include "Model/xmlparser.h"

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();*/

    XMLParser parser("/home/felilein/Dokumente/Siedler/Sourcecode/Tree.xml");
    parser.parseTree();
}
