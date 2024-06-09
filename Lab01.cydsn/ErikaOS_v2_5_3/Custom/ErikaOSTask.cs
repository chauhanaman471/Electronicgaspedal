using System;
using System.Windows.Forms;

namespace ErikaOS_v2_5_3
{
    public partial class ErikaOSTask : UserControl
    {
        private ErikaOSParameters parameters;

        public ErikaOSTask(ErikaOSParameters parameters)
        {
            InitializeComponent();
            this.parameters = parameters;
            UpdateForm();
        }

        //Update Form Function
        // Updates form with saved parameters when the GUI is opened.
        public void UpdateForm()
        {
            tabControl_Tasks.TabPages.Clear();

            if(parameters.Number_of_Tasks > 0)
                tabControl_Tasks.TabPages.Add(tabPage_Task1);
            if (parameters.Number_of_Tasks > 1)
                tabControl_Tasks.TabPages.Add(tabPage_Task2);
            if (parameters.Number_of_Tasks > 2)
                tabControl_Tasks.TabPages.Add(tabPage_Task3);
            if (parameters.Number_of_Tasks > 3)
                tabControl_Tasks.TabPages.Add(tabPage_Task4);
            if (parameters.Number_of_Tasks > 4)
                tabControl_Tasks.TabPages.Add(tabPage_Task5);
            if (parameters.Number_of_Tasks > 5)
                tabControl_Tasks.TabPages.Add(tabPage_Task6);
            if (parameters.Number_of_Tasks > 6)
                tabControl_Tasks.TabPages.Add(tabPage_Task7);
            if (parameters.Number_of_Tasks > 7)
                tabControl_Tasks.TabPages.Add(tabPage_Task8);

            textBox_Task1Name.Text = parameters.Task_1_Name;
            tabPage_Task1.Text = parameters.Task_1_Name;

            checkBox_Task1Auto.Checked = parameters.Task_1_Autostart;

            if (parameters.Task_1_Stack == 2)
                checkBox_Task1Stack.Checked = true;
            else
            {
                checkBox_Task1Stack.Checked = false;
                numericUpDown_Task1StackSize.Enabled = false;
            }
            numericUpDown_Task1StackSize.Value = parameters.Task_1_Stack_Size;

            numericUpDown_Task1Activation.Value = parameters.Task_1_Activation;

            comboBox_Task1Schedule.SelectedIndex = parameters.Task_1_Schedule;

            switch(parameters.Task_1_Priority)
            {
                case 0:
                    comboBox_Task1Priority.SelectedIndex = 0;
                    break;
                case 1:
                    comboBox_Task1Priority.SelectedIndex = 1;
                    break;
                case 2:
                    comboBox_Task1Priority.SelectedIndex = 2;
                    break;
                case 4:
                    comboBox_Task1Priority.SelectedIndex = 3;
                    break;
                case 8:
                    comboBox_Task1Priority.SelectedIndex = 4;
                    break;
                case 16:
                    comboBox_Task1Priority.SelectedIndex = 5;
                    break;
                case 32:
                    comboBox_Task1Priority.SelectedIndex = 6;
                    break;
                case 64:
                    comboBox_Task1Priority.SelectedIndex = 7;
                    break;
                case 128:
                    comboBox_Task1Priority.SelectedIndex = 8;
                    break;
                default:
                    comboBox_Task1Priority.SelectedIndex = 0;
                    parameters.Task_1_Priority = 0;
                    break;
            }

            checkedListBox_Task1.Items.Clear();
            for(UInt16 i = 1; i <= parameters.Number_of_Events; i++)
            {
                checkedListBox_Task1.Items.Add(parameters.getErikaEventName(i), false);
            }

            Int32[] eventArray = new Int32[8];
            Byte Index = 0;
            Int32[] counterArray = new Int32[8];
            Int32 counter = 0;
            foreach (object Item in checkedListBox_Task1.Items)
            {
               
                Int32 EventValue = (Int32)Math.Pow(2, (checkedListBox_Task1.Items.IndexOf(Item)));
                for (Int32 i = 0; i < parameters.Task_1_Number_Events; i++)
                {
                    if (EventValue == parameters.getTaskEvent(1,(ushort)(i+1)))
                    {
                        eventArray[Index] = EventValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task1.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskEvent(1, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_1_Number_Events = Index;

            checkedListBox_Task2.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
            {
                checkedListBox_Task2.Items.Add(parameters.getErikaEventName(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task2.Items)
            {

                Int32 EventValue = (Int32)Math.Pow(2, (checkedListBox_Task2.Items.IndexOf(Item)));
                for (Int32 i = 0; i < parameters.Task_2_Number_Events; i++)
                {
                    if (EventValue == parameters.getTaskEvent(2, (ushort)(i + 1)))
                    {
                        eventArray[Index] = EventValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task2.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskEvent(2, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_2_Number_Events = Index;
            
            checkedListBox_Task3.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
            {
                checkedListBox_Task3.Items.Add(parameters.getErikaEventName(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task3.Items)
            {

                Int32 EventValue = (Int32)Math.Pow(2, (checkedListBox_Task3.Items.IndexOf(Item)));
                for (Int32 i = 0; i < parameters.Task_3_Number_Events; i++)
                {
                    if (EventValue == parameters.getTaskEvent(3, (ushort)(i + 1)))
                    {
                        eventArray[Index] = EventValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task3.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskEvent(3, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_3_Number_Events = Index;

            checkedListBox_Task4.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
            {
                checkedListBox_Task4.Items.Add(parameters.getErikaEventName(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task4.Items)
            {

                Int32 EventValue = (Int32)Math.Pow(2, (checkedListBox_Task4.Items.IndexOf(Item)));
                for (Int32 i = 0; i < parameters.Task_4_Number_Events; i++)
                {
                    if (EventValue == parameters.getTaskEvent(4, (ushort)(i + 1)))
                    {
                        eventArray[Index] = EventValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task4.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskEvent(4, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_4_Number_Events = Index;

            checkedListBox_Task5.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
            {
                checkedListBox_Task5.Items.Add(parameters.getErikaEventName(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task5.Items)
            {

                Int32 EventValue = (Int32)Math.Pow(2, (checkedListBox_Task5.Items.IndexOf(Item)));
                for (Int32 i = 0; i < parameters.Task_5_Number_Events; i++)
                {
                    if (EventValue == parameters.getTaskEvent(5, (ushort)(i + 1)))
                    {
                        eventArray[Index] = EventValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task5.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskEvent(5, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_5_Number_Events = Index;

            checkedListBox_Task6.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
            {
                checkedListBox_Task6.Items.Add(parameters.getErikaEventName(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task6.Items)
            {

                Int32 EventValue = (Int32)Math.Pow(2, (checkedListBox_Task6.Items.IndexOf(Item)));
                for (Int32 i = 0; i < parameters.Task_6_Number_Events; i++)
                {
                    if (EventValue == parameters.getTaskEvent(6, (ushort)(i + 1)))
                    {
                        eventArray[Index] = EventValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task6.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskEvent(6, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_6_Number_Events = Index;

            checkedListBox_Task7.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
            {
                checkedListBox_Task7.Items.Add(parameters.getErikaEventName(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task7.Items)
            {

                Int32 EventValue = (Int32)Math.Pow(2, (checkedListBox_Task7.Items.IndexOf(Item)));
                for (Int32 i = 0; i < parameters.Task_7_Number_Events; i++)
                {
                    if (EventValue == parameters.getTaskEvent(7, (ushort)(i + 1)))
                    {
                        eventArray[Index] = EventValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task7.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskEvent(7, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_7_Number_Events = Index;

            checkedListBox_Task8.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Events; i++)
            {
                checkedListBox_Task8.Items.Add(parameters.getErikaEventName(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task8.Items)
            {

                Int32 EventValue = (Int32)Math.Pow(2, (checkedListBox_Task8.Items.IndexOf(Item)));
                for (Int32 i = 0; i < parameters.Task_8_Number_Events; i++)
                {
                    if (EventValue == parameters.getTaskEvent(8, (ushort)(i + 1)))
                    {
                        eventArray[Index] = EventValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task8.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskEvent(8, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_8_Number_Events = Index;

            //--

            checkedListBox_Task1_Resource.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Resources; i++)
            {
                checkedListBox_Task1_Resource.Items.Add(parameters.getErikaResource(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task1_Resource.Items)
            {
                Int32 ResourceValue = checkedListBox_Task1_Resource.Items.IndexOf(Item) + 1;
                for (Int32 i = 0; i < parameters.Task_1_Number_Resources; i++)
                {
                    if (ResourceValue == parameters.getTaskResource(1, (ushort)(i + 1)))
                    {
                        eventArray[Index] = ResourceValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task1_Resource.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskResource(1, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_1_Number_Resources = Index;

            checkedListBox_Task2_Resource.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Resources; i++)
            {
                checkedListBox_Task2_Resource.Items.Add(parameters.getErikaResource(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task2_Resource.Items)
            {
                Int32 ResourceValue = checkedListBox_Task2_Resource.Items.IndexOf(Item) + 1;
                for (Int32 i = 0; i < parameters.Task_2_Number_Resources; i++)
                {
                    if (ResourceValue == parameters.getTaskResource(2, (ushort)(i + 1)))
                    {
                        eventArray[Index] = ResourceValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task2_Resource.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskResource(2, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_2_Number_Resources = Index;

            checkedListBox_Task3_Resource.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Resources; i++)
            {
                checkedListBox_Task3_Resource.Items.Add(parameters.getErikaResource(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task3_Resource.Items)
            {
                Int32 ResourceValue = checkedListBox_Task3_Resource.Items.IndexOf(Item) + 1;
                for (Int32 i = 0; i < parameters.Task_3_Number_Resources; i++)
                {
                    if (ResourceValue == parameters.getTaskResource(3, (ushort)(i + 1)))
                    {
                        eventArray[Index] = ResourceValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task3_Resource.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskResource(3, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_3_Number_Resources = Index;

            checkedListBox_Task4_Resource.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Resources; i++)
            {
                checkedListBox_Task4_Resource.Items.Add(parameters.getErikaResource(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task4_Resource.Items)
            {
                Int32 ResourceValue = checkedListBox_Task4_Resource.Items.IndexOf(Item) + 1;
                for (Int32 i = 0; i < parameters.Task_4_Number_Resources; i++)
                {
                    if (ResourceValue == parameters.getTaskResource(4, (ushort)(i + 1)))
                    {
                        eventArray[Index] = ResourceValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task4_Resource.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskResource(4, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_4_Number_Resources = Index;

            checkedListBox_Task5_Resource.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Resources; i++)
            {
                checkedListBox_Task5_Resource.Items.Add(parameters.getErikaResource(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task5_Resource.Items)
            {
                Int32 ResourceValue = checkedListBox_Task5_Resource.Items.IndexOf(Item) + 1;
                for (Int32 i = 0; i < parameters.Task_5_Number_Resources; i++)
                {
                    if (ResourceValue == parameters.getTaskResource(5, (ushort)(i + 1)))
                    {
                        eventArray[Index] = ResourceValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task5_Resource.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskResource(5, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_5_Number_Resources = Index;

            checkedListBox_Task6_Resource.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Resources; i++)
            {
                checkedListBox_Task6_Resource.Items.Add(parameters.getErikaResource(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task6_Resource.Items)
            {
                Int32 ResourceValue = checkedListBox_Task6_Resource.Items.IndexOf(Item) + 1;
                for (Int32 i = 0; i < parameters.Task_6_Number_Resources; i++)
                {
                    if (ResourceValue == parameters.getTaskResource(6, (ushort)(i + 1)))
                    {
                        eventArray[Index] = ResourceValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task6_Resource.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskResource(6, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_6_Number_Resources = Index;

            checkedListBox_Task7_Resource.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Resources; i++)
            {
                checkedListBox_Task7_Resource.Items.Add(parameters.getErikaResource(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task7_Resource.Items)
            {
                Int32 ResourceValue = checkedListBox_Task7_Resource.Items.IndexOf(Item) + 1;
                for (Int32 i = 0; i < parameters.Task_7_Number_Resources; i++)
                {
                    if (ResourceValue == parameters.getTaskResource(7, (ushort)(i + 1)))
                    {
                        eventArray[Index] = ResourceValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task7_Resource.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskResource(7, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_7_Number_Resources = Index;

            checkedListBox_Task8_Resource.Items.Clear();
            for (UInt16 i = 1; i <= parameters.Number_of_Resources; i++)
            {
                checkedListBox_Task8_Resource.Items.Add(parameters.getErikaResource(i), false);
            }

            Index = 0;
            counter = 0;

            foreach (object Item in checkedListBox_Task8_Resource.Items)
            {
                Int32 ResourceValue = checkedListBox_Task8_Resource.Items.IndexOf(Item) + 1;
                for (Int32 i = 0; i < parameters.Task_8_Number_Resources; i++)
                {
                    if (ResourceValue == parameters.getTaskResource(8, (ushort)(i + 1)))
                    {
                        eventArray[Index] = ResourceValue;
                        counterArray[Index] = counter;
                        Index++;
                        break;
                    }
                }
                counter++;
            }
            for (Int32 i = 0; i < Index; i++)
            {
                checkedListBox_Task8_Resource.SetItemChecked(counterArray[i], true);
            }
            for (Int32 i = 0; i < Index; i++)
            {
                parameters.setTaskResource(8, (ushort)(i + 1), eventArray[i]);
            }
            parameters.Task_8_Number_Resources = Index;

            //--
            textBox_Task2Name.Text = parameters.Task_2_Name;
            tabPage_Task2.Text = parameters.Task_2_Name;

            checkBox_Task2Auto.Checked = parameters.Task_2_Autostart;

            if (parameters.Task_2_Stack == 2)
                checkBox_Task2Stack.Checked = true;
            else
            {
                checkBox_Task2Stack.Checked = false;
                numericUpDown_Task2StackSize.Enabled = false;
            }
            numericUpDown_Task2StackSize.Value = parameters.Task_2_Stack_Size;

            numericUpDown_Task2Activation.Value = parameters.Task_2_Activation;

            comboBox_Task2Schedule.SelectedIndex = parameters.Task_2_Schedule;

            switch (parameters.Task_2_Priority)
            {
                case 0:
                    comboBox_Task2Priority.SelectedIndex = 0;
                    break;
                case 1:
                    comboBox_Task2Priority.SelectedIndex = 1;
                    break;
                case 2:
                    comboBox_Task2Priority.SelectedIndex = 2;
                    break;
                case 4:
                    comboBox_Task2Priority.SelectedIndex = 3;
                    break;
                case 8:
                    comboBox_Task2Priority.SelectedIndex = 4;
                    break;
                case 16:
                    comboBox_Task2Priority.SelectedIndex = 5;
                    break;
                case 32:
                    comboBox_Task2Priority.SelectedIndex = 6;
                    break;
                case 64:
                    comboBox_Task2Priority.SelectedIndex = 7;
                    break;
                case 128:
                    comboBox_Task2Priority.SelectedIndex = 8;
                    break;
                default:
                    comboBox_Task2Priority.SelectedIndex = 0;
                    parameters.Task_2_Priority = 0;
                    break;
            }

            textBox_Task3Name.Text = parameters.Task_3_Name;
            tabPage_Task3.Text = parameters.Task_3_Name;

            checkBox_Task3Auto.Checked = parameters.Task_3_Autostart;

            if (parameters.Task_3_Stack == 2)
                checkBox_Task3Stack.Checked = true;
            else
            {
                checkBox_Task3Stack.Checked = false;
                numericUpDown_Task3StackSize.Enabled = false;
            }
            numericUpDown_Task3StackSize.Value = parameters.Task_3_Stack_Size;

            numericUpDown_Task3Activation.Value = parameters.Task_3_Activation;

            comboBox_Task3Schedule.SelectedIndex = parameters.Task_3_Schedule;

            switch (parameters.Task_3_Priority)
            {
                case 0:
                    comboBox_Task3Priority.SelectedIndex = 0;
                    break;
                case 1:
                    comboBox_Task3Priority.SelectedIndex = 1;
                    break;
                case 2:
                    comboBox_Task3Priority.SelectedIndex = 2;
                    break;
                case 4:
                    comboBox_Task3Priority.SelectedIndex = 3;
                    break;
                case 8:
                    comboBox_Task3Priority.SelectedIndex = 4;
                    break;
                case 16:
                    comboBox_Task3Priority.SelectedIndex = 5;
                    break;
                case 32:
                    comboBox_Task3Priority.SelectedIndex = 6;
                    break;
                case 64:
                    comboBox_Task3Priority.SelectedIndex = 7;
                    break;
                case 128:
                    comboBox_Task3Priority.SelectedIndex = 8;
                    break;
                default:
                    comboBox_Task3Priority.SelectedIndex = 0;
                    parameters.Task_3_Priority = 0;
                    break;
            }

            textBox_Task4Name.Text = parameters.Task_4_Name;
            tabPage_Task4.Text = parameters.Task_4_Name;

            checkBox_Task4Auto.Checked = parameters.Task_4_Autostart;

            if (parameters.Task_4_Stack == 2)
                checkBox_Task4Stack.Checked = true;
            else
            {
                checkBox_Task4Stack.Checked = false;
                numericUpDown_Task4StackSize.Enabled = false;
            }
            numericUpDown_Task4StackSize.Value = parameters.Task_4_Stack_Size;

            numericUpDown_Task4Activation.Value = parameters.Task_4_Activation;

            comboBox_Task4Schedule.SelectedIndex = parameters.Task_4_Schedule;

            switch (parameters.Task_4_Priority)
            {
                case 0:
                    comboBox_Task4Priority.SelectedIndex = 0;
                    break;
                case 1:
                    comboBox_Task4Priority.SelectedIndex = 1;
                    break;
                case 2:
                    comboBox_Task4Priority.SelectedIndex = 2;
                    break;
                case 4:
                    comboBox_Task4Priority.SelectedIndex = 3;
                    break;
                case 8:
                    comboBox_Task4Priority.SelectedIndex = 4;
                    break;
                case 16:
                    comboBox_Task4Priority.SelectedIndex = 5;
                    break;
                case 32:
                    comboBox_Task4Priority.SelectedIndex = 6;
                    break;
                case 64:
                    comboBox_Task4Priority.SelectedIndex = 7;
                    break;
                case 128:
                    comboBox_Task4Priority.SelectedIndex = 8;
                    break;
                default:
                    comboBox_Task4Priority.SelectedIndex = 0;
                    parameters.Task_4_Priority = 0;
                    break;
            }

            textBox_Task5Name.Text = parameters.Task_5_Name;
            tabPage_Task5.Text = parameters.Task_5_Name;

            checkBox_Task5Auto.Checked = parameters.Task_5_Autostart;

            if (parameters.Task_5_Stack == 2)
                checkBox_Task5Stack.Checked = true;
            else
            {
                checkBox_Task5Stack.Checked = false;
                numericUpDown_Task5StackSize.Enabled = false;
            }
            numericUpDown_Task5StackSize.Value = parameters.Task_5_Stack_Size;

            numericUpDown_Task5Activation.Value = parameters.Task_5_Activation;

            comboBox_Task5Schedule.SelectedIndex = parameters.Task_5_Schedule;

            switch (parameters.Task_5_Priority)
            {
                case 0:
                    comboBox_Task5Priority.SelectedIndex = 0;
                    break;
                case 1:
                    comboBox_Task5Priority.SelectedIndex = 1;
                    break;
                case 2:
                    comboBox_Task5Priority.SelectedIndex = 2;
                    break;
                case 4:
                    comboBox_Task5Priority.SelectedIndex = 3;
                    break;
                case 8:
                    comboBox_Task5Priority.SelectedIndex = 4;
                    break;
                case 16:
                    comboBox_Task5Priority.SelectedIndex = 5;
                    break;
                case 32:
                    comboBox_Task5Priority.SelectedIndex = 6;
                    break;
                case 64:
                    comboBox_Task5Priority.SelectedIndex = 7;
                    break;
                case 128:
                    comboBox_Task5Priority.SelectedIndex = 8;
                    break;
                default:
                    comboBox_Task5Priority.SelectedIndex = 0;
                    parameters.Task_5_Priority = 0;
                    break;
            }

            textBox_Task6Name.Text = parameters.Task_6_Name;
            tabPage_Task6.Text = parameters.Task_6_Name;

            checkBox_Task6Auto.Checked = parameters.Task_6_Autostart;

            if (parameters.Task_6_Stack == 2)
                checkBox_Task6Stack.Checked = true;
            else
            {
                checkBox_Task6Stack.Checked = false;
                numericUpDown_Task6StackSize.Enabled = false;
            }
            numericUpDown_Task6StackSize.Value = parameters.Task_6_Stack_Size;

            numericUpDown_Task6Activation.Value = parameters.Task_6_Activation;

            comboBox_Task6Schedule.SelectedIndex = parameters.Task_6_Schedule;

            switch (parameters.Task_6_Priority)
            {
                case 0:
                    comboBox_Task6Priority.SelectedIndex = 0;
                    break;
                case 1:
                    comboBox_Task6Priority.SelectedIndex = 1;
                    break;
                case 2:
                    comboBox_Task6Priority.SelectedIndex = 2;
                    break;
                case 4:
                    comboBox_Task6Priority.SelectedIndex = 3;
                    break;
                case 8:
                    comboBox_Task6Priority.SelectedIndex = 4;
                    break;
                case 16:
                    comboBox_Task6Priority.SelectedIndex = 5;
                    break;
                case 32:
                    comboBox_Task6Priority.SelectedIndex = 6;
                    break;
                case 64:
                    comboBox_Task6Priority.SelectedIndex = 7;
                    break;
                case 128:
                    comboBox_Task6Priority.SelectedIndex = 8;
                    break;
                default:
                    comboBox_Task6Priority.SelectedIndex = 0;
                    parameters.Task_6_Priority = 0;
                    break;
            }

            textBox_Task7Name.Text = parameters.Task_7_Name;
            tabPage_Task7.Text = parameters.Task_7_Name;

            checkBox_Task7Auto.Checked = parameters.Task_7_Autostart;

            if (parameters.Task_7_Stack == 2)
                checkBox_Task7Stack.Checked = true;
            else
            {
                checkBox_Task7Stack.Checked = false;
                numericUpDown_Task7StackSize.Enabled = false;
            }
            numericUpDown_Task7StackSize.Value = parameters.Task_7_Stack_Size;

            numericUpDown_Task7Activation.Value = parameters.Task_7_Activation;

            comboBox_Task7Schedule.SelectedIndex = parameters.Task_7_Schedule;

            switch (parameters.Task_7_Priority)
            {
                case 0:
                    comboBox_Task7Priority.SelectedIndex = 0;
                    break;
                case 1:
                    comboBox_Task7Priority.SelectedIndex = 1;
                    break;
                case 2:
                    comboBox_Task7Priority.SelectedIndex = 2;
                    break;
                case 4:
                    comboBox_Task7Priority.SelectedIndex = 3;
                    break;
                case 8:
                    comboBox_Task7Priority.SelectedIndex = 4;
                    break;
                case 16:
                    comboBox_Task7Priority.SelectedIndex = 5;
                    break;
                case 32:
                    comboBox_Task7Priority.SelectedIndex = 6;
                    break;
                case 64:
                    comboBox_Task7Priority.SelectedIndex = 7;
                    break;
                case 128:
                    comboBox_Task7Priority.SelectedIndex = 8;
                    break;
                default:
                    comboBox_Task7Priority.SelectedIndex = 0;
                    parameters.Task_7_Priority = 0;
                    break;
            }

            textBox_Task8Name.Text = parameters.Task_8_Name;
            tabPage_Task8.Text = parameters.Task_8_Name;

            checkBox_Task8Auto.Checked = parameters.Task_8_Autostart;

            if (parameters.Task_8_Stack == 2)
                checkBox_Task8Stack.Checked = true;
            else
            {
                checkBox_Task8Stack.Checked = false;
                numericUpDown_Task8StackSize.Enabled = false;
            }
            numericUpDown_Task8StackSize.Value = parameters.Task_8_Stack_Size;

            numericUpDown_Task8Activation.Value = parameters.Task_8_Activation;

            comboBox_Task8Schedule.SelectedIndex = parameters.Task_8_Schedule;

            switch (parameters.Task_8_Priority)
            {
                case 0:
                    comboBox_Task8Priority.SelectedIndex = 0;
                    break;
                case 1:
                    comboBox_Task8Priority.SelectedIndex = 1;
                    break;
                case 2:
                    comboBox_Task8Priority.SelectedIndex = 2;
                    break;
                case 4:
                    comboBox_Task8Priority.SelectedIndex = 3;
                    break;
                case 8:
                    comboBox_Task8Priority.SelectedIndex = 4;
                    break;
                case 16:
                    comboBox_Task8Priority.SelectedIndex = 5;
                    break;
                case 32:
                    comboBox_Task8Priority.SelectedIndex = 6;
                    break;
                case 64:
                    comboBox_Task8Priority.SelectedIndex = 7;
                    break;
                case 128:
                    comboBox_Task8Priority.SelectedIndex = 8;
                    break;
                default:
                    comboBox_Task8Priority.SelectedIndex = 0;
                    parameters.Task_8_Priority = 0;
                    break;
            }
        }

        private void tabPage_Task1_Click(object sender, EventArgs e)
        {
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            textBox_Task1Name.Text = textBox_Task1Name.Text.Replace(' ', '_');
            parameters.Task_1_Name = textBox_Task1Name.Text;
            textBox_Task1Name.Select(textBox_Task1Name.Text.Length, 0);
            tabPage_Task1.Text = textBox_Task1Name.Text;
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch(comboBox_Task1Priority.SelectedIndex)
            {
                case 0:
                    parameters.Task_1_Priority = 0;
                    break;
                case 1:
                    parameters.Task_1_Priority = 1;
                    break;
                case 2:
                    parameters.Task_1_Priority = 2;
                    break;
                case 3:
                    parameters.Task_1_Priority = 4;
                    break;
                case 4:
                    parameters.Task_1_Priority = 8;
                    break;
                case 5:
                    parameters.Task_1_Priority = 16;
                    break;
                case 6:
                    parameters.Task_1_Priority = 32;
                    break;
                case 7:
                    parameters.Task_1_Priority = 64;
                    break;
                case 8:
                    parameters.Task_1_Priority = 128;
                    break;
            }
        }

        private void button_AddTask_Click(object sender, EventArgs e)
        {
            switch(parameters.Number_of_Tasks)
            {
                case 8:
                    break;
                case 7:
                    tabControl_Tasks.TabPages.Add(tabPage_Task8);
                    parameters.Number_of_Tasks++;
                    break;
                case 6:
                    tabControl_Tasks.TabPages.Add(tabPage_Task7);
                    parameters.Number_of_Tasks++;
                    break;
                case 5:
                    tabControl_Tasks.TabPages.Add(tabPage_Task6);
                    parameters.Number_of_Tasks++;
                    break;
                case 4:
                    tabControl_Tasks.TabPages.Add(tabPage_Task5);
                    parameters.Number_of_Tasks++;
                    break;
                case 3:
                    tabControl_Tasks.TabPages.Add(tabPage_Task4);
                    parameters.Number_of_Tasks++;
                    break;
                case 2:
                    tabControl_Tasks.TabPages.Add(tabPage_Task3);
                    parameters.Number_of_Tasks++;
                    break;
                case 1:
                    tabControl_Tasks.TabPages.Add(tabPage_Task2);
                    parameters.Number_of_Tasks++;
                    break;
                case 0:
                    tabControl_Tasks.TabPages.Add(tabPage_Task1);
                    parameters.Number_of_Tasks++;
                    break;
                default: break;
            }
            parameters.alarms.updateAlarms();
        }

        private void button_RemoveTask_Click(object sender, EventArgs e)
        {
            Int32 TasktoRemove = tabControl_Tasks.SelectedIndex;
            Int32 Tasks = parameters.Number_of_Tasks;
            if((Tasks > 0) && (TasktoRemove  != -1))
            {
                for(Int32 i = TasktoRemove; i < Tasks; i++)
                {
                    if(i == (Tasks - 1))
                    {
                        tabControl_Tasks.TabPages.RemoveAt(i);
                        break;
                    }
                    if(i == 0)
                    {
                        parameters.Task_1_Activation = parameters.Task_2_Activation;
                        parameters.Task_1_Autostart = parameters.Task_2_Autostart;
                        parameters.Task_1_Event_1 = parameters.Task_2_Event_1;
                        parameters.Task_1_Event_2 = parameters.Task_2_Event_2;
                        parameters.Task_1_Event_3 = parameters.Task_2_Event_3;
                        parameters.Task_1_Event_4 = parameters.Task_2_Event_4;
                        parameters.Task_1_Event_5 = parameters.Task_2_Event_5;
                        parameters.Task_1_Event_6 = parameters.Task_2_Event_6;
                        parameters.Task_1_Event_7 = parameters.Task_2_Event_7;
                        parameters.Task_1_Event_8 = parameters.Task_2_Event_8;
                        parameters.Task_1_Name = parameters.Task_2_Name;
                        parameters.Task_1_Number_Events = 0;
                        parameters.Task_1_Number_Resources = 0;
                        parameters.Task_1_Priority = parameters.Task_2_Priority;
                        parameters.Task_1_Resource_1 = parameters.Task_2_Resource_1;
                        parameters.Task_1_Resource_2 = parameters.Task_2_Resource_2;
                        parameters.Task_1_Resource_3 = parameters.Task_2_Resource_3;
                        parameters.Task_1_Resource_4 = parameters.Task_2_Resource_4;
                        parameters.Task_1_Resource_5 = parameters.Task_2_Resource_5;
                        parameters.Task_1_Resource_6 = parameters.Task_2_Resource_6;
                        parameters.Task_1_Resource_7 = parameters.Task_2_Resource_7;
                        parameters.Task_1_Resource_8 = parameters.Task_2_Resource_8;
                        parameters.Task_1_Schedule = parameters.Task_2_Schedule;
                        parameters.Task_1_Stack = parameters.Task_2_Stack;
                        parameters.Task_1_Stack_Size = parameters.Task_2_Stack_Size;
                        numericUpDown_Task1Activation.Value = numericUpDown_Task2Activation.Value;
                        checkBox_Task1Auto.Checked = checkBox_Task2Auto.Checked;
                        checkedListBox_Task1.ClearSelected();
                        foreach (object Item in checkedListBox_Task2.Items)
                        {
                            checkedListBox_Task1.SetItemChecked(checkedListBox_Task2.Items.IndexOf(Item), checkedListBox_Task2.GetItemChecked(checkedListBox_Task2.Items.IndexOf(Item)));
                        }
                        textBox_Task1Name.Text = textBox_Task2Name.Text;
                        tabPage_Task1.Text = tabPage_Task2.Text;
                        comboBox_Task1Priority.SelectedIndex = comboBox_Task2Priority.SelectedIndex;
                        checkedListBox_Task1_Resource.ClearSelected();
                        foreach (object Item in checkedListBox_Task2_Resource.Items)
                        {
                            checkedListBox_Task1_Resource.SetItemChecked(checkedListBox_Task2_Resource.Items.IndexOf(Item), checkedListBox_Task2_Resource.GetItemChecked(checkedListBox_Task2_Resource.Items.IndexOf(Item)));
                        }
                        comboBox_Task1Schedule.SelectedIndex = comboBox_Task2Schedule.SelectedIndex;
                        checkBox_Task1Stack.Checked = checkBox_Task2Stack.Checked;
                        numericUpDown_Task1StackSize.Value = numericUpDown_Task2StackSize.Value;
                    }
                    else if(i == 1)
                    {
                        parameters.Task_2_Activation = parameters.Task_3_Activation;
                        parameters.Task_2_Autostart = parameters.Task_3_Autostart;
                        parameters.Task_2_Event_1 = parameters.Task_3_Event_1;
                        parameters.Task_2_Event_2 = parameters.Task_3_Event_2;
                        parameters.Task_2_Event_3 = parameters.Task_3_Event_3;
                        parameters.Task_2_Event_4 = parameters.Task_3_Event_4;
                        parameters.Task_2_Event_5 = parameters.Task_3_Event_5;
                        parameters.Task_2_Event_6 = parameters.Task_3_Event_6;
                        parameters.Task_2_Event_7 = parameters.Task_3_Event_7;
                        parameters.Task_2_Event_8 = parameters.Task_3_Event_8;
                        parameters.Task_2_Name = parameters.Task_3_Name;
                        parameters.Task_2_Number_Events = 0;
                        parameters.Task_2_Number_Resources = 0;
                        parameters.Task_2_Priority = parameters.Task_3_Priority;
                        parameters.Task_2_Resource_1 = parameters.Task_3_Resource_1;
                        parameters.Task_2_Resource_2 = parameters.Task_3_Resource_2;
                        parameters.Task_2_Resource_3 = parameters.Task_3_Resource_3;
                        parameters.Task_2_Resource_4 = parameters.Task_3_Resource_4;
                        parameters.Task_2_Resource_5 = parameters.Task_3_Resource_5;
                        parameters.Task_2_Resource_6 = parameters.Task_3_Resource_6;
                        parameters.Task_2_Resource_7 = parameters.Task_3_Resource_7;
                        parameters.Task_2_Resource_8 = parameters.Task_3_Resource_8;
                        parameters.Task_2_Schedule = parameters.Task_3_Schedule;
                        parameters.Task_2_Stack = parameters.Task_3_Stack;
                        parameters.Task_2_Stack_Size = parameters.Task_3_Stack_Size;
                        numericUpDown_Task2Activation.Value = numericUpDown_Task3Activation.Value;
                        checkBox_Task2Auto.Checked = checkBox_Task3Auto.Checked;
                        checkedListBox_Task2.ClearSelected();
                        foreach (object Item in checkedListBox_Task3.Items)
                        {
                            checkedListBox_Task2.SetItemChecked(checkedListBox_Task3.Items.IndexOf(Item), checkedListBox_Task3.GetItemChecked(checkedListBox_Task3.Items.IndexOf(Item)));
                        }
                        textBox_Task2Name.Text = textBox_Task3Name.Text;
                        tabPage_Task2.Text = tabPage_Task3.Text;
                        comboBox_Task2Priority.SelectedIndex = comboBox_Task3Priority.SelectedIndex;
                        checkedListBox_Task2_Resource.ClearSelected();
                        foreach (object Item in checkedListBox_Task3_Resource.Items)
                        {
                            checkedListBox_Task2_Resource.SetItemChecked(checkedListBox_Task3_Resource.Items.IndexOf(Item), checkedListBox_Task3_Resource.GetItemChecked(checkedListBox_Task3_Resource.Items.IndexOf(Item)));
                        }
                        comboBox_Task2Schedule.SelectedIndex = comboBox_Task3Schedule.SelectedIndex;
                        checkBox_Task2Stack.Checked = checkBox_Task3Stack.Checked;
                        numericUpDown_Task2StackSize.Value = numericUpDown_Task3StackSize.Value;
                    }
                    else if (i == 2)
                    {
                        parameters.Task_3_Activation = parameters.Task_4_Activation;
                        parameters.Task_3_Autostart = parameters.Task_4_Autostart;
                        parameters.Task_3_Event_1 = parameters.Task_4_Event_1;
                        parameters.Task_3_Event_2 = parameters.Task_4_Event_2;
                        parameters.Task_3_Event_3 = parameters.Task_4_Event_3;
                        parameters.Task_3_Event_4 = parameters.Task_4_Event_4;
                        parameters.Task_3_Event_5 = parameters.Task_4_Event_5;
                        parameters.Task_3_Event_6 = parameters.Task_4_Event_6;
                        parameters.Task_3_Event_7 = parameters.Task_4_Event_7;
                        parameters.Task_3_Event_8 = parameters.Task_4_Event_8;
                        parameters.Task_3_Name = parameters.Task_4_Name;
                        parameters.Task_3_Number_Events = 0;
                        parameters.Task_3_Number_Resources = 0;
                        parameters.Task_3_Priority = parameters.Task_4_Priority;
                        parameters.Task_3_Resource_1 = parameters.Task_4_Resource_1;
                        parameters.Task_3_Resource_2 = parameters.Task_4_Resource_2;
                        parameters.Task_3_Resource_3 = parameters.Task_4_Resource_3;
                        parameters.Task_3_Resource_4 = parameters.Task_4_Resource_4;
                        parameters.Task_3_Resource_5 = parameters.Task_4_Resource_5;
                        parameters.Task_3_Resource_6 = parameters.Task_4_Resource_6;
                        parameters.Task_3_Resource_7 = parameters.Task_4_Resource_7;
                        parameters.Task_3_Resource_8 = parameters.Task_4_Resource_8;
                        parameters.Task_3_Schedule = parameters.Task_4_Schedule;
                        parameters.Task_3_Stack = parameters.Task_4_Stack;
                        parameters.Task_3_Stack_Size = parameters.Task_4_Stack_Size;
                        numericUpDown_Task3Activation.Value = numericUpDown_Task4Activation.Value;
                        checkBox_Task3Auto.Checked = checkBox_Task4Auto.Checked;
                        checkedListBox_Task3.ClearSelected();
                        foreach (object Item in checkedListBox_Task4.Items)
                        {
                            checkedListBox_Task3.SetItemChecked(checkedListBox_Task4.Items.IndexOf(Item), checkedListBox_Task4.GetItemChecked(checkedListBox_Task4.Items.IndexOf(Item)));
                        }
                        textBox_Task3Name.Text = textBox_Task4Name.Text;
                        tabPage_Task3.Text = tabPage_Task4.Text;
                        comboBox_Task3Priority.SelectedIndex = comboBox_Task4Priority.SelectedIndex;
                        checkedListBox_Task3_Resource.ClearSelected();
                        foreach (object Item in checkedListBox_Task4_Resource.Items)
                        {
                            checkedListBox_Task3_Resource.SetItemChecked(checkedListBox_Task4_Resource.Items.IndexOf(Item), checkedListBox_Task4_Resource.GetItemChecked(checkedListBox_Task4_Resource.Items.IndexOf(Item)));
                        }
                        comboBox_Task3Schedule.SelectedIndex = comboBox_Task4Schedule.SelectedIndex;
                        checkBox_Task3Stack.Checked = checkBox_Task4Stack.Checked;
                        numericUpDown_Task3StackSize.Value = numericUpDown_Task4StackSize.Value;
                    }
                    else if (i == 3)
                    {
                        parameters.Task_4_Activation = parameters.Task_5_Activation;
                        parameters.Task_4_Autostart = parameters.Task_5_Autostart;
                        parameters.Task_4_Event_1 = parameters.Task_5_Event_1;
                        parameters.Task_4_Event_2 = parameters.Task_5_Event_2;
                        parameters.Task_4_Event_3 = parameters.Task_5_Event_3;
                        parameters.Task_4_Event_4 = parameters.Task_5_Event_4;
                        parameters.Task_4_Event_5 = parameters.Task_5_Event_5;
                        parameters.Task_4_Event_6 = parameters.Task_5_Event_6;
                        parameters.Task_4_Event_7 = parameters.Task_5_Event_7;
                        parameters.Task_4_Event_8 = parameters.Task_5_Event_8;
                        parameters.Task_4_Name = parameters.Task_5_Name;
                        parameters.Task_4_Number_Events = 0;
                        parameters.Task_4_Number_Resources = 0;
                        parameters.Task_4_Priority = parameters.Task_5_Priority;
                        parameters.Task_4_Resource_1 = parameters.Task_5_Resource_1;
                        parameters.Task_4_Resource_2 = parameters.Task_5_Resource_2;
                        parameters.Task_4_Resource_3 = parameters.Task_5_Resource_3;
                        parameters.Task_4_Resource_4 = parameters.Task_5_Resource_4;
                        parameters.Task_4_Resource_5 = parameters.Task_5_Resource_5;
                        parameters.Task_4_Resource_6 = parameters.Task_5_Resource_6;
                        parameters.Task_4_Resource_7 = parameters.Task_5_Resource_7;
                        parameters.Task_4_Resource_8 = parameters.Task_5_Resource_8;
                        parameters.Task_4_Schedule = parameters.Task_5_Schedule;
                        parameters.Task_4_Stack = parameters.Task_5_Stack;
                        parameters.Task_4_Stack_Size = parameters.Task_5_Stack_Size;
                        numericUpDown_Task4Activation.Value = numericUpDown_Task5Activation.Value;
                        checkBox_Task4Auto.Checked = checkBox_Task5Auto.Checked;
                        checkedListBox_Task4.ClearSelected();
                        foreach (object Item in checkedListBox_Task5.Items)
                        {
                            checkedListBox_Task4.SetItemChecked(checkedListBox_Task5.Items.IndexOf(Item), checkedListBox_Task5.GetItemChecked(checkedListBox_Task5.Items.IndexOf(Item)));
                        }
                        textBox_Task4Name.Text = textBox_Task5Name.Text;
                        tabPage_Task4.Text = tabPage_Task5.Text;
                        comboBox_Task4Priority.SelectedIndex = comboBox_Task5Priority.SelectedIndex;
                        checkedListBox_Task4_Resource.ClearSelected();
                        foreach (object Item in checkedListBox_Task5_Resource.Items)
                        {
                            checkedListBox_Task4_Resource.SetItemChecked(checkedListBox_Task5_Resource.Items.IndexOf(Item), checkedListBox_Task5_Resource.GetItemChecked(checkedListBox_Task5_Resource.Items.IndexOf(Item)));
                        }
                        comboBox_Task4Schedule.SelectedIndex = comboBox_Task5Schedule.SelectedIndex;
                        checkBox_Task4Stack.Checked = checkBox_Task5Stack.Checked;
                        numericUpDown_Task4StackSize.Value = numericUpDown_Task5StackSize.Value;
                    }
                    else if (i == 4)
                    {
                        parameters.Task_5_Activation = parameters.Task_6_Activation;
                        parameters.Task_5_Autostart = parameters.Task_6_Autostart;
                        parameters.Task_5_Event_1 = parameters.Task_6_Event_1;
                        parameters.Task_5_Event_2 = parameters.Task_6_Event_2;
                        parameters.Task_5_Event_3 = parameters.Task_6_Event_3;
                        parameters.Task_5_Event_4 = parameters.Task_6_Event_4;
                        parameters.Task_5_Event_5 = parameters.Task_6_Event_5;
                        parameters.Task_5_Event_6 = parameters.Task_6_Event_6;
                        parameters.Task_5_Event_7 = parameters.Task_6_Event_7;
                        parameters.Task_5_Event_8 = parameters.Task_6_Event_8;
                        parameters.Task_5_Name = parameters.Task_6_Name;
                        parameters.Task_5_Number_Events = 0;
                        parameters.Task_5_Number_Resources = 0;
                        parameters.Task_5_Priority = parameters.Task_6_Priority;
                        parameters.Task_5_Resource_1 = parameters.Task_6_Resource_1;
                        parameters.Task_5_Resource_2 = parameters.Task_6_Resource_2;
                        parameters.Task_5_Resource_3 = parameters.Task_6_Resource_3;
                        parameters.Task_5_Resource_4 = parameters.Task_6_Resource_4;
                        parameters.Task_5_Resource_5 = parameters.Task_6_Resource_5;
                        parameters.Task_5_Resource_6 = parameters.Task_6_Resource_6;
                        parameters.Task_5_Resource_7 = parameters.Task_6_Resource_7;
                        parameters.Task_5_Resource_8 = parameters.Task_6_Resource_8;
                        parameters.Task_5_Schedule = parameters.Task_6_Schedule;
                        parameters.Task_5_Stack = parameters.Task_6_Stack;
                        parameters.Task_5_Stack_Size = parameters.Task_6_Stack_Size;
                        numericUpDown_Task5Activation.Value = numericUpDown_Task6Activation.Value;
                        checkBox_Task5Auto.Checked = checkBox_Task6Auto.Checked;
                        checkedListBox_Task5.ClearSelected();
                        foreach (object Item in checkedListBox_Task6.Items)
                        {
                            checkedListBox_Task5.SetItemChecked(checkedListBox_Task6.Items.IndexOf(Item), checkedListBox_Task6.GetItemChecked(checkedListBox_Task6.Items.IndexOf(Item)));
                        }
                        textBox_Task5Name.Text = textBox_Task6Name.Text;
                        tabPage_Task5.Text = tabPage_Task6.Text;
                        comboBox_Task5Priority.SelectedIndex = comboBox_Task6Priority.SelectedIndex;
                        checkedListBox_Task5_Resource.ClearSelected();
                        foreach (object Item in checkedListBox_Task6_Resource.Items)
                        {
                            checkedListBox_Task5_Resource.SetItemChecked(checkedListBox_Task6_Resource.Items.IndexOf(Item), checkedListBox_Task6_Resource.GetItemChecked(checkedListBox_Task6_Resource.Items.IndexOf(Item)));
                        }
                        comboBox_Task5Schedule.SelectedIndex = comboBox_Task6Schedule.SelectedIndex;
                        checkBox_Task5Stack.Checked = checkBox_Task6Stack.Checked;
                        numericUpDown_Task5StackSize.Value = numericUpDown_Task6StackSize.Value;
                    }
                    else if (i == 5)
                    {
                        parameters.Task_6_Activation = parameters.Task_7_Activation;
                        parameters.Task_6_Autostart = parameters.Task_7_Autostart;
                        parameters.Task_6_Event_1 = parameters.Task_7_Event_1;
                        parameters.Task_6_Event_2 = parameters.Task_7_Event_2;
                        parameters.Task_6_Event_3 = parameters.Task_7_Event_3;
                        parameters.Task_6_Event_4 = parameters.Task_7_Event_4;
                        parameters.Task_6_Event_5 = parameters.Task_7_Event_5;
                        parameters.Task_6_Event_6 = parameters.Task_7_Event_6;
                        parameters.Task_6_Event_7 = parameters.Task_7_Event_7;
                        parameters.Task_6_Event_8 = parameters.Task_7_Event_8;
                        parameters.Task_6_Name = parameters.Task_7_Name;
                        parameters.Task_6_Number_Events = 0;
                        parameters.Task_6_Number_Resources = 0;
                        parameters.Task_6_Priority = parameters.Task_7_Priority;
                        parameters.Task_6_Resource_1 = parameters.Task_7_Resource_1;
                        parameters.Task_6_Resource_2 = parameters.Task_7_Resource_2;
                        parameters.Task_6_Resource_3 = parameters.Task_7_Resource_3;
                        parameters.Task_6_Resource_4 = parameters.Task_7_Resource_4;
                        parameters.Task_6_Resource_5 = parameters.Task_7_Resource_5;
                        parameters.Task_6_Resource_6 = parameters.Task_7_Resource_6;
                        parameters.Task_6_Resource_7 = parameters.Task_7_Resource_7;
                        parameters.Task_6_Resource_8 = parameters.Task_7_Resource_8;
                        parameters.Task_6_Schedule = parameters.Task_7_Schedule;
                        parameters.Task_6_Stack = parameters.Task_7_Stack;
                        parameters.Task_6_Stack_Size = parameters.Task_7_Stack_Size;
                        numericUpDown_Task6Activation.Value = numericUpDown_Task7Activation.Value;
                        checkBox_Task6Auto.Checked = checkBox_Task7Auto.Checked;
                        checkedListBox_Task6.ClearSelected();
                        foreach (object Item in checkedListBox_Task7.Items)
                        {
                            checkedListBox_Task6.SetItemChecked(checkedListBox_Task7.Items.IndexOf(Item), checkedListBox_Task7.GetItemChecked(checkedListBox_Task7.Items.IndexOf(Item)));
                        }
                        textBox_Task6Name.Text = textBox_Task7Name.Text;
                        tabPage_Task6.Text = tabPage_Task7.Text;
                        comboBox_Task6Priority.SelectedIndex = comboBox_Task7Priority.SelectedIndex;
                        checkedListBox_Task6_Resource.ClearSelected();
                        foreach (object Item in checkedListBox_Task7_Resource.Items)
                        {
                            checkedListBox_Task6_Resource.SetItemChecked(checkedListBox_Task7_Resource.Items.IndexOf(Item), checkedListBox_Task7_Resource.GetItemChecked(checkedListBox_Task7_Resource.Items.IndexOf(Item)));
                        }
                        comboBox_Task6Schedule.SelectedIndex = comboBox_Task7Schedule.SelectedIndex;
                        checkBox_Task6Stack.Checked = checkBox_Task7Stack.Checked;
                        numericUpDown_Task6StackSize.Value = numericUpDown_Task7StackSize.Value;
                    }
                    else if (i == 6)
                    {
                        parameters.Task_7_Activation = parameters.Task_8_Activation;
                        parameters.Task_7_Autostart = parameters.Task_8_Autostart;
                        parameters.Task_7_Event_1 = parameters.Task_8_Event_1;
                        parameters.Task_7_Event_2 = parameters.Task_8_Event_2;
                        parameters.Task_7_Event_3 = parameters.Task_8_Event_3;
                        parameters.Task_7_Event_4 = parameters.Task_8_Event_4;
                        parameters.Task_7_Event_5 = parameters.Task_8_Event_5;
                        parameters.Task_7_Event_6 = parameters.Task_8_Event_6;
                        parameters.Task_7_Event_7 = parameters.Task_8_Event_7;
                        parameters.Task_7_Event_8 = parameters.Task_8_Event_8;
                        parameters.Task_7_Name = parameters.Task_8_Name;
                        parameters.Task_7_Number_Events = 0;
                        parameters.Task_7_Number_Resources = 0;
                        parameters.Task_7_Priority = parameters.Task_8_Priority;
                        parameters.Task_7_Resource_1 = parameters.Task_8_Resource_1;
                        parameters.Task_7_Resource_2 = parameters.Task_8_Resource_2;
                        parameters.Task_7_Resource_3 = parameters.Task_8_Resource_3;
                        parameters.Task_7_Resource_4 = parameters.Task_8_Resource_4;
                        parameters.Task_7_Resource_5 = parameters.Task_8_Resource_5;
                        parameters.Task_7_Resource_6 = parameters.Task_8_Resource_6;
                        parameters.Task_7_Resource_7 = parameters.Task_8_Resource_7;
                        parameters.Task_7_Resource_8 = parameters.Task_8_Resource_8;
                        parameters.Task_7_Schedule = parameters.Task_8_Schedule;
                        parameters.Task_7_Stack = parameters.Task_8_Stack;
                        parameters.Task_7_Stack_Size = parameters.Task_8_Stack_Size;
                        numericUpDown_Task7Activation.Value = numericUpDown_Task8Activation.Value;
                        checkBox_Task7Auto.Checked = checkBox_Task8Auto.Checked;
                        checkedListBox_Task7.ClearSelected();
                        foreach (object Item in checkedListBox_Task8.Items)
                        {
                            checkedListBox_Task7.SetItemChecked(checkedListBox_Task8.Items.IndexOf(Item), checkedListBox_Task8.GetItemChecked(checkedListBox_Task8.Items.IndexOf(Item)));
                        }
                        textBox_Task7Name.Text = textBox_Task8Name.Text;
                        tabPage_Task7.Text = tabPage_Task8.Text;
                        comboBox_Task7Priority.SelectedIndex = comboBox_Task8Priority.SelectedIndex;
                        checkedListBox_Task7_Resource.ClearSelected();
                        foreach (object Item in checkedListBox_Task8_Resource.Items)
                        {
                            checkedListBox_Task7_Resource.SetItemChecked(checkedListBox_Task8_Resource.Items.IndexOf(Item), checkedListBox_Task8_Resource.GetItemChecked(checkedListBox_Task8_Resource.Items.IndexOf(Item)));
                        }
                        comboBox_Task7Schedule.SelectedIndex = comboBox_Task8Schedule.SelectedIndex;
                        checkBox_Task7Stack.Checked = checkBox_Task8Stack.Checked;
                        numericUpDown_Task7StackSize.Value = numericUpDown_Task8StackSize.Value;
                    }
                }
                parameters.Number_of_Tasks--;
                parameters.alarms.updateAlarms();
            }
            UpdateForm();
        }

        private void checkBox_Task1Auto_CheckedChanged(object sender, EventArgs e)
        {
            parameters.Task_1_Autostart = checkBox_Task1Auto.Checked;
        }

        private void checkBox_Task1Stack_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Task1Stack.Checked)
            {
                parameters.Task_1_Stack = 2;
                numericUpDown_Task1StackSize.Enabled = true;
            }
            else
            {
                parameters.Task_1_Stack = 1;
                numericUpDown_Task1StackSize.Enabled = false;
            }
        }

        private void numericUpDown_Task1StackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_1_Stack_Size = (UInt16)numericUpDown_Task1StackSize.Value;
        }

        private void numericUpDown_Task1Activation_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_1_Activation = (Byte)numericUpDown_Task1Activation.Value;
        }

        private void comboBox_Task1Schedule_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Task_1_Schedule = comboBox_Task1Schedule.SelectedIndex;
        }

        private void textBox_Task2Name_TextChanged(object sender, EventArgs e)
        {
            textBox_Task2Name.Text = textBox_Task2Name.Text.Replace(' ', '_');
            parameters.Task_2_Name = textBox_Task2Name.Text;
            textBox_Task2Name.Select(textBox_Task2Name.Text.Length, 0);
            tabPage_Task2.Text = textBox_Task2Name.Text;
        }

        private void checkBox_Task2Auto_CheckedChanged(object sender, EventArgs e)
        {
            parameters.Task_2_Autostart = checkBox_Task2Auto.Checked;
        }

        private void checkBox_Task2Stack_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Task2Stack.Checked)
            {
                parameters.Task_2_Stack = 2;
                numericUpDown_Task2StackSize.Enabled = true;
            }
            else
            {
                parameters.Task_2_Stack = 1;
                numericUpDown_Task2StackSize.Enabled = false;
            }
        }

        private void numericUpDown_Task2StackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_2_Stack_Size = (UInt16)numericUpDown_Task2StackSize.Value;
        }

        private void numericUpDown_Task2Activation_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_2_Activation = (Byte)numericUpDown_Task2Activation.Value;
        }

        private void comboBox_Task2Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (comboBox_Task2Priority.SelectedIndex)
            {
                case 0:
                    parameters.Task_2_Priority = 0;
                    break;
                case 1:
                    parameters.Task_2_Priority = 1;
                    break;
                case 2:
                    parameters.Task_2_Priority = 2;
                    break;
                case 3:
                    parameters.Task_2_Priority = 4;
                    break;
                case 4:
                    parameters.Task_2_Priority = 8;
                    break;
                case 5:
                    parameters.Task_2_Priority = 16;
                    break;
                case 6:
                    parameters.Task_2_Priority = 32;
                    break;
                case 7:
                    parameters.Task_2_Priority = 64;
                    break;
                case 8:
                    parameters.Task_2_Priority = 128;
                    break;
            }
        }
        private void comboBox_Task2Schedule_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Task_2_Schedule = comboBox_Task2Schedule.SelectedIndex;
        }

        private void textBox_Task3Name_TextChanged(object sender, EventArgs e)
        {
            textBox_Task3Name.Text = textBox_Task3Name.Text.Replace(' ', '_');
            parameters.Task_3_Name = textBox_Task3Name.Text;
            textBox_Task3Name.Select(textBox_Task3Name.Text.Length, 0);
            tabPage_Task3.Text = textBox_Task3Name.Text;
        }

        private void checkBox_Task3Auto_CheckedChanged(object sender, EventArgs e)
        {
            parameters.Task_3_Autostart = checkBox_Task3Auto.Checked;
        }

        private void checkBox_Task3Stack_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Task3Stack.Checked)
            {
                parameters.Task_3_Stack = 2;
                numericUpDown_Task3StackSize.Enabled = true;
            }
            else
            {
                parameters.Task_3_Stack = 1;
                numericUpDown_Task3StackSize.Enabled = false;
            }
        }

        private void numericUpDown_Task3StackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_3_Stack_Size = (UInt16)numericUpDown_Task3StackSize.Value;
        }

        private void numericUpDown_Task3Activation_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_3_Activation = (Byte)numericUpDown_Task3Activation.Value;
        }

        private void comboBox_Task3Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (comboBox_Task3Priority.SelectedIndex)
            {
                case 0:
                    parameters.Task_3_Priority = 0;
                    break;
                case 1:
                    parameters.Task_3_Priority = 1;
                    break;
                case 2:
                    parameters.Task_3_Priority = 2;
                    break;
                case 3:
                    parameters.Task_3_Priority = 4;
                    break;
                case 4:
                    parameters.Task_3_Priority = 8;
                    break;
                case 5:
                    parameters.Task_3_Priority = 16;
                    break;
                case 6:
                    parameters.Task_3_Priority = 32;
                    break;
                case 7:
                    parameters.Task_3_Priority = 64;
                    break;
                case 8:
                    parameters.Task_3_Priority = 128;
                    break;
            }
        }
        private void comboBox_Task3Schedule_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Task_3_Schedule = comboBox_Task3Schedule.SelectedIndex;
        }

        private void textBox_Task4Name_TextChanged(object sender, EventArgs e)
        {
            textBox_Task4Name.Text = textBox_Task4Name.Text.Replace(' ', '_');
            parameters.Task_4_Name = textBox_Task4Name.Text;
            textBox_Task4Name.Select(textBox_Task4Name.Text.Length, 0);
            tabPage_Task4.Text = textBox_Task4Name.Text;
        }

        private void checkBox_Task4Auto_CheckedChanged(object sender, EventArgs e)
        {
            parameters.Task_4_Autostart = checkBox_Task4Auto.Checked;
        }

        private void checkBox_Task4Stack_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Task4Stack.Checked)
            {
                parameters.Task_4_Stack = 2;
                numericUpDown_Task4StackSize.Enabled = true;
            }
            else
            {
                parameters.Task_4_Stack = 1;
                numericUpDown_Task4StackSize.Enabled = false;
            }
        }

        private void numericUpDown_Task4StackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_4_Stack_Size = (UInt16)numericUpDown_Task4StackSize.Value;
        }

        private void numericUpDown_Task4Activation_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_4_Activation = (Byte)numericUpDown_Task4Activation.Value;
        }

        private void comboBox_Task4Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (comboBox_Task4Priority.SelectedIndex)
            {
                case 0:
                    parameters.Task_4_Priority = 0;
                    break;
                case 1:
                    parameters.Task_4_Priority = 1;
                    break;
                case 2:
                    parameters.Task_4_Priority = 2;
                    break;
                case 3:
                    parameters.Task_4_Priority = 4;
                    break;
                case 4:
                    parameters.Task_4_Priority = 8;
                    break;
                case 5:
                    parameters.Task_4_Priority = 16;
                    break;
                case 6:
                    parameters.Task_4_Priority = 32;
                    break;
                case 7:
                    parameters.Task_4_Priority = 64;
                    break;
                case 8:
                    parameters.Task_4_Priority = 128;
                    break;
            }
        }
        private void comboBox_Task4Schedule_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Task_4_Schedule = comboBox_Task4Schedule.SelectedIndex;
        }

        private void textBox_Task5Name_TextChanged(object sender, EventArgs e)
        {
            textBox_Task5Name.Text = textBox_Task5Name.Text.Replace(' ', '_');
            parameters.Task_5_Name = textBox_Task5Name.Text;
            textBox_Task5Name.Select(textBox_Task5Name.Text.Length, 0);
            tabPage_Task5.Text = textBox_Task5Name.Text;
        }

        private void checkBox_Task5Auto_CheckedChanged(object sender, EventArgs e)
        {
            parameters.Task_5_Autostart = checkBox_Task5Auto.Checked;
        }

        private void checkBox_Task5Stack_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Task5Stack.Checked)
            {
                parameters.Task_5_Stack = 2;
                numericUpDown_Task5StackSize.Enabled = true;
            }
            else
            {
                parameters.Task_5_Stack = 1;
                numericUpDown_Task5StackSize.Enabled = false;
            }
        }

        private void numericUpDown_Task5StackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_5_Stack_Size = (UInt16)numericUpDown_Task5StackSize.Value;
        }

        private void numericUpDown_Task5Activation_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_5_Activation = (Byte)numericUpDown_Task5Activation.Value;
        }

        private void comboBox_Task5Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (comboBox_Task5Priority.SelectedIndex)
            {
                case 0:
                    parameters.Task_5_Priority = 0;
                    break;
                case 1:
                    parameters.Task_5_Priority = 1;
                    break;
                case 2:
                    parameters.Task_5_Priority = 2;
                    break;
                case 3:
                    parameters.Task_5_Priority = 4;
                    break;
                case 4:
                    parameters.Task_5_Priority = 8;
                    break;
                case 5:
                    parameters.Task_5_Priority = 16;
                    break;
                case 6:
                    parameters.Task_5_Priority = 32;
                    break;
                case 7:
                    parameters.Task_5_Priority = 64;
                    break;
                case 8:
                    parameters.Task_5_Priority = 128;
                    break;
            }
        }
        private void comboBox_Task5Schedule_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Task_5_Schedule = comboBox_Task5Schedule.SelectedIndex;
        }
        private void textBox_Task6Name_TextChanged(object sender, EventArgs e)
        {
            textBox_Task6Name.Text = textBox_Task6Name.Text.Replace(' ', '_');
            parameters.Task_6_Name = textBox_Task6Name.Text;
            textBox_Task6Name.Select(textBox_Task6Name.Text.Length, 0);
            tabPage_Task6.Text = textBox_Task6Name.Text;
        }

        private void checkBox_Task6Auto_CheckedChanged(object sender, EventArgs e)
        {
            parameters.Task_6_Autostart = checkBox_Task6Auto.Checked;
        }

        private void checkBox_Task6Stack_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Task6Stack.Checked)
            {
                parameters.Task_6_Stack = 2;
                numericUpDown_Task6StackSize.Enabled = true;
            }
            else
            {
                parameters.Task_6_Stack = 1;
                numericUpDown_Task6StackSize.Enabled = false;
            }
        }

        private void numericUpDown_Task6StackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_6_Stack_Size = (UInt16)numericUpDown_Task6StackSize.Value;
        }

        private void numericUpDown_Task6Activation_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_6_Activation = (Byte)numericUpDown_Task6Activation.Value;
        }

        private void comboBox_Task6Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (comboBox_Task6Priority.SelectedIndex)
            {
                case 0:
                    parameters.Task_6_Priority = 0;
                    break;
                case 1:
                    parameters.Task_6_Priority = 1;
                    break;
                case 2:
                    parameters.Task_6_Priority = 2;
                    break;
                case 3:
                    parameters.Task_6_Priority = 4;
                    break;
                case 4:
                    parameters.Task_6_Priority = 8;
                    break;
                case 5:
                    parameters.Task_6_Priority = 16;
                    break;
                case 6:
                    parameters.Task_6_Priority = 32;
                    break;
                case 7:
                    parameters.Task_6_Priority = 64;
                    break;
                case 8:
                    parameters.Task_6_Priority = 128;
                    break;
            }
        }
        private void comboBox_Task6Schedule_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Task_6_Schedule = comboBox_Task6Schedule.SelectedIndex;
        }
        private void textBox_Task7Name_TextChanged(object sender, EventArgs e)
        {
            textBox_Task7Name.Text = textBox_Task7Name.Text.Replace(' ', '_');
            parameters.Task_7_Name = textBox_Task7Name.Text;
            textBox_Task7Name.Select(textBox_Task7Name.Text.Length, 0);
            tabPage_Task7.Text = textBox_Task7Name.Text;
        }

        private void checkBox_Task7Auto_CheckedChanged(object sender, EventArgs e)
        {
            parameters.Task_7_Autostart = checkBox_Task7Auto.Checked;
        }

        private void checkBox_Task7Stack_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Task7Stack.Checked)
            {
                parameters.Task_7_Stack = 2;
                numericUpDown_Task7StackSize.Enabled = true;
            }
            else
            {
                parameters.Task_7_Stack = 1;
                numericUpDown_Task7StackSize.Enabled = false;
            }
        }

        private void numericUpDown_Task7StackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_7_Stack_Size = (UInt16)numericUpDown_Task7StackSize.Value;
        }

        private void numericUpDown_Task7Activation_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_7_Activation = (Byte)numericUpDown_Task7Activation.Value;
        }

        private void comboBox_Task7Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (comboBox_Task7Priority.SelectedIndex)
            {
                case 0:
                    parameters.Task_7_Priority = 0;
                    break;
                case 1:
                    parameters.Task_7_Priority = 1;
                    break;
                case 2:
                    parameters.Task_7_Priority = 2;
                    break;
                case 3:
                    parameters.Task_7_Priority = 4;
                    break;
                case 4:
                    parameters.Task_7_Priority = 8;
                    break;
                case 5:
                    parameters.Task_7_Priority = 16;
                    break;
                case 6:
                    parameters.Task_7_Priority = 32;
                    break;
                case 7:
                    parameters.Task_7_Priority = 64;
                    break;
                case 8:
                    parameters.Task_7_Priority = 128;
                    break;
            }
        }
        private void comboBox_Task7Schedule_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Task_7_Schedule = comboBox_Task7Schedule.SelectedIndex;
        }
        private void textBox_Task8Name_TextChanged(object sender, EventArgs e)
        {
            textBox_Task8Name.Text = textBox_Task8Name.Text.Replace(' ', '_');
            parameters.Task_8_Name = textBox_Task8Name.Text;
            textBox_Task8Name.Select(textBox_Task8Name.Text.Length, 0);
            tabPage_Task8.Text = textBox_Task8Name.Text;
        }

        private void checkBox_Task8Auto_CheckedChanged(object sender, EventArgs e)
        {
            parameters.Task_8_Autostart = checkBox_Task8Auto.Checked;
        }

        private void checkBox_Task8Stack_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Task8Stack.Checked)
            {
                parameters.Task_8_Stack = 2;
                numericUpDown_Task8StackSize.Enabled = true;
            }
            else
            {
                parameters.Task_8_Stack = 1;
                numericUpDown_Task8StackSize.Enabled = false;
            }
        }

        private void numericUpDown_Task8StackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_8_Stack_Size = (UInt16)numericUpDown_Task8StackSize.Value;
        }

        private void numericUpDown_Task8Activation_ValueChanged(object sender, EventArgs e)
        {
            parameters.Task_8_Activation = (Byte)numericUpDown_Task8Activation.Value;
        }

        private void comboBox_Task8Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (comboBox_Task8Priority.SelectedIndex)
            {
                case 0:
                    parameters.Task_8_Priority = 0;
                    break;
                case 1:
                    parameters.Task_8_Priority = 1;
                    break;
                case 2:
                    parameters.Task_8_Priority = 2;
                    break;
                case 3:
                    parameters.Task_8_Priority = 4;
                    break;
                case 4:
                    parameters.Task_8_Priority = 8;
                    break;
                case 5:
                    parameters.Task_8_Priority = 16;
                    break;
                case 6:
                    parameters.Task_8_Priority = 32;
                    break;
                case 7:
                    parameters.Task_8_Priority = 64;
                    break;
                case 8:
                    parameters.Task_8_Priority = 128;
                    break;
            }
        }
        private void comboBox_Task8Schedule_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.Task_8_Schedule = comboBox_Task8Schedule.SelectedIndex;
        }

        private void checkedListBox_Task1_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if(checkedListBox_Task1.GetItemChecked(e.Index))
            {
                if (parameters.Task_1_Number_Events > 0)
                {
                    parameters.Task_1_Number_Events--;
                    //Deletes event and reorders list.
                    updateTaskEvents(1,(Int32)Math.Pow(2, (e.Index)));
                }
            }
            else
            {
                if (parameters.Task_1_Number_Events < 8)
                {
                    parameters.Task_1_Number_Events++;
                    parameters.setTaskEvent(1, parameters.Task_1_Number_Events, (Int32)Math.Pow(2, (e.Index)));
                }
            }
        }
        private void updateTaskEvents(Int32 Task, Int32 Valuetoskip)
        {
            Int32[] eventArray = new Int32[8];
            Byte Index = 0;
            switch(Task)
            {
                case 1:
                    foreach (object Item in checkedListBox_Task1.CheckedItems)
                    {
                        Int32 tempEvent = (Int32)Math.Pow(2, (checkedListBox_Task1.Items.IndexOf(Item)));
                        if (Valuetoskip != tempEvent)
                        {
                            eventArray[Index++] = tempEvent;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskEvent(1, (ushort)(i + 1), eventArray[i]);
                    }
                    parameters.Task_1_Number_Events = Index;
                    break;
                case 2:
                    foreach (object Item in checkedListBox_Task2.CheckedItems)
                    {
                        Int32 tempEvent = (Int32)Math.Pow(2, (checkedListBox_Task2.Items.IndexOf(Item)));
                        if (Valuetoskip != tempEvent)
                        {
                            eventArray[Index++] = tempEvent;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskEvent(2, (ushort)(i + 1), eventArray[i]);
                    }
                    parameters.Task_2_Number_Events = Index;
                    break;
                case 3:
                    foreach (object Item in checkedListBox_Task3.CheckedItems)
                    {
                        Int32 tempEvent = (Int32)Math.Pow(2, (checkedListBox_Task3.Items.IndexOf(Item)));
                        if (Valuetoskip != tempEvent)
                        {
                            eventArray[Index++] = tempEvent;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskEvent(3, (ushort)(i + 1), eventArray[i]);
                    }
                    parameters.Task_3_Number_Events = Index;
                    break;
                case 4:
                    foreach (object Item in checkedListBox_Task4.CheckedItems)
                    {
                        Int32 tempEvent = (Int32)Math.Pow(2, (checkedListBox_Task4.Items.IndexOf(Item)));
                        if (Valuetoskip != tempEvent)
                        {
                            eventArray[Index++] = tempEvent;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskEvent(4, (ushort)(i + 1), eventArray[i]);
                    }
                    parameters.Task_4_Number_Events = Index;
                    break;
                case 5:
                    foreach (object Item in checkedListBox_Task5.CheckedItems)
                    {
                        Int32 tempEvent = (Int32)Math.Pow(2, (checkedListBox_Task5.Items.IndexOf(Item)));
                        if (Valuetoskip != tempEvent)
                        {
                            eventArray[Index++] = tempEvent;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskEvent(5, (ushort)(i + 1), eventArray[i]);
                    }
                    parameters.Task_5_Number_Events = Index;
                    break;
                case 6:
                    foreach (object Item in checkedListBox_Task6.CheckedItems)
                    {
                        Int32 tempEvent = (Int32)Math.Pow(2, (checkedListBox_Task6.Items.IndexOf(Item)));
                        if (Valuetoskip != tempEvent)
                        {
                            eventArray[Index++] = tempEvent;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskEvent(6, (ushort)(i + 1), eventArray[i]);
                    }
                    parameters.Task_6_Number_Events = Index;
                    break;
                case 7:
                    foreach (object Item in checkedListBox_Task7.CheckedItems)
                    {
                        Int32 tempEvent = (Int32)Math.Pow(2, (checkedListBox_Task7.Items.IndexOf(Item)));
                        if (Valuetoskip != tempEvent)
                        {
                            eventArray[Index++] = tempEvent;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskEvent(7, (ushort)(i + 1), eventArray[i]);
                    }
                    parameters.Task_7_Number_Events = Index;
                    break;
                case 8:
                    foreach (object Item in checkedListBox_Task8.CheckedItems)
                    {
                        Int32 tempEvent = (Int32)Math.Pow(2, (checkedListBox_Task8.Items.IndexOf(Item)));
                        if (Valuetoskip != tempEvent)
                        {
                            eventArray[Index++] = tempEvent;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskEvent(8, (ushort)(i + 1), eventArray[i]);
                    }
                    parameters.Task_8_Number_Events = Index;
                    break;
                default:
                    break;
            }
            return;
        }

        public void removingEvent(Int32 EventIndex)
        {
            //Remove Item at index, then roll everything after the index one step to the start.
            //Do it for every task.
            for(Int32 i = EventIndex + 1; i < checkedListBox_Task1.Items.Count; i++)
            {
                if(checkedListBox_Task1.GetItemChecked(i))
                {
                    checkedListBox_Task1.SetItemChecked(i - 1, true);
                    checkedListBox_Task1.SetItemChecked(i, false);
                }
            }

            for (Int32 i = EventIndex + 1; i < checkedListBox_Task2.Items.Count; i++)
            {
                if (checkedListBox_Task2.GetItemChecked(i))
                {
                    checkedListBox_Task2.SetItemChecked(i - 1, true);
                    checkedListBox_Task2.SetItemChecked(i, false);
                }
            }

            for (Int32 i = EventIndex + 1; i < checkedListBox_Task3.Items.Count; i++)
            {
                if (checkedListBox_Task3.GetItemChecked(i))
                {
                    checkedListBox_Task3.SetItemChecked(i - 1, true);
                    checkedListBox_Task3.SetItemChecked(i, false);
                }
            }

            for (Int32 i = EventIndex + 1; i < checkedListBox_Task4.Items.Count; i++)
            {
                if (checkedListBox_Task4.GetItemChecked(i))
                {
                    checkedListBox_Task4.SetItemChecked(i - 1, true);
                    checkedListBox_Task4.SetItemChecked(i, false);
                }
            }

            for (Int32 i = EventIndex + 1; i < checkedListBox_Task5.Items.Count; i++)
            {
                if (checkedListBox_Task5.GetItemChecked(i))
                {
                    checkedListBox_Task5.SetItemChecked(i - 1, true);
                    checkedListBox_Task5.SetItemChecked(i, false);
                }
            }

            for (Int32 i = EventIndex + 1; i < checkedListBox_Task6.Items.Count; i++)
            {
                if (checkedListBox_Task6.GetItemChecked(i))
                {
                    checkedListBox_Task6.SetItemChecked(i - 1, true);
                    checkedListBox_Task6.SetItemChecked(i, false);
                }
            }

            for (Int32 i = EventIndex + 1; i < checkedListBox_Task7.Items.Count; i++)
            {
                if (checkedListBox_Task7.GetItemChecked(i))
                {
                    checkedListBox_Task7.SetItemChecked(i - 1, true);
                    checkedListBox_Task7.SetItemChecked(i, false);
                }
            }

            for (Int32 i = EventIndex + 1; i < checkedListBox_Task8.Items.Count; i++)
            {
                if (checkedListBox_Task8.GetItemChecked(i))
                {
                    checkedListBox_Task8.SetItemChecked(i - 1, true);
                    checkedListBox_Task8.SetItemChecked(i, false);
                }
            }

            //Update everything to reflect changes
            UpdateForm();
        }

        private void checkedListBox_Task2_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task2.GetItemChecked(e.Index))
            {
                if (parameters.Task_2_Number_Events > 0)
                {
                    parameters.Task_2_Number_Events--;
                    //Deletes event and reorders list.
                    updateTaskEvents(2,(Int32)Math.Pow(2, (e.Index)));
                }
            }
            else
            {
                if (parameters.Task_2_Number_Events < 8)
                {
                    parameters.Task_2_Number_Events++;
                    parameters.setTaskEvent(2, parameters.Task_2_Number_Events, (Int32)Math.Pow(2, (e.Index)));
                }
            }
        }

        private void checkedListBox_Task3_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task3.GetItemChecked(e.Index))
            {
                if (parameters.Task_3_Number_Events > 0)
                {
                    parameters.Task_3_Number_Events--;
                    //Deletes event and reorders list.
                    updateTaskEvents(3,(Int32)Math.Pow(2, (e.Index)));
                }
            }
            else
            {
                if (parameters.Task_3_Number_Events < 8)
                {
                    parameters.Task_3_Number_Events++;
                    parameters.setTaskEvent(3, parameters.Task_3_Number_Events, (Int32)Math.Pow(2, (e.Index)));
                }
            }
        }

        private void checkedListBox_Task4_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task4.GetItemChecked(e.Index))
            {
                if (parameters.Task_4_Number_Events > 0)
                {
                    parameters.Task_4_Number_Events--;
                    //Deletes event and reorders list.
                    updateTaskEvents(4,(Int32)Math.Pow(2, (e.Index)));
                }
            }
            else
            {
                if (parameters.Task_4_Number_Events < 8)
                {
                    parameters.Task_4_Number_Events++;
                    parameters.setTaskEvent(4, parameters.Task_4_Number_Events, (Int32)Math.Pow(2, (e.Index)));
                }
            }
        }

        private void checkedListBox_Task5_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task5.GetItemChecked(e.Index))
            {
                if (parameters.Task_5_Number_Events > 0)
                {
                    parameters.Task_5_Number_Events--;
                    //Deletes event and reorders list.
                    updateTaskEvents(5,(Int32)Math.Pow(2, (e.Index)));
                }
            }
            else
            {
                if (parameters.Task_5_Number_Events < 8)
                {
                    parameters.Task_5_Number_Events++;
                    parameters.setTaskEvent(5, parameters.Task_5_Number_Events, (Int32)Math.Pow(2, (e.Index)));
                }
            }
        }

        private void checkedListBox_Task6_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task6.GetItemChecked(e.Index))
            {
                if (parameters.Task_6_Number_Events > 0)
                {
                    parameters.Task_6_Number_Events--;
                    //Deletes event and reorders list.
                    updateTaskEvents(6,(Int32)Math.Pow(2, (e.Index)));
                }
            }
            else
            {
                if (parameters.Task_6_Number_Events < 8)
                {
                    parameters.Task_6_Number_Events++;
                    parameters.setTaskEvent(6, parameters.Task_6_Number_Events, (Int32)Math.Pow(2, (e.Index)));
                }
            }
        }

        private void checkedListBox_Task7_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task7.GetItemChecked(e.Index))
            {
                if (parameters.Task_7_Number_Events > 0)
                {
                    parameters.Task_7_Number_Events--;
                    //Deletes event and reorders list.
                    updateTaskEvents(7,(Int32)Math.Pow(2, (e.Index)));
                }
            }
            else
            {
                if (parameters.Task_7_Number_Events < 8)
                {
                    parameters.Task_7_Number_Events++;
                    parameters.setTaskEvent(7, parameters.Task_7_Number_Events, (Int32)Math.Pow(2, (e.Index)));
                }
            }
        }

        private void checkedListBox_Task8_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task8.GetItemChecked(e.Index))
            {
                if (parameters.Task_8_Number_Events > 0)
                {
                    parameters.Task_8_Number_Events--;
                    //Deletes event and reorders list.
                    updateTaskEvents(8,(Int32)Math.Pow(2, (e.Index)));
                }
            }
            else
            {
                if (parameters.Task_8_Number_Events < 8)
                {
                    parameters.Task_8_Number_Events++;
                    parameters.setTaskEvent(8, parameters.Task_8_Number_Events, (Int32)Math.Pow(2, (e.Index)));
                }
            }
        }

        private void updateTaskResources(Int32 TaskNumber, Int32 ResourceNumberToSkip)
        {
            Int32[] resourceArray = new Int32[8];
            Byte Index = 0;
            switch (TaskNumber)
            {
                case 1:
                    foreach (object Item in checkedListBox_Task1_Resource.CheckedItems)
                    {
                        Int32 tempResource = checkedListBox_Task1_Resource.Items.IndexOf(Item) + 1;
                        if (ResourceNumberToSkip != tempResource)
                        {
                            resourceArray[Index++] = tempResource;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskResource(1, (ushort)(i + 1), resourceArray[i]);
                    }
                    parameters.Task_1_Number_Resources = Index;
                    break;
                case 2:
                    foreach (object Item in checkedListBox_Task2_Resource.CheckedItems)
                    {
                        Int32 tempResource = checkedListBox_Task2_Resource.Items.IndexOf(Item) + 1;
                        if (ResourceNumberToSkip != tempResource)
                        {
                            resourceArray[Index++] = tempResource;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskResource(2, (ushort)(i + 1), resourceArray[i]);
                    }
                    parameters.Task_2_Number_Resources = Index;
                    break;
                case 3:
                    foreach (object Item in checkedListBox_Task3_Resource.CheckedItems)
                    {
                        Int32 tempResource = checkedListBox_Task3_Resource.Items.IndexOf(Item) + 1;
                        if (ResourceNumberToSkip != tempResource)
                        {
                            resourceArray[Index++] = tempResource;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskResource(3, (ushort)(i + 1), resourceArray[i]);
                    }
                    parameters.Task_3_Number_Resources = Index;
                    break;
                case 4:
                    foreach (object Item in checkedListBox_Task4_Resource.CheckedItems)
                    {
                        Int32 tempResource = checkedListBox_Task4_Resource.Items.IndexOf(Item) + 1;
                        if (ResourceNumberToSkip != tempResource)
                        {
                            resourceArray[Index++] = tempResource;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskResource(4, (ushort)(i + 1), resourceArray[i]);
                    }
                    parameters.Task_4_Number_Resources = Index;
                    break;
                case 5:
                    foreach (object Item in checkedListBox_Task5_Resource.CheckedItems)
                    {
                        Int32 tempResource = checkedListBox_Task5_Resource.Items.IndexOf(Item) + 1;
                        if (ResourceNumberToSkip != tempResource)
                        {
                            resourceArray[Index++] = tempResource;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskResource(5, (ushort)(i + 1), resourceArray[i]);
                    }
                    parameters.Task_5_Number_Resources = Index;
                    break;
                case 6:
                    foreach (object Item in checkedListBox_Task6_Resource.CheckedItems)
                    {
                        Int32 tempResource = checkedListBox_Task6_Resource.Items.IndexOf(Item) + 1;
                        if (ResourceNumberToSkip != tempResource)
                        {
                            resourceArray[Index++] = tempResource;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskResource(6, (ushort)(i + 1), resourceArray[i]);
                    }
                    parameters.Task_6_Number_Resources = Index;
                    break;
                case 7:
                    foreach (object Item in checkedListBox_Task7_Resource.CheckedItems)
                    {
                        Int32 tempResource = checkedListBox_Task7_Resource.Items.IndexOf(Item) + 1;
                        if (ResourceNumberToSkip != tempResource)
                        {
                            resourceArray[Index++] = tempResource;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskResource(7, (ushort)(i + 1), resourceArray[i]);
                    }
                    parameters.Task_7_Number_Resources = Index;
                    break;
                case 8:
                    foreach (object Item in checkedListBox_Task8_Resource.CheckedItems)
                    {
                        Int32 tempResource = checkedListBox_Task8_Resource.Items.IndexOf(Item) + 1;
                        if (ResourceNumberToSkip != tempResource)
                        {
                            resourceArray[Index++] = tempResource;
                        }
                    }

                    for (Int32 i = 0; i < Index; i++)
                    {
                        parameters.setTaskResource(8, (ushort)(i + 1), resourceArray[i]);
                    }
                    parameters.Task_8_Number_Resources = Index;
                    break;
                default:
                    break;
            }
            return;
        }

        private void checkedListBox_Task1_Resource_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task1_Resource.GetItemChecked(e.Index))
            {
                if (parameters.Task_1_Number_Resources > 0)
                {
                    parameters.Task_1_Number_Resources--;
                    //Deletes event and reorders list.
                    updateTaskResources(1, e.Index + 1);
                }
            }
            else
            {
                if (parameters.Task_1_Number_Resources < 8)
                {
                    parameters.Task_1_Number_Resources++;
                    parameters.setTaskResource(1, parameters.Task_1_Number_Resources, e.Index + 1);
                }
            }
        }

        public void removingResource(Int32 Index)
        {
            //Remove Item at index, then roll everything after the index one step to the start.
            //Do it for every task.
            checkedListBox_Task1_Resource.SetItemChecked(Index, false);
            for (Int32 i = Index + 1; i < checkedListBox_Task1_Resource.Items.Count; i++)
            {
                if (checkedListBox_Task1_Resource.GetItemChecked(i))
                {
                    checkedListBox_Task1_Resource.SetItemChecked(i - 1, true);
                    checkedListBox_Task1_Resource.SetItemChecked(i, false);
                }
            }

            checkedListBox_Task2_Resource.SetItemChecked(Index, false);
            for (Int32 i = Index + 1; i < checkedListBox_Task2_Resource.Items.Count; i++)
            {
                if (checkedListBox_Task2_Resource.GetItemChecked(i))
                {
                    checkedListBox_Task2_Resource.SetItemChecked(i - 1, true);
                    checkedListBox_Task2_Resource.SetItemChecked(i, false);
                }
            }

            checkedListBox_Task3_Resource.SetItemChecked(Index, false);
            for (Int32 i = Index + 1; i < checkedListBox_Task3_Resource.Items.Count; i++)
            {
                if (checkedListBox_Task3_Resource.GetItemChecked(i))
                {
                    checkedListBox_Task3_Resource.SetItemChecked(i - 1, true);
                    checkedListBox_Task3_Resource.SetItemChecked(i, false);
                }
            }

            checkedListBox_Task4_Resource.SetItemChecked(Index, false);
            for (Int32 i = Index + 1; i < checkedListBox_Task4_Resource.Items.Count; i++)
            {
                if (checkedListBox_Task4_Resource.GetItemChecked(i))
                {
                    checkedListBox_Task4_Resource.SetItemChecked(i - 1, true);
                    checkedListBox_Task4_Resource.SetItemChecked(i, false);
                }
            }

            checkedListBox_Task5_Resource.SetItemChecked(Index, false);
            for (Int32 i = Index + 1; i < checkedListBox_Task5_Resource.Items.Count; i++)
            {
                if (checkedListBox_Task5_Resource.GetItemChecked(i))
                {
                    checkedListBox_Task5_Resource.SetItemChecked(i - 1, true);
                    checkedListBox_Task5_Resource.SetItemChecked(i, false);
                }
            }

            checkedListBox_Task6_Resource.SetItemChecked(Index, false);
            for (Int32 i = Index + 1; i < checkedListBox_Task6_Resource.Items.Count; i++)
            {
                if (checkedListBox_Task6_Resource.GetItemChecked(i))
                {
                    checkedListBox_Task6_Resource.SetItemChecked(i - 1, true);
                    checkedListBox_Task6_Resource.SetItemChecked(i, false);
                }
            }

            checkedListBox_Task7_Resource.SetItemChecked(Index, false);
            for (Int32 i = Index + 1; i < checkedListBox_Task7_Resource.Items.Count; i++)
            {
                if (checkedListBox_Task7_Resource.GetItemChecked(i))
                {
                    checkedListBox_Task7_Resource.SetItemChecked(i - 1, true);
                    checkedListBox_Task7_Resource.SetItemChecked(i, false);
                }
            }

            checkedListBox_Task8_Resource.SetItemChecked(Index, false);
            for (Int32 i = Index + 1; i < checkedListBox_Task8_Resource.Items.Count; i++)
            {
                if (checkedListBox_Task8_Resource.GetItemChecked(i))
                {
                    checkedListBox_Task8_Resource.SetItemChecked(i - 1, true);
                    checkedListBox_Task8_Resource.SetItemChecked(i, false);
                }
            }

            //Update everything to reflect changes
            UpdateForm();
            return;
        }

        private void checkedListBox_Task2_Resource_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task2_Resource.GetItemChecked(e.Index))
            {
                if (parameters.Task_2_Number_Resources > 0)
                {
                    parameters.Task_2_Number_Resources--;
                    //Deletes event and reorders list.
                    updateTaskResources(2, e.Index + 1);
                }
            }
            else
            {
                if (parameters.Task_2_Number_Resources < 8)
                {
                    parameters.Task_2_Number_Resources++;
                    parameters.setTaskResource(2, parameters.Task_2_Number_Resources, e.Index + 1);
                }
            }
        }

        private void checkedListBox_Task3_Resource_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task3_Resource.GetItemChecked(e.Index))
            {
                if (parameters.Task_3_Number_Resources > 0)
                {
                    parameters.Task_3_Number_Resources--;
                    //Deletes event and reorders list.
                    updateTaskResources(3, e.Index + 1);
                }
            }
            else
            {
                if (parameters.Task_3_Number_Resources < 8)
                {
                    parameters.Task_3_Number_Resources++;
                    parameters.setTaskResource(3, parameters.Task_3_Number_Resources, e.Index + 1);
                }
            }
        }

        private void checkedListBox_Task4_Resource_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task4_Resource.GetItemChecked(e.Index))
            {
                if (parameters.Task_4_Number_Resources > 0)
                {
                    parameters.Task_4_Number_Resources--;
                    //Deletes event and reorders list.
                    updateTaskResources(4, e.Index + 1);
                }
            }
            else
            {
                if (parameters.Task_4_Number_Resources < 8)
                {
                    parameters.Task_4_Number_Resources++;
                    parameters.setTaskResource(4, parameters.Task_4_Number_Resources, e.Index + 1);
                }
            }
        }

        private void checkedListBox_Task5_Resource_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task5_Resource.GetItemChecked(e.Index))
            {
                if (parameters.Task_5_Number_Resources > 0)
                {
                    parameters.Task_5_Number_Resources--;
                    //Deletes event and reorders list.
                    updateTaskResources(5, e.Index + 1);
                }
            }
            else
            {
                if (parameters.Task_5_Number_Resources < 8)
                {
                    parameters.Task_5_Number_Resources++;
                    parameters.setTaskResource(5, parameters.Task_5_Number_Resources, e.Index + 1);
                }
            }
        }

        private void checkedListBox_Task6_Resource_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task6_Resource.GetItemChecked(e.Index))
            {
                if (parameters.Task_6_Number_Resources > 0)
                {
                    parameters.Task_6_Number_Resources--;
                    //Deletes event and reorders list.
                    updateTaskResources(6, e.Index + 1);
                }
            }
            else
            {
                if (parameters.Task_6_Number_Resources < 8)
                {
                    parameters.Task_6_Number_Resources++;
                    parameters.setTaskResource(6, parameters.Task_6_Number_Resources, e.Index + 1);
                }
            }
        }

        private void checkedListBox_Task7_Resource_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task7_Resource.GetItemChecked(e.Index))
            {
                if (parameters.Task_7_Number_Resources > 0)
                {
                    parameters.Task_7_Number_Resources--;
                    //Deletes event and reorders list.
                    updateTaskResources(7, e.Index + 1);
                }
            }
            else
            {
                if (parameters.Task_7_Number_Resources < 8)
                {
                    parameters.Task_7_Number_Resources++;
                    parameters.setTaskResource(7, parameters.Task_7_Number_Resources, e.Index + 1);
                }
            }
        }

        private void checkedListBox_Task8_Resource_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (checkedListBox_Task8_Resource.GetItemChecked(e.Index))
            {
                if (parameters.Task_8_Number_Resources > 0)
                {
                    parameters.Task_8_Number_Resources--;
                    //Deletes event and reorders list.
                    updateTaskResources(8, e.Index + 1);
                }
            }
            else
            {
                if (parameters.Task_8_Number_Resources < 8)
                {
                    parameters.Task_8_Number_Resources++;
                    parameters.setTaskResource(8, parameters.Task_8_Number_Resources, e.Index + 1);
                }
            }
        }

        private void comboBox_Task1Priority_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task1Priority, "Higher priority tasks interrupt lower priority tasks.");
        }

        private void comboBox_Task1Schedule_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task1Schedule, "A NON Scheduled task can't be interrupted by other tasks once started.");
        }

        private void comboBox_Task2Priority_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task2Priority, "Higher priority tasks interrupt lower priority tasks.");
        }

        private void comboBox_Task2Schedule_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task2Schedule, "A NON Scheduled task can't be interrupted by other tasks once started.");
        }

        private void comboBox_Task3Priority_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task3Priority, "Higher priority tasks interrupt lower priority tasks.");
        }

        private void comboBox_Task3Schedule_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task3Schedule, "A NON Scheduled task can't be interrupted by other tasks once started.");
        }

        private void comboBox_Task4Priority_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task4Priority, "Higher priority tasks interrupt lower priority tasks.");
        }

        private void comboBox_Task4Schedule_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task4Schedule, "A NON Scheduled task can't be interrupted by other tasks once started.");
        }

        private void comboBox_Task5Priority_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task5Priority, "Higher priority tasks interrupt lower priority tasks.");
        }

        private void comboBox_Task5Schedule_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task5Schedule, "A NON Scheduled task can't be interrupted by other tasks once started.");
        }

        private void comboBox_Task6Priority_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task6Priority, "Higher priority tasks interrupt lower priority tasks.");
        }

        private void comboBox_Task6Schedule_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task6Schedule, "A NON Scheduled task can't be interrupted by other tasks once started.");
        }

        private void comboBox_Task7Priority_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task7Priority, "Higher priority tasks interrupt lower priority tasks.");
        }

        private void comboBox_Task7Schedule_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task7Schedule, "A NON Scheduled task can't be interrupted by other tasks once started.");
        }

        private void comboBox_Task8Priority_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task8Priority, "Higher priority tasks interrupt lower priority tasks.");
        }

        private void comboBox_Task8Schedule_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_Task8Schedule, "A NON Scheduled task can't be interrupted by other tasks once started.");
        }
    }
}
