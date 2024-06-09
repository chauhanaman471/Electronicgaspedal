using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;

namespace ErikaOS_v2_5_3
{
    public partial class ErikaOSEventsResources : UserControl
    {
        private ErikaOSParameters parameters;

        public ErikaOSEventsResources(ErikaOSParameters parameters)
        {
            InitializeComponent();
            this.parameters = parameters;
            UpdateForm();
        }

        public void UpdateForm()
        {
            listBox_Events.Items.Clear();
            if (parameters.Number_of_Events > 0)
            {
                listBox_Events.Items.Add(parameters.Event_1);
                button_RemoveEvent.Enabled = true;
            }
            else button_RemoveEvent.Enabled = false;
            if (parameters.Number_of_Events > 1)
                listBox_Events.Items.Add(parameters.Event_2);
            if (parameters.Number_of_Events > 2)
                listBox_Events.Items.Add(parameters.Event_3);
            if (parameters.Number_of_Events > 3)
                listBox_Events.Items.Add(parameters.Event_4);
            if (parameters.Number_of_Events > 4)
                listBox_Events.Items.Add(parameters.Event_5);
            if (parameters.Number_of_Events > 5)
                listBox_Events.Items.Add(parameters.Event_6);
            if (parameters.Number_of_Events > 6)
                listBox_Events.Items.Add(parameters.Event_7);
            if (parameters.Number_of_Events > 7)
                listBox_Events.Items.Add(parameters.Event_8);
            if (parameters.Number_of_Events > 8)
                listBox_Events.Items.Add(parameters.Event_9);
            if (parameters.Number_of_Events > 9)
                listBox_Events.Items.Add(parameters.Event_10);
            if (parameters.Number_of_Events > 10)
                listBox_Events.Items.Add(parameters.Event_11);
            if (parameters.Number_of_Events > 11)
                listBox_Events.Items.Add(parameters.Event_12);
            if (parameters.Number_of_Events > 12)
                listBox_Events.Items.Add(parameters.Event_13);
            if (parameters.Number_of_Events > 13)
                listBox_Events.Items.Add(parameters.Event_14);
            if (parameters.Number_of_Events > 14)
                listBox_Events.Items.Add(parameters.Event_15);
            if (parameters.Number_of_Events > 15)
                listBox_Events.Items.Add(parameters.Event_16);
            if (parameters.Number_of_Events > 16)
                listBox_Events.Items.Add(parameters.Event_17);
            if (parameters.Number_of_Events > 17)
                listBox_Events.Items.Add(parameters.Event_18);
            if (parameters.Number_of_Events > 18)
                listBox_Events.Items.Add(parameters.Event_19);
            if (parameters.Number_of_Events > 19)
                listBox_Events.Items.Add(parameters.Event_20);
            if (parameters.Number_of_Events > 20)
                listBox_Events.Items.Add(parameters.Event_21);
            if (parameters.Number_of_Events > 21)
                listBox_Events.Items.Add(parameters.Event_22);
            if (parameters.Number_of_Events > 22)
                listBox_Events.Items.Add(parameters.Event_23);
            if (parameters.Number_of_Events > 23)
                listBox_Events.Items.Add(parameters.Event_24);
            if (parameters.Number_of_Events > 24)
                listBox_Events.Items.Add(parameters.Event_25);
            if (parameters.Number_of_Events > 25)
                listBox_Events.Items.Add(parameters.Event_26);
            if (parameters.Number_of_Events > 26)
                listBox_Events.Items.Add(parameters.Event_27);
            if (parameters.Number_of_Events > 27)
                listBox_Events.Items.Add(parameters.Event_28);
            if (parameters.Number_of_Events > 28)
                listBox_Events.Items.Add(parameters.Event_29);
            if (parameters.Number_of_Events > 29)
                listBox_Events.Items.Add(parameters.Event_30);
            if (parameters.Number_of_Events > 30)
            {
                listBox_Events.Items.Add(parameters.Event_31);
                button_AddEvent.Enabled = false;
            }

            listBox_Resources.Items.Clear();
            if (parameters.Number_of_Resources > 0)
            {
                listBox_Resources.Items.Add(parameters.Resource_1);
                button_RemoveResources.Enabled = true;
            }
            else button_RemoveResources.Enabled = false;
            if (parameters.Number_of_Resources > 1)
                listBox_Resources.Items.Add(parameters.Resource_2);
            if (parameters.Number_of_Resources > 2)
                listBox_Resources.Items.Add(parameters.Resource_3);
            if (parameters.Number_of_Resources > 3)
                listBox_Resources.Items.Add(parameters.Resource_4);
            if (parameters.Number_of_Resources > 4)
                listBox_Resources.Items.Add(parameters.Resource_5);
            if (parameters.Number_of_Resources > 5)
                listBox_Resources.Items.Add(parameters.Resource_6);
            if (parameters.Number_of_Resources > 6)
                listBox_Resources.Items.Add(parameters.Resource_7);
            if (parameters.Number_of_Resources > 7)
            {
                listBox_Resources.Items.Add(parameters.Resource_8);
                button_AddResources.Enabled = false;
            }
        }

