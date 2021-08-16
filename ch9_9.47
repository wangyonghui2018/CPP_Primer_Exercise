
int main() {
    string str947("ab2c3d7R4E6");
    string nums("0123456789");
    string numbers;
    string letters;
    for(int i = 0;i<str947.size();++i)
    {
        auto pos = str947.find_first_of(nums,i);
        if(pos != str947.npos)
        {
            numbers.push_back(str947[pos]);
            i = pos;
        }
    }
    for(auto c:numbers)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    for(int i =0;i<str947.size();++i)
    {
        auto pos = str947.find_first_not_of(nums,i);
        if(pos != str947.npos)
        {
            letters.push_back(str947[pos]);
            i=pos;
        }
    }

    for(auto c : letters)
    {
        cout<<c<<" ";
    }


    return 0;
}
