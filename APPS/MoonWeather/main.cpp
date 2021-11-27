#include "MoonWeather.hpp"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MoonWeather moonW;

    //-- Default window size
    moonW.setFixedSize(1024, 600);
    //-- Window title
    moonW.setWindowTitle("Moon Weather v1.0");
    //-- Window background color
    moonW.setStyleSheet("background-color:rgb(0, 10, 20);");
    //-- Hide mouse cursor
    QApplication::setOverrideCursor(Qt::BlankCursor);
    //-- FullScreen Mode
    moonW.showFullScreen();
    //-- Window Mode
    //moonW.show();

    return app.exec();
}
/*--- TessBarAnn ---*/
