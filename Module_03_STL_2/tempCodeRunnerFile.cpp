for (auto [x, y] : mp)
    {
        cout << x << " -> ";

        for (auto val : y) // here we print the set
        {
            cout << val << " ";
        }

        cout << endl;
    }