#pragma once

#include <QDialog>

namespace Ui {
class ChangePasswordDialog;
}

namespace WalletGui {

class ChangePasswordDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(ChangePasswordDialog)

public:
  ChangePasswordDialog(bool _old_password_error, QWidget* _parent);
  ~ChangePasswordDialog();

  QString getNewPassword() const;
  QString getOldPassword() const;

private:
  QScopedPointer<Ui::ChangePasswordDialog> m_ui;

  void setConfirmPasswordError(bool _error);
  void setEmptyPasswordError(bool _error);
  void setOldPasswordError(bool _error);

  Q_SLOT void checkPassword(const QString& _password);
  Q_SLOT void passwordChanged(const QString& _password);
};

}
