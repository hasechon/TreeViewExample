#pragma once

#include "TreeItemViewModel.g.h"

namespace winrt::TreeViewExample::implementation
{
	struct TreeItemViewModel : TreeItemViewModelT<TreeItemViewModel>
	{
	public:
		TreeItemViewModel();
		TreeItemViewModel(hstring);

		hstring Name();
		Windows::Foundation::Collections::IObservableVector<TreeViewExample::TreeItemViewModel> Children();

	private:
		hstring name_;
		Windows::Foundation::Collections::IObservableVector<TreeViewExample::TreeItemViewModel> children_{nullptr};
	};
}

namespace winrt::TreeViewExample::factory_implementation
{
	struct TreeItemViewModel : TreeItemViewModelT<TreeItemViewModel, implementation::TreeItemViewModel>
	{
	};
}
