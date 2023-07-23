 char char1{}, char2{};
    cout << "Enter two characters separated by a space";
    cin >> char1 >> char2;
    equal_result = (char1 = char2);
    not_equal_result = (char1!=char2);
    cout << "Comparison result (equals):" << equal_result << endl;
    cout << "Comparison result(not equal):" << not_equal_result << endl;
    