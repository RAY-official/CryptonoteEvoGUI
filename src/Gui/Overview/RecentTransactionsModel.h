#pragma once

#include "Gui/Common/WalletWindowedItemModel.h"

namespace WalletGui {

class RecentTransactionsModel : public WalletWindowedItemModel {
  Q_OBJECT
  Q_DISABLE_COPY(RecentTransactionsModel)

public:
  RecentTransactionsModel(QAbstractItemModel* _sourceModel, QObject* _parent);
  ~RecentTransactionsModel();

protected:
  bool filterAcceptsColumn(int _source_column, const QModelIndex& _sourceParent) const override;
};

}
