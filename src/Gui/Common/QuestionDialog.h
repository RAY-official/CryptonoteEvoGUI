#pragma once

#include <QDialog>

namespace Ui {
class QuestionDialog;
}

namespace WalletGui {

class QuestionDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(QuestionDialog)

public:
  QuestionDialog(const QString& _title, const QString& _text, QWidget* _parent);
  ~QuestionDialog();

private:
  QScopedPointer<Ui::QuestionDialog> m_ui;
};

}
