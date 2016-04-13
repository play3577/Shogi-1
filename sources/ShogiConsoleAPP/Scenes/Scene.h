#ifndef SHOGI_SCENE_H
#define SHOGI_SCENE_H

/**
 * @brief Класс Сцена
 *
 * Под сценой понимается альтернатива окна
 * в графическом приложении. Сценой может являться
 * меню, диалог с насройками или сама игра. Кроме
 * того, внутри класса должна определяться следующая
 * сцена приложения.
 */
class Scene
{
public:
    /**
     * @brief Отобразить сцену
     *
     * Отрисовывает сцену и выполняет необходимые
     * действия по взаимодействию с пользователем.
     */
    virtual void show() = 0;

    /**
     * @brief Получить следующую сцену.
     *
     * @return Указатель на слудующую сцену.
    //TODO: сцена не знает про приложение и когда ему завершать работу
     * Если возвращается nullptr, то приложение
     * завершает работу.
     */
    Scene *getNextScene()
    {
        return next;
    }

    virtual ~Scene() { }

protected:
    Scene *next = nullptr;
};


#endif //SHOGI_SCENE_H
