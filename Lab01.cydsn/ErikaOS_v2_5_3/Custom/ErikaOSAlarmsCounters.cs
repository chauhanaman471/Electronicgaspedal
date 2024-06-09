using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;

namespace ErikaOS_v2_5_3
{
    public partial class ErikaOSAlarmsCounters : UserControl
    {
        private ErikaOSParameters parameters;

        public ErikaOSAlarmsCounters(ErikaOSParameters parameters)
        {
            InitializeComponent();
            this.parameters = parameters;
            UpdateForm();
        }

        //Update Form Function
        // Updates form with saved parameters when the GUI is opened.
        public void UpdateForm()
        {
            bool Value;
            if (parameters.Number_of_Counters == 0)
            {
                Value = false;
            }
            else
            {
                Value = true;
            }
            button_AddAlarm.Enabled = Value;
            button_RemoveCounter.Enabled = Value;
            button_RemoveAlarm.Enabled = Value;

            //Refresh Counter windows/tabs
            tabControl_Counters.TabPages.Clear();
            for(Int32 i = 1; i <= parameters.Number_of_Counters; i++)
            {
                tabControl_Counters.TabPages.Add(getCounterPage(i));
                Counter_Set_Values(i, parameters.getCounterName(i), parameters.getCounterMin(i), parameters.getCounterMax(i), parameters.getCounterTick(i));
                if (i == 4) break;
            }

            //Refresh Alarm windows/tabs
            tabControl_Alarms.TabPages.Clear();
            if (parameters.Number_of_Counters > 0)
            {
                for (Int32 i = 1; i <= parameters.Number_of_Alarms; i++)
                {
                    tabControl_Alarms.TabPages.Add(getAlarmPage(i));
                    Alarm_RefreshTabValues(i);
                    Alarm_Set_Values(i);
                }
            }
        }

