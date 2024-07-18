#include "pch.h"
#include "TreeItemViewModel.h"
#if __has_include("TreeItemViewModel.g.cpp")
#include "TreeItemViewModel.g.cpp"
#endif

namespace winrt::TreeViewExample::implementation
{
	TreeItemViewModel::TreeItemViewModel() : name_(L"default")
	{
	}

	TreeItemViewModel::TreeItemViewModel(hstring name) : name_(name)
	{
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
