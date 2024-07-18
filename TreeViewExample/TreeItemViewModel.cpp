#include "pch.h"
#include "TreeItemViewModel.h"
#if __has_include("TreeItemViewModel.g.cpp")
#include "TreeItemViewModel.g.cpp"
#endif

namespace winrt::TreeViewExample::implementation
{
	TreeItemViewModel::TreeItemViewModel() : name_(L"default")
	{
		children_ = winrt::single_threaded_observable_vector<TreeViewExample::TreeItemViewModel>();
	}

	TreeItemViewModel::TreeItemViewModel(hstring name) : name_(name)
	{
		children_ = winrt::single_threaded_observable_vector<TreeViewExample::TreeItemViewModel>();
	}

	hstring TreeItemViewModel::Name()
	{
		return name_;
	}

	Windows::Foundation::Collections::IObservableVector<TreeViewExample::TreeItemViewModel> TreeItemViewModel::Children()
	{
		return children_;
	}
}
