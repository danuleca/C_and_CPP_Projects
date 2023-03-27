
        : name(dupCStr(name)), tasks(tasks), numberOfTasks(numberOfTasks)
    {
        if(numberOfTasks <= 0) throw invalid_argument("Number of Tasks <= 0! ");