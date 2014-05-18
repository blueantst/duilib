#pragma once

namespace DuiLib{

#define SYSCTRL_COMBO		_T("SysCombo")
#define SYSCTRL_COMBO_UI	SYSCTRL_COMBO _T("UI")

class CSysComboWnd;	//����һ�����ڱ���Windows���ڵ���; ǰ������

class SYSCTRL_API CSysComboUI : public CControlUI
{
	friend class CSysComboWnd;
public:
	CSysComboUI();
	~CSysComboUI();

	virtual LPCTSTR GetClass() const override;
	virtual LPVOID GetInterface(LPCTSTR pstrName) override;
	virtual UINT GetControlFlags() const override;

	//Control Text Font
	void SetFont(int index);
	int GetFont() const;

	virtual void SetPos(RECT rc) override;
	SIZE EstimateSize(SIZE szAvailable) override;

	virtual void DoInit() override;
	virtual void SetEnabled(bool bEnable = true) override;
	virtual bool IsEnabled() const override;
	virtual void SetVisible(bool bVisible = true) override;

	virtual void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue) override;


public:
	void AddText(LPCTSTR str);
	CDuiString GetItemText(int i);

protected:
	CSysComboWnd* m_pWnd;

	int			m_iFont;
};

}
