#include "MoonWeather.hpp"
#include "ui_MoonWeather.h"


MoonWeather::MoonWeather(QWidget *parent) : QWidget(parent), ui(new Ui::MoonWeather)
{
    //-- FIRST, ALWAYS ON TOP !!!
    ui->setupUi(this);

    //-- Center Window app on screen
    move(xMiddle, yMiddle);

    //-- First request at start
    MoonJSONRequest();

    connect(moonTimer, &QTimer::timeout, this, &MoonWeather::ChangeMode);
    moonTimer->start();
}

MoonWeather::~MoonWeather() { delete ui; }


//////////////////////////////////// MODES ////////////////////////////////////
void MoonWeather::DayMode()
{
    MoonTime(lime_font);
    MoonDate(cyan_font);

    MoonTemperature(orange_font);
    MoonConditions(sun_pic, few_cloudy_day, cloudy_day, full_cloudy_day,
                   light_rain_day, storm_day, day_mist, magenta_font);

    MoonWind(day_wind_pic, yellow_font);
    MoonHumidity(day_humidity_pic, yellow_font);
    MoonPressure(day_pressure_pic, yellow_font);
    MoonVisibility(day_visibility_pic, yellow_font);

    MoonCity(white_font);
    MoonLongitude(white_font);
    MoonLatitude(white_font);
}

void MoonWeather::NightMode()
{
    MoonTime(gray_font);
    MoonDate(gray_font);

    MoonTemperature(gray_font);
    MoonConditions(moon_pic, few_cloudy_night, cloudy_night, full_cloudy_night,
                   light_rain_night, storm_night, night_mist, gray_font);

    MoonWind(night_wind_pic, gray_font);
    MoonHumidity(night_humidity_pic, gray_font);
    MoonPressure(night_pressure_pic, gray_font);
    MoonVisibility(night_visibility_pic, gray_font);

    MoonCity(gray_font);
    MoonLongitude(gray_font);
    MoonLatitude(gray_font);
}

void MoonWeather::ChangeMode()
{
    moon_current_time = QTime::currentTime();
    moon_current_time_text = moon_current_time.toString("hh:mm");

    //BlinkDots();

    if(moon_current_time_text > "08:59" && moon_current_time_text < "22:00") { DayMode(); }
    else { NightMode(); }

    //-- UPDATE
    QThread::msleep(500);  //-- 0.5ms
    ++loop_update;

    if(loop_update == 1200)  //-- 1200ms = 10mn
    {
        MoonJSONRequest();
        loop_update = 0;
    }
}

/////////////////////////////////// FEATURES //////////////////////////////////
/*-------------------------- JSON REQUEST -------------------------*/
void MoonWeather::MoonJSONRequest()
{
    //-- Set API url
    QNetworkRequest JSON_request(QUrl
            ("https://api.openweathermap.org/data/2.5/weather?q=castelnau-le-lez&lang=fr&appid=738e9d1489491771d579f8b5db5fd21a"));
    //-- Create request header
    JSON_request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    //-- Get JSON informations and convert file
    reply = nam.post(JSON_request, QJsonDocument(loadJSONFile).toJson());
    while (!reply->isFinished()) { qApp->processEvents(); }
    //-- Read the JSON file
    loadJSONFile = QJsonDocument::fromJson(reply->readAll());

    reply->deleteLater();

    //qDebug() << loadJSONFile;
}
/*------------------------------ TIME -----------------------------*/
void MoonWeather::MoonTime(QString color)
{
    ui->hour_lbl->setText(moon_current_time_text);
    ui->hour_lbl->setStyleSheet(color);
}

