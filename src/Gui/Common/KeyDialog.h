#pragma once

#include <QDialog>

namespace Ui {
  class KeyDialog;
}

namespace WalletGui {

class KeyDialog
  : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(KeyDialog)

public:
  KeyDialog(const QByteArray& _key, bool _isTracking, QWidget *_parent);
  KeyDialog(QWidget *_parent);
  ~KeyDialog();

  QByteArray getKey() const;

private:
  QScopedPointer<Ui::KeyDialog> m_ui;
  bool m_isTracking;
  bool m_isExport;
  QByteArray m_key;

  void saveKey();
  void loadKey();

  Q_SLOT void fileClicked();
  Q_SLOT void keyChanged();
};

}
