vector<int> getFrequencies(vector<int> &v)
{
    map<int, int> mpp;
    for (int elem : v)
    {
        mpp[elem]++;
    }

    int maxi = INT_MIN, elemMax = 0, elemMin = 0, mini = INT_MAX;

    for (const auto &i : mpp)
    {
        if (i.second > maxi)
        {
            maxi = i.second, elemMax = i.first;
        }

        if (i.second < mini)
        {
            mini = i.second, elemMin = i.first;
        }
    }

    return {elemMax, elemMin};
}