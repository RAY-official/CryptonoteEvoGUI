#include "ExitWidget.h"

#include "ui_ExitWidget.h"

namespace WalletGui {

ExitWidget::ExitWidget(QWidget* _parent) : QWidget(_parent, Qt::Window), m_ui(new Ui::ExitWidget) {
  m_ui->setupUi(this);
}

ExitWidget::~ExitWidget() {
}

}
