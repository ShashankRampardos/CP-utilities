auto convertTime = [](const string& time) {
             string hour = time.substr(0,2);
             string minutes = time.substr(3,2);
             string finalTime = hour + "." + minutes;
             return stod(finalTime);
         };
