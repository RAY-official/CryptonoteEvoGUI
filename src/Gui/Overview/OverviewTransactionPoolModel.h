#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class ICryptoNoteAdapter;

class OverviewTransactionPoolModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(OverviewTransactionPoolModel)

public:
  explicit OverviewTransactionPoolModel(ICryptoNoteAdapter* _cryptoNoteAdapter, QObject* _parent);
  ~OverviewTransactionPoolModel();

  virtual QVariant data(const QModelIndex& _index, int _role) const override;
  virtual int rowCount(const QModelIndex& _parent) const override;

protected:
  virtual bool filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const override;

private:
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
};

}
