#ifndef SHOGI_APPLICATION_H
#define SHOGI_APPLICATION_H

#include "Scenes/Scene.h"
/**
 * @brief Класс Приложение
 *
 * Класс поочередно отображает сцены в консоли.
 */
class Application
{

public:
    /**
     * @brief Конструктор
     *
     * @param scene Указатель на первую сцену.
     */
    explicit Application(Scene *scene = nullptr) : scene(scene) { }

    /**
     * @brief Запустить приложение.
     *
     * Метод поочередно отрисовывает сцены до тех пор,
     * пока не получит nullptr вместо следующей сцены.
     */
    void start()
    {
        while (scene != nullptr)
        {
            scene->show();
            Scene *nextScene = scene->getNextScene();
            delete scene;
            scene = nextScene;
        }
    }

    virtual ~Application() { }

protected:
    Scene *scene;
};


#endif //SHOGI_APPLICATION_H
