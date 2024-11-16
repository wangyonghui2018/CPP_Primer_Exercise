void elimDups(vector<string> &words){
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}

int main() {
    vector<string> vec1 = {"the", "quick","red","fox","jumps","over","the","slow","red","turtle"};
    vector<string> vec2(vec1.begin(),vec1.end());
    unique(vec2.begin(),vec2.end());   //这个函数只能先排序再去重
    elimDups(vec1);
    for(auto s : vec1){
        cout<<s<<" ";
    }
    cout<<endl;
    for(auto x : vec2){
        cout<<x<<" ";
    }
    cout<<endl;
    string x = "hello";

    return 0;
}