        private void textBox_EventName_TextChanged(object sender, EventArgs e)
        {
            textBox_EventName.Text = textBox_EventName.Text.Replace(' ', '_');
            textBox_EventName.Select(textBox_EventName.Text.Length, 0);
        }

        private void button_AddEvent_Click_1(object sender, EventArgs e)
        {
            if ((!listBox_Events.Items.Contains(textBox_EventName.Text)) && (parameters.Number_of_Events < 31) && (textBox_EventName.Text.Length > 0))
            {
                listBox_Events.Items.Add(textBox_EventName.Text);
                switch (parameters.Number_of_Events)
                {
                    case 0:
                        parameters.Event_1 = textBox_EventName.Text;
                        break;
                    case 1:
                        parameters.Event_2 = textBox_EventName.Text;
                        break;
                    case 2:
                        parameters.Event_3 = textBox_EventName.Text;
                        break;
                    case 3:
                        parameters.Event_4 = textBox_EventName.Text;
                        break;
                    case 4:
                        parameters.Event_5 = textBox_EventName.Text;
                        break;
                    case 5:
                        parameters.Event_6 = textBox_EventName.Text;
                        break;
                    case 6:
                        parameters.Event_7 = textBox_EventName.Text;
                        break;
                    case 7:
                        parameters.Event_8 = textBox_EventName.Text;
                        break;
                    case 8:
                        parameters.Event_9 = textBox_EventName.Text;
                        break;
                    case 9:
                        parameters.Event_10 = textBox_EventName.Text;
                        break;
                    case 10:
                        parameters.Event_11 = textBox_EventName.Text;
                        break;
                    case 11:
                        parameters.Event_12 = textBox_EventName.Text;
                        break;
                    case 12:
                        parameters.Event_13 = textBox_EventName.Text;
                        break;
                    case 13:
                        parameters.Event_14 = textBox_EventName.Text;
                        break;
                    case 14:
                        parameters.Event_15 = textBox_EventName.Text;
                        break;
                    case 15:
                        parameters.Event_16 = textBox_EventName.Text;
                        break;
                    case 16:
                        parameters.Event_17 = textBox_EventName.Text;
                        break;
                    case 17:
                        parameters.Event_18 = textBox_EventName.Text;
                        break;
                    case 18:
                        parameters.Event_19 = textBox_EventName.Text;
                        break;
                    case 19:
                        parameters.Event_20 = textBox_EventName.Text;
                        break;
                    case 20:
                        parameters.Event_21 = textBox_EventName.Text;
                        break;
                    case 21:
                        parameters.Event_22 = textBox_EventName.Text;
                        break;
                    case 22:
                        parameters.Event_23 = textBox_EventName.Text;
                        break;
                    case 23:
                        parameters.Event_24 = textBox_EventName.Text;
                        break;
                    case 24:
                        parameters.Event_25 = textBox_EventName.Text;
                        break;
                    case 25:
                        parameters.Event_26 = textBox_EventName.Text;
                        break;
                    case 26:
                        parameters.Event_27 = textBox_EventName.Text;
                        break;
                    case 27:
                        parameters.Event_28 = textBox_EventName.Text;
                        break;
                    case 28:
                        parameters.Event_29 = textBox_EventName.Text;
                        break;
                    case 29:
                        parameters.Event_30 = textBox_EventName.Text;
                        break;
                    case 30:
                        parameters.Event_31 = textBox_EventName.Text;
                        break;
                    default:
                        return;
                }
                parameters.Number_of_Events++;
                if(!button_RemoveEvent.Enabled)
                    button_RemoveEvent.Enabled = true;
            }
            if (parameters.Number_of_Events >= 31)
            {
                parameters.Number_of_Events = 31;
                button_AddEvent.Enabled = false;
            }
            parameters.task.UpdateForm();
            parameters.alarms.updateAlarms();
        }

