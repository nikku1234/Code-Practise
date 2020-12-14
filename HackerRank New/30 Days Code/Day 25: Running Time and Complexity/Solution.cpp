int main() {
    int count;
    cin >> count;
    while (count > 0) {
        int n;
        cin >> n;
        string output = "";
        if (n == 1 || n == 2) {
            output = n == 1 ? "Not prime" : "Prime";
            cout << output << "\n";
            --count;
            continue;
        }
        else if (n%2 == 0) {
            cout << "Not prime\n";
            --count;
            continue;
        }
        int i = 3;
        for (;i*i<=n;i+=2) {
            if (n%i == 0) {
                output = "Not prime";
                break;
            }
        }
        if (output.compare("Not prime") != 0) {
            output = "Prime";
        }
        cout << output << "\n";
        --count;
    }
    return 0;
}
