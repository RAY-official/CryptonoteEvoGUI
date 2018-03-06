#pragma once

#include <QFrame>

#include "IOptionsPage.h"
#include "Application/IWalletUiItem.h"

namespace Ui {
  class ConnectionOptionsFrame;
}

namespace WalletGui {

class ConnectionOptionsFrame : public QFrame, public IOptionsPage, public IWalletUiItem {
  Q_OBJECT
  Q_DISABLE_COPY(ConnectionOptionsFrame)

public:
  explicit ConnectionOptionsFrame(QWidget* _parent = nullptr);
  ~ConnectionOptionsFrame();

  // IOptionsPage
  virtual void load() override;
  virtual void save() override;
  virtual void setData(const QVariantMap& _data) override;
  virtual bool isEnabled() const override;
  virtual bool needToRestartApplication() const override;
  virtual bool canAccept() const override;

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;

private:
  QScopedPointer<Ui::ConnectionOptionsFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;

  Q_SLOT void remoteHostNameChanged(const QString& _host);
  Q_SLOT void connectionButtonClicked(int _buttonId);

Q_SIGNALS:
  void showRestartWarningSignal(bool _show) override;
  void disableAcceptButtonSignal(bool _disable) override;
};

}
