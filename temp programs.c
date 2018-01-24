///CLIST BOX
CListBox * pList1 = (CListBox *)GetDlgItem(IDC_LIST1);

int nSel = pList1->GetCurSel();
if (nSel != LB_ERR)
{
    CString ItemSelected; 
    pList1->GetText(nSel, ItemSelected);
    AfxMessageBox(ItemSelected);
}





