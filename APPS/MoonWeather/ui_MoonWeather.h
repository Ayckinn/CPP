/********************************************************************************
** Form generated from reading UI file 'MoonWeather.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOONWEATHER_H
#define UI_MOONWEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoonWeather
{
public:
    QLabel *hour_lbl;
    QLabel *date_lbl;
    QLabel *weather_pic;
    QLabel *city_lbl;
    QLabel *temperature_lbl;
    QLabel *conditions_lbl;
    QLabel *wind_pic_lbl;
    QLabel *pressure_pic_lbl;
    QLabel *humidity_pic_lbl;
    QLabel *wind_speed_lbl;
    QLabel *humidity_percent_lbl;
    QLabel *pressure_rate_lbl;
    QLabel *longitude_lbl;
    QLabel *latitude_lbl;
    QLabel *visibility_pic_lbl;
    QLabel *visibility_km_lbl;

    void setupUi(QWidget *MoonWeather)
    {
        if (MoonWeather->objectName().isEmpty())
            MoonWeather->setObjectName(QStringLiteral("MoonWeather"));
        MoonWeather->resize(1024, 600);
        MoonWeather->setMinimumSize(QSize(1024, 600));
        MoonWeather->setMaximumSize(QSize(1024, 600));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Slab"));
        font.setBold(false);
        font.setWeight(50);
        MoonWeather->setFont(font);
        hour_lbl = new QLabel(MoonWeather);
        hour_lbl->setObjectName(QStringLiteral("hour_lbl"));
        hour_lbl->setGeometry(QRect(1, 30, 1021, 161));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeSans"));
        font1.setPointSize(130);
        font1.setBold(true);
        font1.setWeight(75);
        hour_lbl->setFont(font1);
        hour_lbl->setAlignment(Qt::AlignCenter);
        date_lbl = new QLabel(MoonWeather);
        date_lbl->setObjectName(QStringLiteral("date_lbl"));
        date_lbl->setGeometry(QRect(1, 190, 1021, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("FreeSans"));
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        date_lbl->setFont(font2);
        date_lbl->setTextFormat(Qt::AutoText);
        date_lbl->setAlignment(Qt::AlignCenter);
        weather_pic = new QLabel(MoonWeather);
        weather_pic->setObjectName(QStringLiteral("weather_pic"));
        weather_pic->setGeometry(QRect(20, 320, 256, 256));
        weather_pic->setMinimumSize(QSize(256, 256));
        weather_pic->setMaximumSize(QSize(256, 256));
        weather_pic->setAlignment(Qt::AlignCenter);
        city_lbl = new QLabel(MoonWeather);
        city_lbl->setObjectName(QStringLiteral("city_lbl"));
        city_lbl->setGeometry(QRect(110, 270, 271, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("FreeSans"));
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        city_lbl->setFont(font3);
        city_lbl->setTextFormat(Qt::AutoText);
        city_lbl->setAlignment(Qt::AlignCenter);
        temperature_lbl = new QLabel(MoonWeather);
        temperature_lbl->setObjectName(QStringLiteral("temperature_lbl"));
        temperature_lbl->setGeometry(QRect(290, 370, 341, 81));
        QFont font4;
        font4.setFamily(QStringLiteral("FreeSans"));
        font4.setPointSize(70);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        temperature_lbl->setFont(font4);
        temperature_lbl->setTextFormat(Qt::AutoText);
        temperature_lbl->setAlignment(Qt::AlignCenter);
        conditions_lbl = new QLabel(MoonWeather);
        conditions_lbl->setObjectName(QStringLiteral("conditions_lbl"));
        conditions_lbl->setGeometry(QRect(290, 480, 341, 51));
        conditions_lbl->setFont(font3);
        conditions_lbl->setTextFormat(Qt::AutoText);
        conditions_lbl->setAlignment(Qt::AlignCenter);
        wind_pic_lbl = new QLabel(MoonWeather);
        wind_pic_lbl->setObjectName(QStringLiteral("wind_pic_lbl"));
        wind_pic_lbl->setGeometry(QRect(670, 320, 50, 50));
        wind_pic_lbl->setMinimumSize(QSize(50, 50));
        wind_pic_lbl->setMaximumSize(QSize(50, 50));
        wind_pic_lbl->setTextFormat(Qt::AutoText);
        pressure_pic_lbl = new QLabel(MoonWeather);
        pressure_pic_lbl->setObjectName(QStringLiteral("pressure_pic_lbl"));
        pressure_pic_lbl->setGeometry(QRect(670, 460, 50, 50));
        pressure_pic_lbl->setMinimumSize(QSize(50, 50));
        pressure_pic_lbl->setMaximumSize(QSize(50, 50));
        pressure_pic_lbl->setTextFormat(Qt::AutoText);
        humidity_pic_lbl = new QLabel(MoonWeather);
        humidity_pic_lbl->setObjectName(QStringLiteral("humidity_pic_lbl"));
        humidity_pic_lbl->setGeometry(QRect(670, 390, 50, 50));
        humidity_pic_lbl->setMinimumSize(QSize(50, 50));
        humidity_pic_lbl->setMaximumSize(QSize(50, 50));
        humidity_pic_lbl->setTextFormat(Qt::AutoText);
        wind_speed_lbl = new QLabel(MoonWeather);
        wind_speed_lbl->setObjectName(QStringLiteral("wind_speed_lbl"));
        wind_speed_lbl->setGeometry(QRect(750, 320, 161, 51));
        QFont font5;
        font5.setFamily(QStringLiteral("FreeSans"));
        font5.setPointSize(25);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        wind_speed_lbl->setFont(font5);
        wind_speed_lbl->setTextFormat(Qt::AutoText);
        wind_speed_lbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        humidity_percent_lbl = new QLabel(MoonWeather);
        humidity_percent_lbl->setObjectName(QStringLiteral("humidity_percent_lbl"));
        humidity_percent_lbl->setGeometry(QRect(750, 390, 161, 51));
        humidity_percent_lbl->setFont(font5);
        humidity_percent_lbl->setTextFormat(Qt::AutoText);
        humidity_percent_lbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pressure_rate_lbl = new QLabel(MoonWeather);
        pressure_rate_lbl->setObjectName(QStringLiteral("pressure_rate_lbl"));
        pressure_rate_lbl->setGeometry(QRect(750, 460, 161, 51));
        pressure_rate_lbl->setFont(font5);
        pressure_rate_lbl->setTextFormat(Qt::AutoText);
        pressure_rate_lbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        longitude_lbl = new QLabel(MoonWeather);
        longitude_lbl->setObjectName(QStringLiteral("longitude_lbl"));
        longitude_lbl->setGeometry(QRect(390, 270, 261, 21));
        longitude_lbl->setFont(font3);
        longitude_lbl->setTextFormat(Qt::AutoText);
        longitude_lbl->setAlignment(Qt::AlignCenter);
        latitude_lbl = new QLabel(MoonWeather);
        latitude_lbl->setObjectName(QStringLiteral("latitude_lbl"));
        latitude_lbl->setGeometry(QRect(660, 270, 251, 21));
        latitude_lbl->setFont(font3);
        latitude_lbl->setTextFormat(Qt::AutoText);
        latitude_lbl->setAlignment(Qt::AlignCenter);
        visibility_pic_lbl = new QLabel(MoonWeather);
        visibility_pic_lbl->setObjectName(QStringLiteral("visibility_pic_lbl"));
        visibility_pic_lbl->setGeometry(QRect(670, 530, 50, 50));
        visibility_pic_lbl->setMinimumSize(QSize(50, 50));
        visibility_pic_lbl->setMaximumSize(QSize(50, 50));
        visibility_pic_lbl->setTextFormat(Qt::AutoText);
        visibility_km_lbl = new QLabel(MoonWeather);
        visibility_km_lbl->setObjectName(QStringLiteral("visibility_km_lbl"));
        visibility_km_lbl->setGeometry(QRect(750, 530, 161, 51));
        visibility_km_lbl->setFont(font5);
        visibility_km_lbl->setTextFormat(Qt::AutoText);
        visibility_km_lbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(MoonWeather);

        QMetaObject::connectSlotsByName(MoonWeather);
    } // setupUi

    void retranslateUi(QWidget *MoonWeather)
    {
        MoonWeather->setWindowTitle(QApplication::translate("MoonWeather", "MoonWeather", nullptr));
        hour_lbl->setText(QApplication::translate("MoonWeather", "88:88:88", nullptr));
        date_lbl->setText(QApplication::translate("MoonWeather", "VENDREDI 24 SEPTEMBRE 2021", nullptr));
        weather_pic->setText(QString());
        city_lbl->setText(QApplication::translate("MoonWeather", "CITY", nullptr));
        temperature_lbl->setText(QApplication::translate("MoonWeather", "100\302\260", nullptr));
        conditions_lbl->setText(QApplication::translate("MoonWeather", "PARTIELLEMENT NUAGEUX", nullptr));
        wind_pic_lbl->setText(QString());
        pressure_pic_lbl->setText(QString());
        humidity_pic_lbl->setText(QString());
        wind_speed_lbl->setText(QApplication::translate("MoonWeather", "100 Km/h", nullptr));
        humidity_percent_lbl->setText(QApplication::translate("MoonWeather", "100%", nullptr));
        pressure_rate_lbl->setText(QApplication::translate("MoonWeather", "8888 hPa", nullptr));
        longitude_lbl->setText(QApplication::translate("MoonWeather", "LONGITUDE : x.x", nullptr));
        latitude_lbl->setText(QApplication::translate("MoonWeather", "LATITUDE : xx.xxxxx", nullptr));
        visibility_pic_lbl->setText(QString());
        visibility_km_lbl->setText(QApplication::translate("MoonWeather", "100 Km", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoonWeather: public Ui_MoonWeather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOONWEATHER_H
