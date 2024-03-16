#include <QApplication>
#include <QPushButton>
#include <QWebEngineView>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWebEngineView* webView = nullptr;
    // Создаем кнопку
    QPushButton button("Нажми меня!");

    // Настраиваем размеры кнопки
    button.resize(200, 100);

    // Отображаем кнопку
    button.show();

    // Запускаем цикл обработки событий
    return app.exec();

}