        private void button_RemoveEvent_Click(object sender, EventArgs e)
        {
            if (listBox_Events.SelectedIndex != -1)
            {
                Int32 Counter = 1;
                Int32 Index = listBox_Events.SelectedIndex;
                if (parameters.Number_of_Events > 0)
                {
                    listBox_Events.Items.RemoveAt(Index);
                    parameters.Number_of_Events--;
                    if (!button_AddEvent.Enabled)
                        button_AddEvent.Enabled = true;
                }
                if (parameters.Number_of_Events == 0)
                    button_RemoveEvent.Enabled = false;
                foreach (object Item in listBox_Events.Items)
                {
                    parameters.setErikaEvent(Counter++, Item.ToString());
                }
                parameters.task.removingEvent(Index);
                parameters.alarms.updateAlarms();
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            textBox_EventName.Text = textBox_EventName.Text.Replace(' ', '_');
            textBox_EventName.Select(textBox_EventName.Text.Length, 0);
        }

        private void button_AddResources_Click(object sender, EventArgs e)
        {
            if ((!listBox_Resources.Items.Contains(textBox_ResourceName.Text)) && (parameters.Number_of_Resources < 8) && (textBox_ResourceName.Text.Length > 0))
            {
                listBox_Resources.Items.Add(textBox_ResourceName.Text);
                switch (parameters.Number_of_Resources)
                {
                    case 0:
                        parameters.Resource_1 = textBox_ResourceName.Text;
                        break;
                    case 1:
                        parameters.Resource_2 = textBox_ResourceName.Text;
                        break;
                    case 2:
                        parameters.Resource_3 = textBox_ResourceName.Text;
                        break;
                    case 3:
                        parameters.Resource_4 = textBox_ResourceName.Text;
                        break;
                    case 4:
                        parameters.Resource_5 = textBox_ResourceName.Text;
                        break;
                    case 5:
                        parameters.Resource_6 = textBox_ResourceName.Text;
                        break;
                    case 6:
                        parameters.Resource_7 = textBox_ResourceName.Text;
                        break;
                    case 7:
                        parameters.Resource_8 = textBox_ResourceName.Text;
                        break;
                    default:
                        return;
                }
                parameters.isrs.AddedResource(textBox_ResourceName.Text);
                parameters.Number_of_Resources++;
                if (!button_RemoveResources.Enabled)
                    button_RemoveResources.Enabled = true;
            }
            if (parameters.Number_of_Resources >= 8)
            {
                parameters.Number_of_Resources = 8;
                button_AddResources.Enabled = false;
            }
            parameters.task.UpdateForm();
        }

        private void button_RemoveResources_Click(object sender, EventArgs e)
        {
            if (listBox_Resources.SelectedIndex != -1)
            {
                Int32 Counter = 1;
                Int32 Index = listBox_Resources.SelectedIndex;
                if (parameters.Number_of_Resources > 0)
                {
                    listBox_Resources.Items.RemoveAt(Index);
                    parameters.Number_of_Resources--;
                    if (!button_AddResources.Enabled)
                        button_AddResources.Enabled = true;
                }
                if (parameters.Number_of_Resources == 0)
                    button_RemoveResources.Enabled = false;
                foreach (object Item in listBox_Resources.Items)
                {
                    parameters.setErikaResource(Counter++, Item.ToString());
                }
                parameters.task.removingResource(Index);
                parameters.isrs.RemovedResource(Index + 1);
            }
        }
    }
}
