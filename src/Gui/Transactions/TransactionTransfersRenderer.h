#pragma once

#include <QFrame>

class QAbstractItemModel;
class QAbstractProxyModel;

namespace Ui {
  class TransactionTransfersRenderer;
}

namespace WalletGui {

class IAddressBookManager;
class ICryptoNoteAdapter;

class TransactionTransfersRenderer : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionTransfersRenderer)

public:
  explicit TransactionTransfersRenderer(ICryptoNoteAdapter* _cryptoNoteAdapter, IAddressBookManager* _addressBookManager, const QModelIndex& _transactionIndex,
    const QString& _walletAddress, QWidget* _parent);
  ~TransactionTransfersRenderer();

  static int calculateItemHeight(quintptr _transferCount);

private:
  QScopedPointer<Ui::TransactionTransfersRenderer> m_ui;
};

}
