//https://codingcompetitions.withgoogle.com/kickstart/round/00000000001a0069/0000000000414bfb
//Made By pr3pony from Taiwan
//https://codingcompetitions.withgoogle.com/kickstart/submissions/00000000001a0069/cHIzcG9ueQ
void solve()
{
    string s;
    cin >> s;
    ll ans = 0, ck = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s.substr(i, 4) == "KICK")
            ++ck;
        if (s.substr(i, 5) == "START")
            ans += ck;
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        cout << "Case #" << i << ": ";
        solve();
    }
}
