#ifndef MOONWEATHER_HPP
#define MOONWEATHER_HPP

#include "ui_MoonWeather.h"

#include <QWidget>
#include <QtWidgets>
#include <QtGui>
#include <QtNetwork>

QT_BEGIN_NAMESPACE
namespace Ui { class MoonWeather; }
QT_END_NAMESPACE


class MoonWeather : public QWidget
{
    Q_OBJECT


    public:
        MoonWeather(QWidget *parent = nullptr);
        ~MoonWeather();

        void MoonJSONRequest();

        void DayMode();
        void NightMode();
        void ChangeMode();

        void MoonTime(QString color);
        void MoonDate(QString color);

        void MoonWind(QString picPath, QString color);
        void MoonHumidity(QString picPath, QString color);
        void MoonPressure(QString picPath, QString color);
        void MoonVisibility(QString picPath, QString color);

        void MoonTemperature(QString color);
        void MoonConditions(QString pic1, QString pic2, QString pic3, QString pic4, QString pic5, QString pic6, QString pic7, QString color);

        void MoonCity(QString color);
        void MoonLongitude(QString color);
        void MoonLatitude(QString color);

        void BlinkDots();


    private:
        Ui::MoonWeather *ui;

        //============ CENTER SCREEN ==========//
        //-- Create primary screen object
        QScreen *screen = QGuiApplication::primaryScreen();
        //-- Define primary screen geometry
        QRect screenGeometry = screen->geometry();
        //-- define app window size
        int appWidth  = 1024;
        int appHeight = 600;
        //-- Get primary screen resolution
        int screenWidth  = screenGeometry.width();
        int screenHeight = screenGeometry.height();
        //-- Calculate the center positions
        int xMiddle = ((screenWidth - appWidth) / 2);
        int yMiddle = ((screenHeight - appHeight) / 2);

        //================ TIME ===============//
        QTimer  *moonTimer = new QTimer(this);
        QTime   moon_current_time;
        QString moon_current_time_text;

        //============= TEMPERATURE ===========//
        int celcius_temp = 0;

        //================ WIND ===============//
        int wind_kmh = 0;

        //================ WIND ===============//
        int visibility_km = 0;

        //============ JSON REQUEST ===========//
        QNetworkReply *reply;
        QNetworkAccessManager nam;
        QString JSON_value;
        QJsonDocument loadJSONFile;
        QJsonObject JSON_object;

        //============== PICS PATH ============//
        //-- DAY MODE
        QString sun_pic            = "pics/sun.png";
        QString few_cloudy_day     = "pics/few_cloudy_day.png";
        QString cloudy_day         = "pics/cloudy_day.png";
        QString full_cloudy_day    = "pics/full_cloudy_day.png";
        QString light_rain_day     = "pics/light_rain_day.png";
        QString storm_day          = "pics/storm_day.png";
        QString day_mist           = "pics/mist_day.png";
        QString day_wind_pic       = "pics/wind_day.png";
        QString day_humidity_pic   = "pics/humidity_day.png";
        QString day_pressure_pic   = "pics/pressure_day.png";
        QString day_visibility_pic = "pics/visibility_day.png";

        //-- NIGHT MODE
        QString moon_pic             = "pics/moon.png";
        QString few_cloudy_night     = "pics/few_cloudy_night.png";
        QString cloudy_night         = "pics/cloudy_night.png";
        QString full_cloudy_night    = "pics/full_cloudy_night.png";
        QString light_rain_night     = "pics/light_rain_night.png";
        QString storm_night          = "pics/storm_night.png";
        QString night_mist           = "pics/mist_night.png";
        QString night_wind_pic       = "pics/wind_night.png";
        QString night_humidity_pic   = "pics/humidity_night.png";
        QString night_pressure_pic   = "pics/pressure_night.png";
        QString night_visibility_pic = "pics/visibility_night.png";

        //============ LABEL COLOR ============//
        QString lime_font    = "color:rgb(0, 255, 0);";
        QString cyan_font    = "color:rgb(0, 255, 255);";
        QString magenta_font = "color:rgb(255, 0, 255);";
        QString white_font   = "color:rgb(255, 255, 255);";
        QString gray_font    = "color:rgb(30, 30, 30);";
        QString orange_font  = "color:rgb(255, 140, 0);";
        QString yellow_font  = "color:rgb(255, 255, 0);";
        QString purple_font  = "color:rgb(150, 0, 255);";

        int loop_update = 1;
};
#endif //-- MOONWEATHER_HPP
/*--- TessBarAnn ---*/
