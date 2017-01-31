#include <QApplication>
#include "Model/controller.h"

#include "View/teamwidget.h"

int main(int argc, char *argv[])
{
    Controller c(argc, argv);
    return c.exec();
}