void MoonWeather::BlinkDots()
{
    //-- Blink dots for each seconds
    if((moon_current_time.second() % 2) == 0)
    {
        moon_current_time_text[2] = ' ';
        moon_current_time_text[5] = ' ';
    }
}
/*------------------------------ DATE -----------------------------*/
void MoonWeather::MoonDate(QString color)
{
    auto moon_current_date = QDate::currentDate();

    ui->date_lbl->setText(moon_current_date.toString("dddd d MMMM yyyy").toUpper());
    ui->date_lbl->setStyleSheet(color);
}
/*--------------------------- TEMPERATURE -------------------------*/
void MoonWeather::MoonTemperature(QString color)
{
    auto JSON_temp_object = loadJSONFile.object();
    auto JSON_temp = JSON_temp_object["main"].toObject();
    //-- Get value in JSON file
    auto JSON_temp_value = JSON_temp["temp"].toDouble();

    //-- Convert temperature to Celcius
    celcius_temp = (JSON_temp_value - 273.15);

    //-- Convert double to string
    ui->temperature_lbl->setText(QString::number(celcius_temp) + "°");
    ui->temperature_lbl->setStyleSheet(color);

    //qDebug() << "TEMPERATURE : " << celcius_temp <<"°";
}
/*--------------------------- CONDITIONS --------------------------*/
void MoonWeather::MoonConditions(QString pic1, QString pic2, QString pic3, QString pic4,
                                 QString pic5, QString pic6, QString pic7, QString color)
{
    //-- ROOT file is a JSON object => loadJSONFile.object()
    //-- From the ROOT, get the "weather" member which is a table ==> ["weather"].toArray()
    auto JSON_condition_array  = loadJSONFile.object()["weather"].toArray();
    //-- Get the first item, which is an object => JSON_array.first().toObject();
    auto JSON_condition_object = JSON_condition_array[0].toObject();
    //-- From this object, get the "description" member, which is a string ==> JSON_object ["description"].toString()
    auto JSON_condition  = JSON_condition_object["description"].toString().toUpper();

    ui->conditions_lbl->setText(JSON_condition);
    ui->conditions_lbl->setStyleSheet(color);

    if(JSON_condition == "CIEL DÉGAGÉ") { ui->weather_pic->setPixmap(QPixmap(pic1)); }
    if(JSON_condition == "PEU NUAGEUX") { ui->weather_pic->setPixmap(QPixmap(pic2)); }
    if(JSON_condition == "PARTIELLEMENT NUAGEUX") { ui->weather_pic->setPixmap(QPixmap(pic3)); }
    if(JSON_condition == "COUVERT") { ui->weather_pic->setPixmap(QPixmap(pic4)); }
    if(JSON_condition == "NUAGEUX") { ui->weather_pic->setPixmap(QPixmap(pic4)); }
    if(JSON_condition == "LÉGÈRE PLUIE") { ui->weather_pic->setPixmap(QPixmap(pic5)); }
    if(JSON_condition == "ORAGE") { ui->weather_pic->setPixmap(QPixmap(pic6)); }
    if(JSON_condition == "BRUME") { ui->weather_pic->setPixmap(QPixmap(pic7)); }

    //qDebug() << "CONDITION   : " << JSON_condition;
}
/*------------------------------ CITY -----------------------------*/
void MoonWeather::MoonCity(QString color)
{
    auto JSON_city_object = loadJSONFile.object();
    auto JSON_city_value = JSON_city_object["name"].toString().toUpper();

    ui->city_lbl->setText(JSON_city_value);
    ui->city_lbl->setStyleSheet(color);

    //qDebug() << "CITY : " << JSON_city_value;
}
/*---------------------------- LONGITUDE --------------------------*/
void MoonWeather::MoonLongitude(QString color)
{
    auto JSON_longitude_object = loadJSONFile.object();
    auto JSON_longitude = JSON_longitude_object["coord"].toObject();
    auto JSON_longitude_value = JSON_longitude["lon"].toDouble();

    ui->longitude_lbl->setText("LONGITUDE : " + QString::number(JSON_longitude_value));
    ui->longitude_lbl->setStyleSheet(color);

    //qDebug() << "LONGITUDE : " << JSON_longitude_value;
}
/*---------------------------- LATITUDE ---------------------------*/
void MoonWeather::MoonLatitude(QString color)
{
    auto JSON_latitude_object = loadJSONFile.object();
    auto JSON_latitude = JSON_latitude_object["coord"].toObject();
    auto JSON_latitude_value = JSON_latitude["lat"].toDouble();

    ui->latitude_lbl->setText("LATITUDE : " + QString::number(JSON_latitude_value));
    ui->latitude_lbl->setStyleSheet(color);

    //qDebug() << "LATITUDE : " << JSON_latitude_value;
}
/*------------------------------ WIND -----------------------------*/
void MoonWeather::MoonWind(QString picPath, QString color)
{
    auto JSON_wind_object = loadJSONFile.object();
    auto JSON_wind = JSON_wind_object["wind"].toObject();
    auto JSON_wind_value = JSON_wind["speed"].toDouble();

    wind_kmh = (JSON_wind_value * 3600 / 1000);

    ui->wind_pic_lbl->setPixmap(QPixmap(picPath));
    ui->wind_speed_lbl->setText(QString::number(wind_kmh) + " Km/h");
    ui->wind_speed_lbl->setStyleSheet(color);

    //qDebug() << "Wind speed : " << wind_kmh << "Km/h";
}
/*---------------------------- HUMIDITY ---------------------------*/
void MoonWeather::MoonHumidity(QString picPath, QString color)
{
    auto JSON_humidity_object = loadJSONFile.object();
    auto JSON_humidity = JSON_humidity_object["main"].toObject();
    auto JSON_humidity_value = JSON_humidity["humidity"].toInt();

    ui->humidity_pic_lbl->setPixmap(QPixmap(picPath));
    ui->humidity_percent_lbl->setText(QString::number(JSON_humidity_value) + " %");
    ui->humidity_percent_lbl->setStyleSheet(color);

    //qDebug() << "HUMIDITY : " << JSON_humidity_value << "%";
}
/*---------------------------- PRESSURE ---------------------------*/
void MoonWeather::MoonPressure(QString picPath, QString color)
{
    auto JSON_pressure_object = loadJSONFile.object();
    auto JSON_pressure = JSON_pressure_object["main"].toObject();
    auto JSON_pressure_value = JSON_pressure["pressure"].toInt();

    ui->pressure_pic_lbl->setPixmap(QPixmap(picPath));
    ui->pressure_rate_lbl->setText(QString::number(JSON_pressure_value) + " hPa");
    ui->pressure_rate_lbl->setStyleSheet(color);

    //qDebug() << "PRESSURE : " << JSON_pressure_value << "hPa";
}
/*---------------------------- VISIBILTY --------------------------*/
void MoonWeather::MoonVisibility(QString picPath, QString color)
{
    auto JSON_visibility_object = loadJSONFile.object();
    auto JSON_visibility_value = JSON_visibility_object["visibility"].toDouble();

    visibility_km = (JSON_visibility_value / 1000);

    ui->visibility_pic_lbl->setPixmap(QPixmap(picPath));
    ui->visibility_km_lbl ->setText(QString::number(visibility_km) + " Km");
    ui->visibility_km_lbl->setStyleSheet(color);

    //qDebug() << "VISIBILITY : " << visibility_km << km;
}
/*--- TessBarAnn ---*/
