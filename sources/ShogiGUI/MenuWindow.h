#ifndef SHOGI_MAINMENU_H
#define SHOGI_MAINMENU_H

#include <QtWidgets/QPushButton>
#include <QtGui/QTextFormat>
#include <QtWidgets/QWidget>

class MenuWindow: public QWidget
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent);


private:

    const QSize SCREEN_SIZE{800, 600};
    const QSize BUTTON_SIZE{150, 50};

    QPushButton *exitButton;
    QPushButton *startButton;
    QPushButton *loadButton;

    QString QPushButtonStyle =
            "QPushButton "
            "{"
                " border: 1px solid #000000;"
                " background: #8f5732; "
                " background: qlineargradient(x1: 0, y1: 1, x2: 0, y2: 0,  stop: 0 #f59356, stop: 1 #8f5732);"
                " padding: 7.5px 15px;"
                " border-radius: 8px;"
                " color: #ffffff;"
                " font-size: 22px;"
            "}"
            "QPushButton:pressed "
            "{"
                " border-color #f59356;"
                " background: #f59356;"
            "}"
            "QPushButton:flat "
            "{"
                " border: none;"
            "}";

private slots:

    void exit();
    void startGame();
    void loadGame();

};


#endif //SHOGI_MAINMENU_H
