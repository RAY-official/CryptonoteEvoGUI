#pragma once

#include <QDialog>

namespace Ui {
class NewPasswordDialog;
}

namespace WalletGui {

class NewPasswordDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(NewPasswordDialog)

public:
  explicit NewPasswordDialog(QWidget* _parent);
  ~NewPasswordDialog();

  QString getPassword() const;

  void setConfirmPasswordError(bool _error);
  void setEmptyPasswordError(bool _error);

private:
  QScopedPointer<Ui::NewPasswordDialog> m_ui;

  Q_SLOT void checkPassword(const QString& _password);
};

}
