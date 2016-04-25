#include <QtWidgets/QToolButton>
#include <QtWidgets/QGridLayout>
#include <QtCore/QTextStream>
#include <QtWidgets/QPushButton>
#include <QtGui/QTextFormat>
#include <QtGui/QBitmap>
#include "MainMenuG.h"

void MainMenuG::exit()
{
    this->close();
}

MainMenuG::MainMenuG(QWidget *parent) : QWidget(parent, Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint)
{
    this->setFixedSize(SCREEN_SIZE);

    QPixmap background(":/menu_background.png");
    QPalette qPalette;
    qPalette.setBrush(this->backgroundRole(),QBrush(background));
    this->setPalette(qPalette);

    QPushButton *exitButton = new QPushButton(this);
//    QPixmap pix(":/s_icon.png");
//    QIcon icon(pix);
//    exitButton->setIcon(icon);
//    exitButton->setIconSize(pix.size());
//    exitButton->setIcon(icon);

    exitButton->setStyleSheet(QPushButtonStyle);
    exitButton->setText("Exit");
    exitButton->resize(BUTTON_SIZE);
    exitButton->move(SCREEN_SIZE.width()  - BUTTON_SIZE.width()  - 5,
                     SCREEN_SIZE.height() - BUTTON_SIZE.height() - 5);

    connect(exitButton, SIGNAL(clicked()), this, SLOT(exit()));


    QPushButton *loadButton = new QPushButton(this);
    loadButton->setStyleSheet(QPushButtonStyle);
    loadButton->setText("Load");
    loadButton->resize(BUTTON_SIZE);
    loadButton->move(SCREEN_SIZE.width()  - BUTTON_SIZE.width()  - 5,
                      SCREEN_SIZE.height() - BUTTON_SIZE.height() * 2 - 5 * 2);

    QPushButton *startButton = new QPushButton(this);
    startButton->setStyleSheet(QPushButtonStyle);
    startButton->setText("Start");
    startButton->resize(BUTTON_SIZE);
    startButton->move(SCREEN_SIZE.width()  - BUTTON_SIZE.width()  - 5,
                      SCREEN_SIZE.height() - BUTTON_SIZE.height() * 3 - 5 * 3);
}



