namespace SuperWork
{
class TimeTask
	{
	public:
		enum Timer_Type
		{
		 LABOR_TIME,
		 DEAD_TIME,
		 USEFUL_TIME,
		 EXPAND_TIME
		};
	public:	class Task_Time
		{
		public: Timer_Type type;
				 int start_time;
				 int end_time;
				 int period;
				 char* task;
				 bool isDone;
		  Task_Time(void)
		 { 
		  type =		DEAD_TIME;
		  start_time =	0;
		  end_time =	0;
		  period =		0;
		  task =		nullptr;
		  isDone =		false;
		  		  
		  };
		};
	};
}