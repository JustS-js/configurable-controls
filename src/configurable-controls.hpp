#ifndef JUSTS_CONFIGURABLE_CONTROLS_FOR_OBS_H
#define JUSTS_CONFIGURABLE_CONTROLS_FOR_OBS_H

#include <QDockWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>
#include <QMessageBox>

class ConfigurableControlsWidget : public QDockWidget {
    Q_OBJECT
    
    public:
        explicit ConfigurableControlsWidget(QWidget *parent = nullptr);
        ~ConfigurableControlsWidget();
    
    private:
        void buttonClicked();
        QWidget *parent = nullptr;
        QPushButton *button = new QPushButton();
    
    private slots:
    void ButtonClicked();
};

#endif // JUSTS_CONFIGURABLE_CONTROLS_FOR_OBS_H