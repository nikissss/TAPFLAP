#ifndef WIDGET_H
#define WIDGET_H

#include <QDialog>
#include <QDialog>
#include<Qtsql>
#include<QDebug>
#include<QFileInfo>
#include<scene.h>

namespace Ui {
class widget;
}

class widget : public QDialog
{
    Q_OBJECT

public:
    explicit widget(QWidget *parent = nullptr);
    ~widget();

private slots:
    void on_startGameButton_clicked();

private:
    Ui::widget *ui;
    Scene *scene;
};

#endif // WIDGET_H
/*
#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <QDialog>
#include<Qtsql>
#include<QDebug>
#include<QFileInfo>

namespace Ui {
class playgame;
}

class playgame : public QDialog
{
    Q_OBJECT

public:
    explicit playgame(QWidget *parent = nullptr);
    ~playgame();

private:
    Ui::playgame *ui;
};

#endif // PLAYGAME_H
*/
