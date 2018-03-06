#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class FilteredByAddressTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FilteredByAddressTransactionsModel)

public:
  explicit FilteredByAddressTransactionsModel(QObject* _parent);
  ~FilteredByAddressTransactionsModel();

  void setFilter(const QString& _address);

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;

private:
  QString m_address;
};

}
