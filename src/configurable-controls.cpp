#include "configurable-controls.hpp"

ConfigurableControlsWidget::ConfigurableControlsWidget(QWidget* parent) : QDockWidget("Configurable Controls Plugin", parent) {
    this->parent = parent;
    
    QWidget* widget = new QWidget();
    this->button->setText("Press me plz");
    
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(this->button);
    
    widget->setLayout(layout);
    
    setWidget(widget);
    setVisible(false);
    setFloating(true);
    resize(300, 300);
    
    QObject::connect(button, SIGNAL(clicked()), SLOT(ButtonClicked()));
};

ConfigurableControlsWidget::~ConfigurableControlsWidget() {
    
};

//slot function
void ConfigurableControlsWidget::ButtonClicked() {
    QMessageBox::information(this, "HIII", "YOU CLICKED ME DAAAAMN");
}