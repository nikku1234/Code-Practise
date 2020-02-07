
        /*char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        string hexdec_num="";
        int a;
        a = int(A);
        int r;
        while(a>0)
        {
            r = a%16;
            hexdec_num = hex[r]+hexdec_num;
            a = a/16;
        }
        cout<<"0x"<<hexdec_num<<endl;
        cout<<cout.fill ('_')<<cout.width (15)<<fixed<<setprecision(2)<<B<<endl;
*/

    cout << hex << showbase << nouppercase<<left;
    cout << (long long)A << endl;


    cout << setw(15) << showpos << setfill('_') << setprecision(2)<<fixed<<right;
    cout << B << endl;


    cout << scientific << setw(15) << setprecision(9) << uppercase<<noshowpos;
    cout << C << endl;


