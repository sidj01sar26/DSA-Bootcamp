vector<int> printNos(int x)
{
    if (x <= 0)
    {
        return {};
    }
    
    cout << x << " ";
    return printNos(x - 1);
}