        private void Alarm_RefreshTabValues(Int32 Index)
        {
            Int32 tempIndex;
            switch(Index)
            {
                case 1:
                    tempIndex = Alarm_1_Counter.SelectedIndex;
                    Alarm_1_Counter.Items.Clear();
                    for(Int32 i = 0; i < parameters.Number_of_Counters; i++)
                    {
                        Alarm_1_Counter.Items.Add(parameters.getCounterName(i + 1));
                    }
                    if (parameters.Number_of_Counters > tempIndex)
                        Alarm_1_Counter.SelectedIndex = tempIndex;
                    tempIndex = Alarm_1_Event.SelectedIndex;
                    Alarm_1_Event.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
                    {
                        Alarm_1_Event.Items.Add(parameters.getErikaEventName(i));
                    }
                    if (parameters.Number_of_Events > tempIndex)
                        Alarm_1_Event.SelectedIndex = tempIndex;
                    tempIndex = Alarm_1_Task.SelectedIndex;
                    Alarm_1_Task.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Tasks; i++)
                    {
                        Alarm_1_Task.Items.Add(parameters.getTaskName(i));
                    }
                    if (parameters.Number_of_Tasks > tempIndex)
                        Alarm_1_Task.SelectedIndex = tempIndex;
                    break;
                case 2:
                    tempIndex = Alarm_2_Counter.SelectedIndex;
                    Alarm_2_Counter.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Counters; i++)
                    {
                        Alarm_2_Counter.Items.Add(parameters.getCounterName(i + 1));
                    }
                    if (parameters.Number_of_Counters > tempIndex)
                        Alarm_2_Counter.SelectedIndex = tempIndex;
                    tempIndex = Alarm_2_Event.SelectedIndex;
                    Alarm_2_Event.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
                    {
                        Alarm_2_Event.Items.Add(parameters.getErikaEventName(i));
                    }
                    if (parameters.Number_of_Events > tempIndex)
                        Alarm_2_Event.SelectedIndex = tempIndex;
                    tempIndex = Alarm_2_Task.SelectedIndex;
                    Alarm_2_Task.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Tasks; i++)
                    {
                        Alarm_2_Task.Items.Add(parameters.getTaskName(i));
                    }
                    if (parameters.Number_of_Tasks > tempIndex)
                        Alarm_2_Task.SelectedIndex = tempIndex;
                    break;
                case 3:
                    tempIndex = Alarm_3_Counter.SelectedIndex;
                    Alarm_3_Counter.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Counters; i++)
                    {
                        Alarm_3_Counter.Items.Add(parameters.getCounterName(i + 1));
                    }
                    if (parameters.Number_of_Counters > tempIndex)
                        Alarm_3_Counter.SelectedIndex = tempIndex;
                    tempIndex = Alarm_3_Event.SelectedIndex;
                    Alarm_3_Event.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
                    {
                        Alarm_3_Event.Items.Add(parameters.getErikaEventName(i));
                    }
                    if (parameters.Number_of_Events > tempIndex)
                        Alarm_3_Event.SelectedIndex = tempIndex;
                    tempIndex = Alarm_3_Task.SelectedIndex;
                    Alarm_3_Task.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Tasks; i++)
                    {
                        Alarm_3_Task.Items.Add(parameters.getTaskName(i));
                    }
                    if (parameters.Number_of_Tasks > tempIndex)
                        Alarm_3_Task.SelectedIndex = tempIndex;
                    break;
                case 4:
                    tempIndex = Alarm_4_Counter.SelectedIndex;
                    Alarm_4_Counter.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Counters; i++)
                    {
                        Alarm_4_Counter.Items.Add(parameters.getCounterName(i + 1));
                    }
                    if (parameters.Number_of_Counters > tempIndex)
                        Alarm_4_Counter.SelectedIndex = tempIndex;
                    tempIndex = Alarm_4_Event.SelectedIndex;
                    Alarm_4_Event.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
                    {
                        Alarm_4_Event.Items.Add(parameters.getErikaEventName(i));
                    }
                    if (parameters.Number_of_Events > tempIndex)
                        Alarm_4_Event.SelectedIndex = tempIndex;
                    tempIndex = Alarm_4_Task.SelectedIndex;
                    Alarm_4_Task.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Tasks; i++)
                    {
                        Alarm_4_Task.Items.Add(parameters.getTaskName(i));
                    }
                    if (parameters.Number_of_Tasks > tempIndex)
                        Alarm_4_Task.SelectedIndex = tempIndex;
                    break;
                case 5:
                    tempIndex = Alarm_5_Counter.SelectedIndex;
                    Alarm_5_Counter.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Counters; i++)
                    {
                        Alarm_5_Counter.Items.Add(parameters.getCounterName(i + 1));
                    }
                    if (parameters.Number_of_Counters > tempIndex)
                        Alarm_5_Counter.SelectedIndex = tempIndex;
                    tempIndex = Alarm_5_Event.SelectedIndex;
                    Alarm_5_Event.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
                    {
                        Alarm_5_Event.Items.Add(parameters.getErikaEventName(i));
                    }
                    if (parameters.Number_of_Events > tempIndex)
                        Alarm_5_Event.SelectedIndex = tempIndex;
                    tempIndex = Alarm_5_Task.SelectedIndex;
                    Alarm_5_Task.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Tasks; i++)
                    {
                        Alarm_5_Task.Items.Add(parameters.getTaskName(i));
                    }
                    if (parameters.Number_of_Tasks > tempIndex)
                        Alarm_5_Task.SelectedIndex = tempIndex;
                    break;
                case 6:
                    tempIndex = Alarm_6_Counter.SelectedIndex;
                    Alarm_6_Counter.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Counters; i++)
                    {
                        Alarm_6_Counter.Items.Add(parameters.getCounterName(i + 1));
                    }
                    if (parameters.Number_of_Counters > tempIndex)
                        Alarm_6_Counter.SelectedIndex = tempIndex;
                    tempIndex = Alarm_6_Event.SelectedIndex;
                    Alarm_6_Event.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
                    {
                        Alarm_6_Event.Items.Add(parameters.getErikaEventName(i));
                    }
                    if (parameters.Number_of_Events > tempIndex)
                        Alarm_6_Event.SelectedIndex = tempIndex;
                    tempIndex = Alarm_6_Task.SelectedIndex;
                    Alarm_6_Task.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Tasks; i++)
                    {
                        Alarm_6_Task.Items.Add(parameters.getTaskName(i));
                    }
                    if (parameters.Number_of_Tasks > tempIndex)
                        Alarm_6_Task.SelectedIndex = tempIndex;
                    break;
                case 7:
                    tempIndex = Alarm_7_Counter.SelectedIndex;
                    Alarm_7_Counter.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Counters; i++)
                    {
                        Alarm_7_Counter.Items.Add(parameters.getCounterName(i + 1));
                    }
                    if (parameters.Number_of_Counters > tempIndex)
                        Alarm_7_Counter.SelectedIndex = tempIndex;
                    tempIndex = Alarm_7_Event.SelectedIndex;
                    Alarm_7_Event.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
                    {
                        Alarm_7_Event.Items.Add(parameters.getErikaEventName(i));
                    }
                    if (parameters.Number_of_Events > tempIndex)
                        Alarm_7_Event.SelectedIndex = tempIndex;
                    tempIndex = Alarm_7_Task.SelectedIndex;
                    Alarm_7_Task.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Tasks; i++)
                    {
                        Alarm_7_Task.Items.Add(parameters.getTaskName(i));
                    }
                    if (parameters.Number_of_Tasks > tempIndex)
                        Alarm_7_Task.SelectedIndex = tempIndex;
                    break;
                case 8:
                    tempIndex = Alarm_8_Counter.SelectedIndex;
                    Alarm_8_Counter.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Counters; i++)
                    {
                        Alarm_8_Counter.Items.Add(parameters.getCounterName(i + 1));
                    }
                    if (parameters.Number_of_Counters > tempIndex)
                        Alarm_8_Counter.SelectedIndex = tempIndex;
                    tempIndex = Alarm_8_Event.SelectedIndex;
                    Alarm_8_Event.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
                    {
                        Alarm_8_Event.Items.Add(parameters.getErikaEventName(i));
                    }
                    if (parameters.Number_of_Events > tempIndex)
                        Alarm_8_Event.SelectedIndex = tempIndex;
                    tempIndex = Alarm_8_Task.SelectedIndex;
                    Alarm_8_Task.Items.Clear();
                    for (UInt16 i = 1; i <= parameters.Number_of_Tasks; i++)
                    {
                        Alarm_8_Task.Items.Add(parameters.getTaskName(i));
                    }
                    if (parameters.Number_of_Tasks > tempIndex)
                        Alarm_8_Task.SelectedIndex = tempIndex;
                    break;
                default:
                    break;
            }
            return;
        }

        private void Alarm_Set_Values(Int32 Index)
        {
            switch(Index)
            {
                case 1:
                    Alarm_1_Name.Text = parameters.Alarm_1_Name;
                    tabPage_Alarm1.Text = parameters.Alarm_1_Name;
                    if(parameters.Number_of_Counters > parameters.Alarm_1_Counter)
                    {
                        Alarm_1_Counter.SelectedIndex = parameters.Alarm_1_Counter;
                    }
                    if (parameters.Alarm_1_Action == 3)
                    {
                        Alarm_1_Action.SelectedIndex = 2;
                        Alarm_1_Callback.Enabled = true;
                        Alarm_1_Callback.Text = parameters.Alarm_1_Callback;
                        Alarm_1_Task.Enabled = false;
                        Alarm_1_Event.Enabled = false;
                    }
                    else
                    {
                        Alarm_1_Action.SelectedIndex = parameters.Alarm_1_Action;
                        Alarm_1_Callback.Enabled = false;
                        Alarm_1_Task.Enabled = true;
                        if (parameters.Number_of_Tasks > parameters.Alarm_1_Task)
                        {
                            Alarm_1_Task.SelectedIndex = parameters.Alarm_1_Task;
                        }
                        if(parameters.Alarm_1_Action == 1)
                        {
                            Alarm_1_Event.Enabled = true;
                        }
                        else
                        {
                            Alarm_1_Event.Enabled = false;
                        }
                        if (Alarm_1_Event.Items.Count > 0)
                        {
                            Int32 Event = (Int32)(Math.Log10(parameters.Alarm_1_Event) / Math.Log10(2));
                            if(Event < Alarm_1_Event.Items.Count)
                                Alarm_1_Event.SelectedIndex = Event;
                        }
                    }
                    break;
                case 2:
                    Alarm_2_Name.Text = parameters.Alarm_2_Name;
                    tabPage_Alarm2.Text = parameters.Alarm_2_Name;
                    if (parameters.Number_of_Counters > parameters.Alarm_2_Counter)
                    {
                        Alarm_2_Counter.SelectedIndex = parameters.Alarm_2_Counter;
                    }
                    if (parameters.Alarm_2_Action == 3)
                    {
                        Alarm_2_Action.SelectedIndex = 2;
                        Alarm_2_Callback.Enabled = true;
                        Alarm_2_Callback.Text = parameters.Alarm_2_Callback;
                        Alarm_2_Task.Enabled = false;
                        Alarm_2_Event.Enabled = false;
                    }
                    else
                    {
                        Alarm_2_Action.SelectedIndex = parameters.Alarm_2_Action;
                        Alarm_2_Callback.Enabled = false;
                        Alarm_2_Task.Enabled = true;
                        if (parameters.Number_of_Tasks > parameters.Alarm_2_Task)
                        {
                            Alarm_2_Task.SelectedIndex = parameters.Alarm_2_Task;
                        }
                        if (parameters.Alarm_2_Action == 1)
                        {
                            Alarm_2_Event.Enabled = true;
                        }
                        else
                        {
                            Alarm_2_Event.Enabled = false;
                        }
                        if (Alarm_2_Event.Items.Count > 0)
                        {
                            Int32 Event = (Int32)(Math.Log10(parameters.Alarm_2_Event) / Math.Log10(2));
                            if (Event < Alarm_2_Event.Items.Count)
                                Alarm_2_Event.SelectedIndex = Event;
                        }
                    }
                    break;
                case 3:
                    Alarm_3_Name.Text = parameters.Alarm_3_Name;
                    tabPage_Alarm3.Text = parameters.Alarm_3_Name;
                    if (parameters.Number_of_Counters > parameters.Alarm_3_Counter)
                    {
                        Alarm_3_Counter.SelectedIndex = parameters.Alarm_3_Counter;
                    }
                    if (parameters.Alarm_3_Action == 3)
                    {
                        Alarm_3_Action.SelectedIndex = 2;
                        Alarm_3_Callback.Enabled = true;
                        Alarm_3_Callback.Text = parameters.Alarm_3_Callback;
                        Alarm_3_Task.Enabled = false;
                        Alarm_3_Event.Enabled = false;
                    }
                    else
                    {
                        Alarm_3_Action.SelectedIndex = parameters.Alarm_3_Action;
                        Alarm_3_Callback.Enabled = false;
                        Alarm_3_Task.Enabled = true;
                        if (parameters.Number_of_Tasks > parameters.Alarm_3_Task)
                        {
                            Alarm_3_Task.SelectedIndex = parameters.Alarm_3_Task;
                        }
                        if (parameters.Alarm_3_Action == 1)
                        {
                            Alarm_3_Event.Enabled = true;
                        }
                        else
                        {
                            Alarm_3_Event.Enabled = false;
                        }
                        if (Alarm_3_Event.Items.Count > 0)
                        {
                            Int32 Event = (Int32)(Math.Log10(parameters.Alarm_3_Event) / Math.Log10(2));
                            if (Event < Alarm_3_Event.Items.Count)
                                Alarm_3_Event.SelectedIndex = Event;
                        }
                    }
                    break;
                case 4:
                    Alarm_4_Name.Text = parameters.Alarm_4_Name;
                    tabPage_Alarm4.Text = parameters.Alarm_4_Name;
                    if (parameters.Number_of_Counters > parameters.Alarm_4_Counter)
                    {
                        Alarm_4_Counter.SelectedIndex = parameters.Alarm_4_Counter;
                    }
                    if (parameters.Alarm_4_Action == 3)
                    {
                        Alarm_4_Action.SelectedIndex = 2;
                        Alarm_4_Callback.Enabled = true;
                        Alarm_4_Callback.Text = parameters.Alarm_4_Callback;
                        Alarm_4_Task.Enabled = false;
                        Alarm_4_Event.Enabled = false;
                    }
                    else
                    {
                        Alarm_4_Action.SelectedIndex = parameters.Alarm_4_Action;
                        Alarm_4_Callback.Enabled = false;
                        Alarm_4_Task.Enabled = true;
                        if (parameters.Number_of_Tasks > parameters.Alarm_4_Task)
                        {
                            Alarm_4_Task.SelectedIndex = parameters.Alarm_4_Task;
                        }
                        if (parameters.Alarm_4_Action == 1)
                        {
                            Alarm_4_Event.Enabled = true;
                        }
                        else
                        {
                            Alarm_4_Event.Enabled = false;
                        }
                        if (Alarm_4_Event.Items.Count > 0)
                        {
                            Int32 Event = (Int32)(Math.Log10(parameters.Alarm_4_Event) / Math.Log10(2));
                            if (Event < Alarm_4_Event.Items.Count)
                                Alarm_4_Event.SelectedIndex = Event;
                        }
                    }
                    break;
                case 5:
                    Alarm_5_Name.Text = parameters.Alarm_5_Name;
                    tabPage_Alarm5.Text = parameters.Alarm_5_Name;
                    if (parameters.Number_of_Counters > parameters.Alarm_5_Counter)
                    {
                        Alarm_5_Counter.SelectedIndex = parameters.Alarm_5_Counter;
                    }
                    if (parameters.Alarm_5_Action == 3)
                    {
                        Alarm_5_Action.SelectedIndex = 2;
                        Alarm_5_Callback.Enabled = true;
                        Alarm_5_Callback.Text = parameters.Alarm_5_Callback;
                        Alarm_5_Task.Enabled = false;
                        Alarm_5_Event.Enabled = false;
                    }
                    else
                    {
                        Alarm_5_Action.SelectedIndex = parameters.Alarm_5_Action;
                        Alarm_5_Callback.Enabled = false;
                        Alarm_5_Task.Enabled = true;
                        if (parameters.Number_of_Tasks > parameters.Alarm_5_Task)
                        {
                            Alarm_5_Task.SelectedIndex = parameters.Alarm_5_Task;
                        }
                        if (parameters.Alarm_5_Action == 1)
                        {
                            Alarm_5_Event.Enabled = true;
                        }
                        else
                        {
                            Alarm_5_Event.Enabled = false;
                        }
                        if (Alarm_5_Event.Items.Count > 0)
                        {
                            Int32 Event = (Int32)(Math.Log10(parameters.Alarm_5_Event) / Math.Log10(2));
                            if (Event < Alarm_5_Event.Items.Count)
                                Alarm_5_Event.SelectedIndex = Event;
                        }
                    }
                    break;
                case 6:
                    Alarm_6_Name.Text = parameters.Alarm_6_Name;
                    tabPage_Alarm6.Text = parameters.Alarm_6_Name;
                    if (parameters.Number_of_Counters > parameters.Alarm_6_Counter)
                    {
                        Alarm_6_Counter.SelectedIndex = parameters.Alarm_6_Counter;
                    }
                    if (parameters.Alarm_6_Action == 3)
                    {
                        Alarm_6_Action.SelectedIndex = 2;
                        Alarm_6_Callback.Enabled = true;
                        Alarm_6_Callback.Text = parameters.Alarm_6_Callback;
                        Alarm_6_Task.Enabled = false;
                        Alarm_6_Event.Enabled = false;
                    }
                    else
                    {
                        Alarm_6_Action.SelectedIndex = parameters.Alarm_6_Action;
                        Alarm_6_Callback.Enabled = false;
                        Alarm_6_Task.Enabled = true;
                        if (parameters.Number_of_Tasks > parameters.Alarm_6_Task)
                        {
                            Alarm_6_Task.SelectedIndex = parameters.Alarm_6_Task;
                        }
                        if (parameters.Alarm_6_Action == 1)
                        {
                            Alarm_6_Event.Enabled = true;
                        }
                        else
                        {
                            Alarm_6_Event.Enabled = false;
                        }
                        if (Alarm_6_Event.Items.Count > 0)
                        {
                            Int32 Event = (Int32)(Math.Log10(parameters.Alarm_6_Event) / Math.Log10(2));
                            if (Event < Alarm_6_Event.Items.Count)
                                Alarm_6_Event.SelectedIndex = Event;
                        }
                    }
                    break;
                case 7:
                    Alarm_7_Name.Text = parameters.Alarm_7_Name;
                    tabPage_Alarm7.Text = parameters.Alarm_7_Name;
                    if (parameters.Number_of_Counters > parameters.Alarm_7_Counter)
                    {
                        Alarm_7_Counter.SelectedIndex = parameters.Alarm_7_Counter;
                    }
                    if (parameters.Alarm_7_Action == 3)
                    {
                        Alarm_7_Action.SelectedIndex = 2;
                        Alarm_7_Callback.Enabled = true;
                        Alarm_7_Callback.Text = parameters.Alarm_7_Callback;
                        Alarm_7_Task.Enabled = false;
                        Alarm_7_Event.Enabled = false;
                    }
                    else
                    {
                        Alarm_7_Action.SelectedIndex = parameters.Alarm_7_Action;
                        Alarm_7_Callback.Enabled = false;
                        Alarm_7_Task.Enabled = true;
                        if (parameters.Number_of_Tasks > parameters.Alarm_7_Task)
                        {
                            Alarm_7_Task.SelectedIndex = parameters.Alarm_7_Task;
                        }
                        if (parameters.Alarm_7_Action == 1)
                        {
                            Alarm_7_Event.Enabled = true;
                        }
                        else
                        {
                            Alarm_7_Event.Enabled = false;
                        }
                        if (Alarm_7_Event.Items.Count > 0)
                        {
                            Int32 Event = (Int32)(Math.Log10(parameters.Alarm_7_Event) / Math.Log10(2));
                            if (Event < Alarm_7_Event.Items.Count)
                                Alarm_7_Event.SelectedIndex = Event;
                        }
                    }
                    break;
                case 8:
                    Alarm_8_Name.Text = parameters.Alarm_8_Name;
                    tabPage_Alarm8.Text = parameters.Alarm_8_Name;
                    if (parameters.Number_of_Counters > parameters.Alarm_8_Counter)
                    {
                        Alarm_8_Counter.SelectedIndex = parameters.Alarm_8_Counter;
                    }
                    if (parameters.Alarm_8_Action == 3)
                    {
                        Alarm_8_Action.SelectedIndex = 2;
                        Alarm_8_Callback.Enabled = true;
                        Alarm_8_Callback.Text = parameters.Alarm_8_Callback;
                        Alarm_8_Task.Enabled = false;
                        Alarm_8_Event.Enabled = false;
                    }
                    else
                    {
                        Alarm_8_Action.SelectedIndex = parameters.Alarm_8_Action;
                        Alarm_8_Callback.Enabled = false;
                        Alarm_8_Task.Enabled = true;
                        if (parameters.Number_of_Tasks > parameters.Alarm_8_Task)
                        {
                            Alarm_8_Task.SelectedIndex = parameters.Alarm_8_Task;
                        }
                        if (parameters.Alarm_8_Action == 1)
                        {
                            Alarm_8_Event.Enabled = true;
                        }
                        else
                        {
                            Alarm_8_Event.Enabled = false;
                        }
                        if (Alarm_8_Event.Items.Count > 0)
                        {
                            Int32 Event = (Int32)(Math.Log10(parameters.Alarm_8_Event) / Math.Log10(2));
                            if (Event < Alarm_8_Event.Items.Count)
                                Alarm_8_Event.SelectedIndex = Event;
                        }
                    }
                    break;
                default:
                    break;
            }
            return;
        }
        

        private TabPage getAlarmPage(Int32 Page)
        {
            switch (Page)
            {
                case 1:
                    return tabPage_Alarm1;
                case 2:
                    return tabPage_Alarm2;
                case 3:
                    return tabPage_Alarm3;
                case 4:
                    return tabPage_Alarm4;
                case 5:
                    return tabPage_Alarm5;
                case 6:
                    return tabPage_Alarm6;
                case 7:
                    return tabPage_Alarm7;
                case 8:
                    return tabPage_Alarm8;
                default:
                    return tabPage_Alarm1;
            }
        }

        private TabPage getCounterPage(Int32 Page)
        {
            switch(Page)
            {
                case 1:
                    return tabPage_Counter1;
                case 2:
                    return tabPage_Counter2;
                case 3:
                    return tabPage_Counter3;
                case 4:
                    return tabPage_Counter4;
                default:
                    return tabPage_Counter1;
            }
        }
        private void Counter_Set_Values(Int32 Counter, string Name, Int32 Min, Int32 Max, Int32 Tick)
        {
            switch(Counter)
            {
                case 1:
                    Counter_1_Name.Text = Name;
                    tabPage_Counter1.Text = Name;
                    Counter_1_Min.Value = Min;
                    Counter_1_Max.Value = Max;
                    Counter_1_Tick.Value = Tick;
                    break;
                case 2:
                    Counter_2_Name.Text = Name;
                    tabPage_Counter2.Text = Name;
                    Counter_2_Min.Value = Min;
                    Counter_2_Max.Value = Max;
                    Counter_2_Tick.Value = Tick;
                    break;
                case 3:
                    Counter_3_Name.Text = Name;
                    tabPage_Counter3.Text = Name;
                    Counter_3_Min.Value = Min;
                    Counter_3_Max.Value = Max;
                    Counter_3_Tick.Value = Tick;
                    break;
                case 4:
                    Counter_4_Name.Text = Name;
                    tabPage_Counter4.Text = Name;
                    Counter_4_Min.Value = Min;
                    Counter_4_Max.Value = Max;
                    Counter_4_Tick.Value = Tick;
                    break;
                default:
                    break;
            }
            return;
        }

        public void updateAlarms()
        {
            for(Int32 i = 1; i <= parameters.Number_of_Alarms; i++)
            {
                Alarm_RefreshTabValues(i);
            }
        }

        private void button_AddAlarm_Click(object sender, EventArgs e)
        {
            Int32 Index = parameters.Number_of_Alarms;
            if(parameters.Number_of_Counters == 0)
            {
                button_AddAlarm.Enabled = false;
                return;
            }
            if (Index < 8)
            {
                tabControl_Alarms.TabPages.Add(getAlarmPage(Index + 1));
                Alarm_RefreshTabValues(Index + 1);
                Alarm_Set_Values(Index + 1);
                parameters.Number_of_Alarms++;
                if (parameters.Number_of_Alarms > 7)
                {
                    button_AddAlarm.Enabled = false;
                }
                button_RemoveAlarm.Enabled = true;
            }

        }

        private void button_RemoveAlarm_Click(object sender, EventArgs e)
        {
            Int32 Index = parameters.Number_of_Alarms - 1;
            Int32 AlarmtoRemove = tabControl_Alarms.SelectedIndex;
            if ((Index >= 0) && (AlarmtoRemove != -1))
            {
                for(Int32 i = AlarmtoRemove; i <= Index; i++)
                {
                    if(i == Index)
                    {
                        tabControl_Alarms.TabPages.RemoveAt(Index);
                        break;
                    }
                    if(i == 0)
                    {
                        parameters.Alarm_1_Action = parameters.Alarm_2_Action;
                        parameters.Alarm_1_Callback = parameters.Alarm_2_Callback;
                        parameters.Alarm_1_Counter = parameters.Alarm_2_Counter;
                        parameters.Alarm_1_Event = parameters.Alarm_2_Event;
                        parameters.Alarm_1_Name = parameters.Alarm_2_Name;
                        parameters.Alarm_1_Task = parameters.Alarm_2_Task;
                    }
                    else if (i == 1)
                    {
                        parameters.Alarm_2_Action = parameters.Alarm_3_Action;
                        parameters.Alarm_2_Callback = parameters.Alarm_3_Callback;
                        parameters.Alarm_2_Counter = parameters.Alarm_3_Counter;
                        parameters.Alarm_2_Event = parameters.Alarm_3_Event;
                        parameters.Alarm_2_Name = parameters.Alarm_3_Name;
                        parameters.Alarm_2_Task = parameters.Alarm_3_Task;
                    }
                    else if (i == 2)
                    {
                        parameters.Alarm_3_Action = parameters.Alarm_4_Action;
                        parameters.Alarm_3_Callback = parameters.Alarm_4_Callback;
                        parameters.Alarm_3_Counter = parameters.Alarm_4_Counter;
                        parameters.Alarm_3_Event = parameters.Alarm_4_Event;
                        parameters.Alarm_3_Name = parameters.Alarm_4_Name;
                        parameters.Alarm_3_Task = parameters.Alarm_4_Task;
                    }
                    else if (i == 3)
                    {
                        parameters.Alarm_4_Action = parameters.Alarm_5_Action;
                        parameters.Alarm_4_Callback = parameters.Alarm_5_Callback;
                        parameters.Alarm_4_Counter = parameters.Alarm_5_Counter;
                        parameters.Alarm_4_Event = parameters.Alarm_5_Event;
                        parameters.Alarm_4_Name = parameters.Alarm_5_Name;
                        parameters.Alarm_4_Task = parameters.Alarm_5_Task;
                    }
                    else if (i == 4)
                    {
                        parameters.Alarm_5_Action = parameters.Alarm_6_Action;
                        parameters.Alarm_5_Callback = parameters.Alarm_6_Callback;
                        parameters.Alarm_5_Counter = parameters.Alarm_6_Counter;
                        parameters.Alarm_5_Event = parameters.Alarm_6_Event;
                        parameters.Alarm_5_Name = parameters.Alarm_6_Name;
                        parameters.Alarm_5_Task = parameters.Alarm_6_Task;
                    }
                    else if (i == 5)
                    {
                        parameters.Alarm_6_Action = parameters.Alarm_7_Action;
                        parameters.Alarm_6_Callback = parameters.Alarm_7_Callback;
                        parameters.Alarm_6_Counter = parameters.Alarm_7_Counter;
                        parameters.Alarm_6_Event = parameters.Alarm_7_Event;
                        parameters.Alarm_6_Name = parameters.Alarm_7_Name;
                        parameters.Alarm_6_Task = parameters.Alarm_7_Task;
                    }
                    else if (i == 6)
                    {
                        parameters.Alarm_7_Action = parameters.Alarm_8_Action;
                        parameters.Alarm_7_Callback = parameters.Alarm_8_Callback;
                        parameters.Alarm_7_Counter = parameters.Alarm_8_Counter;
                        parameters.Alarm_7_Event = parameters.Alarm_8_Event;
                        parameters.Alarm_7_Name = parameters.Alarm_8_Name;
                        parameters.Alarm_7_Task = parameters.Alarm_8_Task;
                    }
                    Alarm_Set_Values(i+1);
                }
                parameters.Number_of_Alarms--;
                if (parameters.Number_of_Alarms == 0)
                {
                    button_RemoveAlarm.Enabled = false;
                }
                button_AddAlarm.Enabled = true;
            }
        }

        private void Counter_1_Name_TextChanged(object sender, EventArgs e)
        {
            string name = Counter_1_Name.Text;
            name.Replace(' ', '_');
            Counter_1_Name.Text = name;
            tabPage_Counter1.Text = name;
            parameters.Counter_1_Name = name;
            updateAlarms();
            Counter_1_Name.Select(Counter_1_Name.Text.Length, 0);
        }

        private void Counter_1_Tick_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_1_Tick = (Int32)Counter_1_Tick.Value;
        }

        private void Counter_1_Min_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_1_Min_Cycle = (Int32)Counter_1_Min.Value;
        }

        private void Counter_1_Max_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_1_Max_Value = (Int32)Counter_1_Max.Value;
        }

        private void Counter_2_Name_TextChanged(object sender, EventArgs e)
        {
            string name = Counter_2_Name.Text;
            name.Replace(' ', '_');
            Counter_2_Name.Text = name;
            tabPage_Counter2.Text = name;
            parameters.Counter_2_Name = name;
            updateAlarms();
            Counter_2_Name.Select(Counter_2_Name.Text.Length, 0);
        }

        private void Counter_2_Tick_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_2_Tick = (Int32)Counter_2_Tick.Value;
        }

        private void Counter_2_Min_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_2_Min_Cycle = (Int32)Counter_2_Min.Value;
        }

        private void Counter_2_Max_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_2_Max_Value = (Int32)Counter_2_Max.Value;
        }

        private void Counter_3_Name_TextChanged(object sender, EventArgs e)
        {
            string name = Counter_3_Name.Text;
            name.Replace(' ', '_');
            Counter_3_Name.Text = name;
            tabPage_Counter3.Text = name;
            parameters.Counter_3_Name = name;
            updateAlarms();
            Counter_3_Name.Select(Counter_3_Name.Text.Length, 0);
        }

        private void Counter_3_Tick_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_3_Tick = (Int32)Counter_3_Tick.Value;
        }

        private void Counter_3_Min_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_3_Min_Cycle = (Int32)Counter_3_Min.Value;
        }

        private void Counter_3_Max_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_3_Max_Value = (Int32)Counter_3_Max.Value;
        }

        private void Counter_4_Name_TextChanged(object sender, EventArgs e)
        {
            string name = Counter_4_Name.Text;
            name.Replace(' ', '_');
            Counter_4_Name.Text = name;
            tabPage_Counter4.Text = name;
            parameters.Counter_4_Name = name;
            updateAlarms();
            Counter_4_Name.Select(Counter_4_Name.Text.Length, 0);
        }

        private void Counter_4_Tick_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_4_Tick = (Int32)Counter_4_Tick.Value;
        }

        private void Counter_4_Min_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_4_Min_Cycle = (Int32)Counter_4_Min.Value;
        }

        private void Counter_4_Max_ValueChanged(object sender, EventArgs e)
        {
            parameters.Counter_4_Max_Value = (Int32)Counter_4_Max.Value;
        }

        private void button_AddCounter_Click(object sender, EventArgs e)
        {
            Int32 Index = tabControl_Counters.TabCount;
            if (parameters.Number_of_Alarms < 8)
                button_AddAlarm.Enabled = true;
            if (Index < 4)
            {
                tabControl_Counters.TabPages.Add(getCounterPage(Index + 1));
                Counter_Set_Values(Index + 1, parameters.getCounterName(Index + 1), parameters.getCounterMin(Index + 1), parameters.getCounterMax(Index + 1), parameters.getCounterTick(Index + 1));
                parameters.Number_of_Counters++;
                if(Index == 3)
                {
                    button_AddCounter.Enabled = false;
                }
                button_RemoveCounter.Enabled = true;
                updateAlarms();
            }
        }

        private void button_RemoveCounter_Click(object sender, EventArgs e)
        {
            Int32 Index = tabControl_Counters.TabCount - 1;
            Int32 TabtoRemove = tabControl_Counters.SelectedIndex;
            if ((Index >= 0) && (TabtoRemove != -1))
            {
                for(Int32 i = TabtoRemove; i <= Index; i++)
                {
                    if (i == Index)
                    {
                        tabControl_Counters.TabPages.RemoveAt(Index);
                        break;
                    }
                    if (i == 0)
                    {
                        Counter_Set_Values(1, Counter_2_Name.Text, (Int32)Counter_2_Min.Value, (Int32)Counter_2_Max.Value, (Int32)Counter_2_Tick.Value);
                        tabPage_Counter1.Name = Counter_2_Name.Text;
                    }
                    else if (i == 1)
                    {
                        Counter_Set_Values(2, Counter_3_Name.Text, (Int32)Counter_3_Min.Value, (Int32)Counter_3_Max.Value, (Int32)Counter_3_Tick.Value);
                        tabPage_Counter2.Name = Counter_3_Name.Text;
                    }
                    else if (i == 2)
                    {
                        Counter_Set_Values(3, Counter_4_Name.Text, (Int32)Counter_4_Min.Value, (Int32)Counter_4_Max.Value, (Int32)Counter_4_Tick.Value);
                        tabPage_Counter3.Name = Counter_4_Name.Text;
                    }
                }
                parameters.Number_of_Counters--;
                if (parameters.Number_of_Counters == 0)
                {
                    button_RemoveCounter.Enabled = false;
                }
                button_AddCounter.Enabled = true;
                updateAlarms();
            }
        }

        private void Alarm_1_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_1_Name = Alarm_1_Name.Text;
            tabPage_Alarm1.Text = Alarm_1_Name.Text;
        }

        private void Alarm_1_Callback_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_1_Callback = Alarm_1_Callback.Text;
        }

        private void Alarm_1_Counter_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_1_Counter = Alarm_1_Counter.SelectedIndex;
        }

        private void Alarm_1_Task_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_1_Task = Alarm_1_Task.SelectedIndex;
        }

        private void Alarm_1_Action_SelectedIndexChanged(object sender, EventArgs e)
        {
            Int32 Index = Alarm_1_Action.SelectedIndex;
            if (Index == 0)
            {
                parameters.Alarm_1_Action = Index;
                Alarm_1_Task.Enabled = true;
                Alarm_1_Event.Enabled = false;
                Alarm_1_Callback.Enabled = false;
            }
            else if (Index == 1)
            {
                parameters.Alarm_1_Action = Index;
                Alarm_1_Task.Enabled = true;
                Alarm_1_Event.Enabled = true;
                Alarm_1_Callback.Enabled = false;
            }
            else
            {
                parameters.Alarm_1_Action = 3;
                Alarm_1_Task.Enabled = false;
                Alarm_1_Event.Enabled = false;
                Alarm_1_Callback.Enabled = true;
            }
        }

        private void Alarm_1_Event_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_1_Event = (Int32)Math.Pow(2,Alarm_1_Event.SelectedIndex);
        }

        private void Alarm_2_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_2_Name = Alarm_2_Name.Text;
            tabPage_Alarm2.Text = Alarm_2_Name.Text;
        }

        private void Alarm_2_Callback_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_2_Callback = Alarm_2_Callback.Text;
        }

        private void Alarm_2_Counter_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_2_Counter = Alarm_2_Counter.SelectedIndex;
        }

        private void Alarm_2_Task_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_2_Task = Alarm_2_Task.SelectedIndex;
        }

        private void Alarm_2_Action_SelectedIndexChanged(object sender, EventArgs e)
        {
            Int32 Index = Alarm_2_Action.SelectedIndex;
            if (Index == 0)
            {
                parameters.Alarm_2_Action = Index;
                Alarm_2_Task.Enabled = true;
                Alarm_2_Event.Enabled = false;
                Alarm_2_Callback.Enabled = false;
            }
            else if (Index == 1)
            {
                parameters.Alarm_2_Action = Index;
                Alarm_2_Task.Enabled = true;
                Alarm_2_Event.Enabled = true;
                Alarm_2_Callback.Enabled = false;
            }
            else
            {
                parameters.Alarm_2_Action = 3;
                Alarm_2_Task.Enabled = false;
                Alarm_2_Event.Enabled = false;
                Alarm_2_Callback.Enabled = true;
            }
        }

        private void Alarm_2_Event_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_2_Event = (Int32)Math.Pow(2, Alarm_2_Event.SelectedIndex);
        }

        private void Alarm_3_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_3_Name = Alarm_3_Name.Text;
            tabPage_Alarm3.Text = Alarm_3_Name.Text;
        }

        private void Alarm_3_Callback_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_3_Callback = Alarm_3_Callback.Text;

        }

        private void Alarm_3_Counter_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_3_Counter = Alarm_3_Counter.SelectedIndex;

        }

        private void Alarm_3_Task_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_3_Task = Alarm_3_Task.SelectedIndex;

        }

        private void Alarm_3_Action_SelectedIndexChanged(object sender, EventArgs e)
        {
            Int32 Index = Alarm_3_Action.SelectedIndex;
            if (Index == 0)
            {
                parameters.Alarm_3_Action = Index;
                Alarm_3_Task.Enabled = true;
                Alarm_3_Event.Enabled = false;
                Alarm_3_Callback.Enabled = false;
            }
            else if (Index == 1)
            {
                parameters.Alarm_3_Action = Index;
                Alarm_3_Task.Enabled = true;
                Alarm_3_Event.Enabled = true;
                Alarm_3_Callback.Enabled = false;
            }
            else
            {
                parameters.Alarm_3_Action = 3;
                Alarm_3_Task.Enabled = false;
                Alarm_3_Event.Enabled = false;
                Alarm_3_Callback.Enabled = true;
            }
        }

        private void Alarm_3_Event_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_3_Event = (Int32)Math.Pow(2, Alarm_3_Event.SelectedIndex);

        }

        private void Alarm_4_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_4_Name = Alarm_4_Name.Text;
            tabPage_Alarm4.Text = Alarm_4_Name.Text;
        }

        private void Alarm_4_Callback_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_4_Callback = Alarm_4_Callback.Text;

        }

        private void Alarm_4_Counter_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_4_Counter = Alarm_4_Counter.SelectedIndex;

        }

        private void Alarm_4_Task_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_4_Task = Alarm_4_Task.SelectedIndex;

        }

        private void Alarm_4_Action_SelectedIndexChanged(object sender, EventArgs e)
        {
            Int32 Index = Alarm_4_Action.SelectedIndex;
            if (Index == 0)
            {
                parameters.Alarm_4_Action = Index;
                Alarm_4_Task.Enabled = true;
                Alarm_4_Event.Enabled = false;
                Alarm_4_Callback.Enabled = false;
            }
            else if (Index == 1)
            {
                parameters.Alarm_4_Action = Index;
                Alarm_4_Task.Enabled = true;
                Alarm_4_Event.Enabled = true;
                Alarm_4_Callback.Enabled = false;
            }
            else
            {
                parameters.Alarm_4_Action = 3;
                Alarm_4_Task.Enabled = false;
                Alarm_4_Event.Enabled = false;
                Alarm_4_Callback.Enabled = true;
            }
        }

        private void Alarm_4_Event_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_4_Event = (Int32)Math.Pow(2, Alarm_4_Event.SelectedIndex);

        }

        private void Alarm_5_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_5_Name = Alarm_5_Name.Text;
            tabPage_Alarm5.Text = Alarm_5_Name.Text;
        }

        private void Alarm_5_Callback_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_5_Callback = Alarm_5_Callback.Text;

        }

        private void Alarm_5_Counter_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_5_Counter = Alarm_5_Counter.SelectedIndex;

        }

        private void Alarm_5_Task_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_5_Task = Alarm_5_Task.SelectedIndex;

        }

        private void Alarm_5_Action_SelectedIndexChanged(object sender, EventArgs e)
        {
            Int32 Index = Alarm_5_Action.SelectedIndex;
            if (Index == 0)
            {
                parameters.Alarm_5_Action = Index;
                Alarm_5_Task.Enabled = true;
                Alarm_5_Event.Enabled = false;
                Alarm_5_Callback.Enabled = false;
            }
            else if (Index == 1)
            {
                parameters.Alarm_5_Action = Index;
                Alarm_5_Task.Enabled = true;
                Alarm_5_Event.Enabled = true;
                Alarm_5_Callback.Enabled = false;
            }
            else
            {
                parameters.Alarm_5_Action = 3;
                Alarm_5_Task.Enabled = false;
                Alarm_5_Event.Enabled = false;
                Alarm_5_Callback.Enabled = true;
            }
        }

        private void Alarm_5_Event_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_5_Event = (Int32)Math.Pow(2, Alarm_5_Event.SelectedIndex);

        }

        private void Alarm_6_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_6_Name = Alarm_6_Name.Text;
            tabPage_Alarm6.Text = Alarm_6_Name.Text;
        }

        private void Alarm_6_Callback_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_6_Callback = Alarm_6_Callback.Text;

        }

        private void Alarm_6_Counter_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_6_Counter = Alarm_6_Counter.SelectedIndex;

        }

        private void Alarm_6_Task_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_6_Task = Alarm_6_Task.SelectedIndex;

        }

        private void Alarm_6_Action_SelectedIndexChanged(object sender, EventArgs e)
        {
            Int32 Index = Alarm_6_Action.SelectedIndex;
            if (Index == 0)
            {
                parameters.Alarm_6_Action = Index;
                Alarm_6_Task.Enabled = true;
                Alarm_6_Event.Enabled = false;
                Alarm_6_Callback.Enabled = false;
            }
            else if (Index == 1)
            {
                parameters.Alarm_6_Action = Index;
                Alarm_6_Task.Enabled = true;
                Alarm_6_Event.Enabled = true;
                Alarm_6_Callback.Enabled = false;
            }
            else
            {
                parameters.Alarm_6_Action = 3;
                Alarm_6_Task.Enabled = false;
                Alarm_6_Event.Enabled = false;
                Alarm_6_Callback.Enabled = true;
            }
        }

        private void Alarm_6_Event_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_6_Event = (Int32)Math.Pow(2, Alarm_6_Event.SelectedIndex);

        }

        private void Alarm_7_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_7_Name = Alarm_7_Name.Text;
            tabPage_Alarm7.Text = Alarm_7_Name.Text;
        }

        private void Alarm_7_Callback_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_7_Callback = Alarm_7_Callback.Text;

        }

        private void Alarm_7_Counter_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_7_Counter = Alarm_7_Counter.SelectedIndex;

        }

        private void Alarm_7_Task_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_7_Task = Alarm_7_Task.SelectedIndex;

        }

        private void Alarm_7_Action_SelectedIndexChanged(object sender, EventArgs e)
        {
            Int32 Index = Alarm_7_Action.SelectedIndex;
            if (Index == 0)
            {
                parameters.Alarm_7_Action = Index;
                Alarm_7_Task.Enabled = true;
                Alarm_7_Event.Enabled = false;
                Alarm_7_Callback.Enabled = false;
            }
            else if (Index == 1)
            {
                parameters.Alarm_7_Action = Index;
                Alarm_7_Task.Enabled = true;
                Alarm_7_Event.Enabled = true;
                Alarm_7_Callback.Enabled = false;
            }
            else
            {
                parameters.Alarm_7_Action = 3;
                Alarm_7_Task.Enabled = false;
                Alarm_7_Event.Enabled = false;
                Alarm_7_Callback.Enabled = true;
            }
        }

        private void Alarm_7_Event_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_7_Event = (Int32)Math.Pow(2, Alarm_7_Event.SelectedIndex);
        }

        private void Alarm_8_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_8_Name = Alarm_8_Name.Text;
            tabPage_Alarm8.Text = Alarm_8_Name.Text;
        }

        private void Alarm_8_Callback_TextChanged(object sender, EventArgs e)
        {
            parameters.Alarm_8_Callback = Alarm_8_Callback.Text;

        }

        private void Alarm_8_Counter_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_8_Counter = Alarm_8_Counter.SelectedIndex;

        }

        private void Alarm_8_Task_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_8_Task = Alarm_8_Task.SelectedIndex;

        }

        private void Alarm_8_Action_SelectedIndexChanged(object sender, EventArgs e)
        {
            Int32 Index = Alarm_8_Action.SelectedIndex;
            if (Index == 0)
            {
                parameters.Alarm_8_Action = Index;
                Alarm_8_Task.Enabled = true;
                Alarm_8_Event.Enabled = false;
                Alarm_8_Callback.Enabled = false;
            }
            else if (Index == 1)
            {
                parameters.Alarm_8_Action = Index;
                Alarm_8_Task.Enabled = true;
                Alarm_8_Event.Enabled = true;
                Alarm_8_Callback.Enabled = false;
            }
            else
            {
                parameters.Alarm_8_Action = 3;
                Alarm_8_Task.Enabled = false;
                Alarm_8_Event.Enabled = false;
                Alarm_8_Callback.Enabled = true;
            }
        }

        private void Alarm_8_Event_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Alarm_8_Event = (Int32)Math.Pow(2, Alarm_8_Event.SelectedIndex);

        }
    }
}
