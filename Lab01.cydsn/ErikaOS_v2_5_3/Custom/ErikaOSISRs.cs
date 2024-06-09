using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;

namespace ErikaOS_v2_5_3
{
    public partial class ErikaOSISRs : UserControl
    {
        private ErikaOSParameters parameters;

        public ErikaOSISRs(ErikaOSParameters parameters)
        {
            InitializeComponent();
            this.parameters = parameters;
            UpdateForm();
        }

        //Update Form Function
        // Updates form with saved parameters when the GUI is opened.
        public void UpdateForm()
        {
            tabControl_ISR.TabPages.Clear();
            for(Int32 i = 0; i < parameters.Number_of_ISR; i++)
            {
                tabControl_ISR.TabPages.Add(GetISRPage(i));
                UpdateResourceList(i);
                ReadISRValues(i);
            }
        }

        private void UpdateResourceList(Int32 Page)
        {
            switch (Page)
            {
                case 0:
                    ISR_1_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_1_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 1:
                    ISR_2_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_2_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 2:
                    ISR_3_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_3_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 3:
                    ISR_4_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_4_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 4:
                    ISR_5_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_5_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 5:
                    ISR_6_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_6_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 6:
                    ISR_7_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_7_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 7:
                    ISR_8_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_8_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 8:
                    ISR_9_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_9_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 9:
                    ISR_10_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_10_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 10:
                    ISR_11_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_11_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 11:
                    ISR_12_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_12_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 12:
                    ISR_13_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_13_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 13:
                    ISR_14_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_14_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 14:
                    ISR_15_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_15_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
                case 15:
                    ISR_16_Resource.Items.Clear();
                    for (Int32 i = 0; i < parameters.Number_of_Resources; i++)
                    {
                        ISR_16_Resource.Items.Add(parameters.getErikaResource(i + 1));
                    }
                    break;
            }
        }

        public void RemovedResource(Int32 ResourceNumber)
        {
            if (parameters.Number_of_ISR > 0)
            {
                if ((ISR_1_Resource.SelectedIndex + 1) == ResourceNumber)
                {
                    ISR_1_UseResource.Checked = false;
                    ISR_1_Resource.SelectedIndex = -1;
                    ISR_1_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_1_Resource.Enabled = false;
                }
                else if ((ISR_1_Resource.SelectedIndex + 1) > ResourceNumber)
                {
                    Int32 newIndex = ISR_1_Resource.SelectedIndex - 1;
                    ISR_1_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_1_Resource.SelectedIndex = newIndex;
                    parameters.ISR_1_Resource--;
                }
                else
                {
                    ISR_1_Resource.Items.RemoveAt(ResourceNumber - 1);
                }
            }
            if (parameters.Number_of_ISR > 1)
            {
            if ((ISR_2_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_2_UseResource.Checked = false;
                ISR_2_Resource.SelectedIndex = -1;
                ISR_2_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_2_Resource.Enabled = false;
            }
            else if ((ISR_2_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_2_Resource.SelectedIndex - 1;
                ISR_2_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_2_Resource.SelectedIndex = newIndex;
                    parameters.ISR_2_Resource--;

                }
                else
            {
                ISR_2_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 2)
            {
                if ((ISR_3_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_3_UseResource.Checked = false;
                ISR_3_Resource.SelectedIndex = -1;
                    ISR_3_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_3_Resource.Enabled = false;
            }
            else if ((ISR_3_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_3_Resource.SelectedIndex - 1;
                ISR_3_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_3_Resource.SelectedIndex = newIndex;
                    parameters.ISR_3_Resource--;

                }
                else
            {
                ISR_3_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 3)
            {
                if ((ISR_4_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_4_UseResource.Checked = false;
                ISR_4_Resource.SelectedIndex = -1;
                    ISR_4_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_4_Resource.Enabled = false;
            }
            else if ((ISR_4_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_4_Resource.SelectedIndex - 1;
                ISR_4_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_4_Resource.SelectedIndex = newIndex;
                    parameters.ISR_4_Resource--;

                }
                else
            {
                ISR_4_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 4)
            {
                if ((ISR_5_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_5_UseResource.Checked = false;
                ISR_5_Resource.SelectedIndex = -1;
                    ISR_5_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_5_Resource.Enabled = false;
            }
            else if ((ISR_5_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_5_Resource.SelectedIndex - 1;
                ISR_5_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_5_Resource.SelectedIndex = newIndex;
                    parameters.ISR_5_Resource--;

                }
                else
            {
                ISR_5_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 5)
            {
                if ((ISR_6_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_6_UseResource.Checked = false;
                ISR_6_Resource.SelectedIndex = -1;
                    ISR_6_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_6_Resource.Enabled = false;
            }
            else if ((ISR_6_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_6_Resource.SelectedIndex - 1;
                ISR_6_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_6_Resource.SelectedIndex = newIndex;
                    parameters.ISR_6_Resource--;

                }
                else
            {
                ISR_6_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 6)
            {
                if ((ISR_7_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_7_UseResource.Checked = false;
                ISR_7_Resource.SelectedIndex = -1;
                    ISR_7_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_7_Resource.Enabled = false;
            }
            else if ((ISR_7_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_7_Resource.SelectedIndex - 1;
                ISR_7_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_7_Resource.SelectedIndex = newIndex;
                    parameters.ISR_7_Resource--;

                }
                else
            {
                ISR_7_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 7)
            {
                if ((ISR_8_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_8_UseResource.Checked = false;
                ISR_8_Resource.SelectedIndex = -1;
                    ISR_8_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_8_Resource.Enabled = false;
            }
            else if ((ISR_8_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_8_Resource.SelectedIndex - 1;
                ISR_8_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_8_Resource.SelectedIndex = newIndex;
                    parameters.ISR_8_Resource--;

                }
                else
            {
                ISR_8_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 8)
            {
                if ((ISR_9_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_9_UseResource.Checked = false;
                ISR_9_Resource.SelectedIndex = -1;
                    ISR_9_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_9_Resource.Enabled = false;
            }
            else if ((ISR_9_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_9_Resource.SelectedIndex - 1;
                ISR_9_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_9_Resource.SelectedIndex = newIndex;
                    parameters.ISR_9_Resource--;

                }
                else
            {
                ISR_9_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 9)
            {
                if ((ISR_10_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_10_UseResource.Checked = false;
                ISR_10_Resource.SelectedIndex = -1;
                    ISR_10_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_10_Resource.Enabled = false;
            }
            else if ((ISR_10_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_10_Resource.SelectedIndex - 1;
                ISR_10_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_10_Resource.SelectedIndex = newIndex;
                    parameters.ISR_10_Resource--;

                }
                else
            {
                ISR_10_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 10)
            {
                if ((ISR_11_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_11_UseResource.Checked = false;
                ISR_11_Resource.SelectedIndex = -1;
                    ISR_11_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_11_Resource.Enabled = false;
            }
            else if ((ISR_11_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_11_Resource.SelectedIndex - 1;
                ISR_11_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_11_Resource.SelectedIndex = newIndex;
                    parameters.ISR_11_Resource--;

                }
                else
            {
                ISR_11_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 11)
            {
                if ((ISR_12_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_12_UseResource.Checked = false;
                ISR_12_Resource.SelectedIndex = -1;
                    ISR_12_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_12_Resource.Enabled = false;
            }
            else if ((ISR_12_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_12_Resource.SelectedIndex - 1;
                ISR_12_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_12_Resource.SelectedIndex = newIndex;
                    parameters.ISR_12_Resource--;

                }
                else
            {
                ISR_12_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 12)
            {
                if ((ISR_13_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_13_UseResource.Checked = false;
                ISR_13_Resource.SelectedIndex = -1;
                    ISR_13_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_13_Resource.Enabled = false;
            }
            else if ((ISR_13_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_13_Resource.SelectedIndex - 1;
                ISR_13_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_13_Resource.SelectedIndex = newIndex;
                    parameters.ISR_13_Resource--;

                }
                else
            {
                ISR_13_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 13)
            {
                if ((ISR_14_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_14_UseResource.Checked = false;
                ISR_14_Resource.SelectedIndex = -1;
                    ISR_14_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_14_Resource.Enabled = false;
            }
            else if ((ISR_14_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_14_Resource.SelectedIndex - 1;
                ISR_14_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_14_Resource.SelectedIndex = newIndex;
                    parameters.ISR_14_Resource--;

                }
                else
            {
                ISR_14_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 14)
            {
                if ((ISR_15_Resource.SelectedIndex + 1) == ResourceNumber)
            {
                ISR_15_UseResource.Checked = false;
                ISR_15_Resource.SelectedIndex = -1;
                    ISR_15_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_15_Resource.Enabled = false;
            }
            else if ((ISR_15_Resource.SelectedIndex + 1) > ResourceNumber)
            {
                Int32 newIndex = ISR_15_Resource.SelectedIndex - 1;
                ISR_15_Resource.Items.RemoveAt(ResourceNumber - 1);
                ISR_15_Resource.SelectedIndex = newIndex;
                    parameters.ISR_15_Resource--;

                }
                else
            {
                ISR_15_Resource.Items.RemoveAt(ResourceNumber - 1);
            }

            }
            if (parameters.Number_of_ISR > 15)
            {
                if ((ISR_16_Resource.SelectedIndex + 1) == ResourceNumber)
                {
                    ISR_16_UseResource.Checked = false;
                    ISR_16_Resource.SelectedIndex = -1;
                    ISR_16_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_16_Resource.Enabled = false;
                }
                else if ((ISR_16_Resource.SelectedIndex + 1) > ResourceNumber)
                {
                    Int32 newIndex = ISR_16_Resource.SelectedIndex - 1;
                    ISR_16_Resource.Items.RemoveAt(ResourceNumber - 1);
                    ISR_16_Resource.SelectedIndex = newIndex;
                    parameters.ISR_16_Resource--;

                }
                else
                {
                    ISR_16_Resource.Items.RemoveAt(ResourceNumber - 1);
                }
            }
        }

        public void AddedResource(string ResourceName)
        {
            if (parameters.Number_of_ISR > 0)
                ISR_1_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 1)
                ISR_2_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 2)
                ISR_3_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 3)
                ISR_4_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 4)
                ISR_5_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 5)
                ISR_6_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 6)
                ISR_7_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 7)
                ISR_8_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 8)
                ISR_9_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 9)
                ISR_10_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 10)
                ISR_11_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 11)
                ISR_12_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 12)
                ISR_13_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 13)
                ISR_14_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 14)
                ISR_15_Resource.Items.Add(ResourceName);
            if (parameters.Number_of_ISR > 15)
                ISR_16_Resource.Items.Add(ResourceName);
        }

        private TabPage GetISRPage(Int32 Page)
        {
            switch (Page)
            {
                case 0:
                    return ISR_1;
                case 1:
                    return ISR_2;
                case 2:
                    return ISR_3;
                case 3:
                    return ISR_4;
                case 4:
                    return ISR_5;
                case 5:
                    return ISR_6;
                case 6:
                    return ISR_7;
                case 7:
                    return ISR_8;
                case 8:
                    return ISR_9;
                case 9:
                    return ISR_10;
                case 10:
                    return ISR_11;
                case 11:
                    return ISR_12;
                case 12:
                    return ISR_13;
                case 13:
                    return ISR_14;
                case 14:
                    return ISR_15;
                case 15:
                    return ISR_16;
                default:
                    return null;
            }
        }

        private void ReadISRValues(Int32 ISRNumber)
        {
            switch(ISRNumber)
            {
                case 0:
                    ISR_1_Name.Text = parameters.ISR_1_Name;
                    ISR_1.Text = parameters.ISR_1_Name;
                    ISR_1_Category.SelectedIndex = parameters.ISR_1_Category;
                    ISR_1_Priority.SelectedIndex = parameters.ISR_1_Priority - 1;
                    if (parameters.ISR_1_Category == 0)
                    {
                        ISR_1_UseResource.Checked = false;
                        ISR_1_Resource.SelectedIndex = -1;
                        parameters.ISR_1_Resource = 0;
                        ISR_1_UseResource.Enabled = false;
                        ISR_1_Resource.Enabled = false;
                    }
                    else if(parameters.ISR_1_Resource == 0)
                    {
                        ISR_1_UseResource.Checked = false;
                        ISR_1_Resource.SelectedIndex = -1;
                        ISR_1_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_1_UseResource.Checked = true;
                        ISR_1_Resource.SelectedIndex = parameters.ISR_1_Resource -1;
                    }
                    break;
                case 1:
                    ISR_2_Name.Text = parameters.ISR_2_Name;
                    ISR_2.Text = parameters.ISR_2_Name;
                    ISR_2_Category.SelectedIndex = parameters.ISR_2_Category;
                    ISR_2_Priority.SelectedIndex = parameters.ISR_2_Priority - 1;
                    if (parameters.ISR_2_Category == 0)
                    {
                        ISR_2_UseResource.Checked = false;
                        ISR_2_Resource.SelectedIndex = -1;
                        parameters.ISR_2_Resource = 0;
                        ISR_2_UseResource.Enabled = false;
                        ISR_2_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_2_Resource == 0)
                    {
                        ISR_2_UseResource.Checked = false;
                        ISR_2_Resource.SelectedIndex = -1;
                        ISR_2_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_2_UseResource.Checked = true;
                        ISR_2_Resource.SelectedIndex = parameters.ISR_2_Resource -1;
                    }
                    break;
                case 2:
                    ISR_3_Name.Text = parameters.ISR_3_Name;
                    ISR_3.Text = parameters.ISR_3_Name;
                    ISR_3_Category.SelectedIndex = parameters.ISR_3_Category;
                    ISR_3_Priority.SelectedIndex = parameters.ISR_3_Priority - 1;
                    if (parameters.ISR_3_Category == 0)
                    {
                        ISR_3_UseResource.Checked = false;
                        ISR_3_Resource.SelectedIndex = -1;
                        parameters.ISR_3_Resource = 0;
                        ISR_3_UseResource.Enabled = false;
                        ISR_3_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_3_Resource == 0)
                    {
                        ISR_3_UseResource.Checked = false;
                        ISR_3_Resource.SelectedIndex = -1;
                        ISR_3_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_3_UseResource.Checked = true;
                        ISR_3_Resource.SelectedIndex = parameters.ISR_3_Resource -1;
                    }
                    break;
                case 3:
                    ISR_4_Name.Text = parameters.ISR_4_Name;
                    ISR_4.Text = parameters.ISR_4_Name;
                    ISR_4_Category.SelectedIndex = parameters.ISR_4_Category;
                    ISR_4_Priority.SelectedIndex = parameters.ISR_4_Priority - 1;
                    if (parameters.ISR_4_Category == 0)
                    {
                        ISR_4_UseResource.Checked = false;
                        ISR_4_Resource.SelectedIndex = -1;
                        parameters.ISR_4_Resource = 0;
                        ISR_4_UseResource.Enabled = false;
                        ISR_4_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_4_Resource == 0)
                    {
                        ISR_4_UseResource.Checked = false;
                        ISR_4_Resource.SelectedIndex = -1;
                        ISR_4_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_4_UseResource.Checked = true;
                        ISR_4_Resource.SelectedIndex = parameters.ISR_4_Resource -1;
                    }
                    break;
                case 4:
                    ISR_5_Name.Text = parameters.ISR_5_Name;
                    ISR_5.Text = parameters.ISR_5_Name;
                    ISR_5_Category.SelectedIndex = parameters.ISR_5_Category;
                    ISR_5_Priority.SelectedIndex = parameters.ISR_5_Priority - 1;
                    if (parameters.ISR_5_Category == 0)
                    {
                        ISR_5_UseResource.Checked = false;
                        ISR_5_Resource.SelectedIndex = -1;
                        parameters.ISR_5_Resource = 0;
                        ISR_5_UseResource.Enabled = false;
                        ISR_5_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_5_Resource == 0)
                    {
                        ISR_5_UseResource.Checked = false;
                        ISR_5_Resource.SelectedIndex = -1;
                        ISR_5_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_5_UseResource.Checked = true;
                        ISR_5_Resource.SelectedIndex = parameters.ISR_5_Resource -1;
                    }
                    break;
                case 5:
                    ISR_6_Name.Text = parameters.ISR_6_Name;
                    ISR_6.Text = parameters.ISR_6_Name;
                    ISR_6_Category.SelectedIndex = parameters.ISR_6_Category;
                    ISR_6_Priority.SelectedIndex = parameters.ISR_6_Priority - 1;
                    if (parameters.ISR_6_Category == 0)
                    {
                        ISR_6_UseResource.Checked = false;
                        ISR_6_Resource.SelectedIndex = -1;
                        parameters.ISR_6_Resource = 0;
                        ISR_6_UseResource.Enabled = false;
                        ISR_6_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_6_Resource == 0)
                    {
                        ISR_6_UseResource.Checked = false;
                        ISR_6_Resource.SelectedIndex = -1;
                        ISR_6_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_6_UseResource.Checked = true;
                        ISR_6_Resource.SelectedIndex = parameters.ISR_6_Resource -1;
                    }
                    break;
                case 6:
                    ISR_7_Name.Text = parameters.ISR_7_Name;
                    ISR_7.Text = parameters.ISR_7_Name;
                    ISR_7_Category.SelectedIndex = parameters.ISR_7_Category;
                    ISR_7_Priority.SelectedIndex = parameters.ISR_7_Priority - 1;
                    if (parameters.ISR_7_Category == 0)
                    {
                        ISR_7_UseResource.Checked = false;
                        ISR_7_Resource.SelectedIndex = -1;
                        parameters.ISR_7_Resource = 0;
                        ISR_7_UseResource.Enabled = false;
                        ISR_7_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_7_Resource == 0)
                    {
                        ISR_7_UseResource.Checked = false;
                        ISR_7_Resource.SelectedIndex = -1;
                        ISR_7_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_7_UseResource.Checked = true;
                        ISR_7_Resource.SelectedIndex = parameters.ISR_7_Resource -1;
                    }
                    break;
                case 7:
                    ISR_8_Name.Text = parameters.ISR_8_Name;
                    ISR_8.Text = parameters.ISR_8_Name;
                    ISR_8_Category.SelectedIndex = parameters.ISR_8_Category;
                    ISR_8_Priority.SelectedIndex = parameters.ISR_8_Priority - 1;
                    if (parameters.ISR_8_Category == 0)
                    {
                        ISR_8_UseResource.Checked = false;
                        ISR_8_Resource.SelectedIndex = -1;
                        parameters.ISR_8_Resource = 0;
                        ISR_8_UseResource.Enabled = false;
                        ISR_8_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_8_Resource == 0)
                    {
                        ISR_8_UseResource.Checked = false;
                        ISR_8_Resource.SelectedIndex = -1;
                        ISR_8_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_8_UseResource.Checked = true;
                        ISR_8_Resource.SelectedIndex = parameters.ISR_8_Resource -1;
                    }
                    break;
                case 8:
                    ISR_9_Name.Text = parameters.ISR_9_Name;
                    ISR_9.Text = parameters.ISR_9_Name;
                    ISR_9_Category.SelectedIndex = parameters.ISR_9_Category;
                    ISR_9_Priority.SelectedIndex = parameters.ISR_9_Priority - 1;
                    if (parameters.ISR_9_Category == 0)
                    {
                        ISR_9_UseResource.Checked = false;
                        ISR_9_Resource.SelectedIndex = -1;
                        parameters.ISR_9_Resource = 0;
                        ISR_9_UseResource.Enabled = false;
                        ISR_9_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_9_Resource == 0)
                    {
                        ISR_9_UseResource.Checked = false;
                        ISR_9_Resource.SelectedIndex = -1;
                        ISR_9_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_9_UseResource.Checked = true;
                        ISR_9_Resource.SelectedIndex = parameters.ISR_9_Resource -1;
                    }
                    break;
                case 9:
                    ISR_10_Name.Text = parameters.ISR_10_Name;
                    ISR_10.Text = parameters.ISR_10_Name;
                    ISR_10_Category.SelectedIndex = parameters.ISR_10_Category;
                    ISR_10_Priority.SelectedIndex = parameters.ISR_10_Priority - 1;
                    if (parameters.ISR_10_Category == 0)
                    {
                        ISR_10_UseResource.Checked = false;
                        ISR_10_Resource.SelectedIndex = -1;
                        parameters.ISR_10_Resource = 0;
                        ISR_10_UseResource.Enabled = false;
                        ISR_10_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_10_Resource == 0)
                    {
                        ISR_10_UseResource.Checked = false;
                        ISR_10_Resource.SelectedIndex = -1;
                        ISR_10_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_10_UseResource.Checked = true;
                        ISR_10_Resource.SelectedIndex = parameters.ISR_10_Resource -1;
                    }
                    break;
                case 10:
                    ISR_11_Name.Text = parameters.ISR_11_Name;
                    ISR_11.Text = parameters.ISR_11_Name;
                    ISR_11_Category.SelectedIndex = parameters.ISR_11_Category;
                    ISR_11_Priority.SelectedIndex = parameters.ISR_11_Priority - 1;
                    if (parameters.ISR_11_Category == 0)
                    {
                        ISR_11_UseResource.Checked = false;
                        ISR_11_Resource.SelectedIndex = -1;
                        parameters.ISR_11_Resource = 0;
                        ISR_11_UseResource.Enabled = false;
                        ISR_11_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_11_Resource == 0)
                    {
                        ISR_11_UseResource.Checked = false;
                        ISR_11_Resource.SelectedIndex = -1;
                        ISR_11_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_11_UseResource.Checked = true;
                        ISR_11_Resource.SelectedIndex = parameters.ISR_11_Resource -1;
                    }
                    break;
                case 11:
                    ISR_12_Name.Text = parameters.ISR_12_Name;
                    ISR_12.Text = parameters.ISR_12_Name;
                    ISR_12_Category.SelectedIndex = parameters.ISR_12_Category;
                    ISR_12_Priority.SelectedIndex = parameters.ISR_12_Priority - 1;
                    if (parameters.ISR_12_Category == 0)
                    {
                        ISR_12_UseResource.Checked = false;
                        ISR_12_Resource.SelectedIndex = -1;
                        parameters.ISR_12_Resource = 0;
                        ISR_12_UseResource.Enabled = false;
                        ISR_12_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_12_Resource == 0)
                    {
                        ISR_12_UseResource.Checked = false;
                        ISR_12_Resource.SelectedIndex = -1;
                        ISR_12_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_12_UseResource.Checked = true;
                        ISR_12_Resource.SelectedIndex = parameters.ISR_12_Resource -1;
                    }
                    break;
                case 12:
                    ISR_13_Name.Text = parameters.ISR_13_Name;
                    ISR_13.Text = parameters.ISR_13_Name;
                    ISR_13_Category.SelectedIndex = parameters.ISR_13_Category;
                    ISR_13_Priority.SelectedIndex = parameters.ISR_13_Priority - 1;
                    if (parameters.ISR_13_Category == 0)
                    {
                        ISR_13_UseResource.Checked = false;
                        ISR_13_Resource.SelectedIndex = -1;
                        parameters.ISR_13_Resource = 0;
                        ISR_13_UseResource.Enabled = false;
                        ISR_13_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_13_Resource == 0)
                    {
                        ISR_13_UseResource.Checked = false;
                        ISR_13_Resource.SelectedIndex = -1;
                        ISR_13_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_13_UseResource.Checked = true;
                        ISR_13_Resource.SelectedIndex = parameters.ISR_13_Resource -1;
                    }
                    break;
                case 13:
                    ISR_14_Name.Text = parameters.ISR_14_Name;
                    ISR_14.Text = parameters.ISR_14_Name;
                    ISR_14_Category.SelectedIndex = parameters.ISR_14_Category;
                    ISR_14_Priority.SelectedIndex = parameters.ISR_14_Priority - 1;
                    if (parameters.ISR_14_Category == 0)
                    {
                        ISR_14_UseResource.Checked = false;
                        ISR_14_Resource.SelectedIndex = -1;
                        parameters.ISR_14_Resource = 0;
                        ISR_14_UseResource.Enabled = false;
                        ISR_14_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_14_Resource == 0)
                    {
                        ISR_14_UseResource.Checked = false;
                        ISR_14_Resource.SelectedIndex = -1;
                        ISR_14_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_14_UseResource.Checked = true;
                        ISR_14_Resource.SelectedIndex = parameters.ISR_14_Resource -1;
                    }
                    break;
                case 14:
                    ISR_15_Name.Text = parameters.ISR_15_Name;
                    ISR_15.Text = parameters.ISR_15_Name;
                    ISR_15_Category.SelectedIndex = parameters.ISR_15_Category;
                    ISR_15_Priority.SelectedIndex = parameters.ISR_15_Priority - 1;
                    if (parameters.ISR_15_Category == 0)
                    {
                        ISR_15_UseResource.Checked = false;
                        ISR_15_Resource.SelectedIndex = -1;
                        parameters.ISR_15_Resource = 0;
                        ISR_15_UseResource.Enabled = false;
                        ISR_15_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_15_Resource == 0)
                    {
                        ISR_15_UseResource.Checked = false;
                        ISR_15_Resource.SelectedIndex = -1;
                        ISR_15_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_15_UseResource.Checked = true;
                        ISR_15_Resource.SelectedIndex = parameters.ISR_15_Resource -1;
                    }
                    break;
                case 15:
                    ISR_16_Name.Text = parameters.ISR_16_Name;
                    ISR_16.Text = parameters.ISR_16_Name;
                    ISR_16_Category.SelectedIndex = parameters.ISR_16_Category;
                    ISR_16_Priority.SelectedIndex = parameters.ISR_16_Priority - 1;
                    if (parameters.ISR_16_Category == 0)
                    {
                        ISR_16_UseResource.Checked = false;
                        ISR_16_Resource.SelectedIndex = -1;
                        parameters.ISR_16_Resource = 0;
                        ISR_16_UseResource.Enabled = false;
                        ISR_16_Resource.Enabled = false;
                    }
                    else if (parameters.ISR_16_Resource == 0)
                    {
                        ISR_16_UseResource.Checked = false;
                        ISR_16_Resource.SelectedIndex = -1;
                        ISR_16_Resource.Enabled = false;
                    }
                    else
                    {
                        ISR_16_UseResource.Checked = true;
                        ISR_16_Resource.SelectedIndex = parameters.ISR_16_Resource -1;
                    }
                    break;
            }
            return;
        }

        private void ISR_1_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_1_Name = ISR_1_Name.Text;
            ISR_1.Text = ISR_1_Name.Text;
        }

        private void ISR_1_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_1_Category = ISR_1_Category.SelectedIndex;
            if(ISR_1_Category.SelectedIndex == 1)
            {
                ISR_1_UseResource.Enabled = true;
                ISR_1_UseResource.Checked = false;
            }
            else
            {
                ISR_1_UseResource.Enabled = false;
                ISR_1_Resource.Enabled = false;
                ISR_1_Resource.SelectedIndex = -1;
                parameters.ISR_1_Resource = 0;
            }
        }

        private void ISR_1_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_1_Priority = ISR_1_Priority.SelectedIndex + 1;
        }

        private void ISR_1_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_1_Resource = ISR_1_Resource.SelectedIndex + 1;
        }

        private void ISR_1_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if(ISR_1_UseResource.Checked)
            {
                ISR_1_Resource.Enabled = true;
            }
            else
            {
                ISR_1_Resource.Enabled = false;
                ISR_1_Resource.SelectedIndex = -1;
                parameters.ISR_1_Resource = 0;
            }
        }

        private void ISR_2_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_2_Name = ISR_2_Name.Text;
            ISR_2.Text = ISR_2_Name.Text;
        }

        private void ISR_2_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_2_Category = ISR_2_Category.SelectedIndex;
            if (ISR_2_Category.SelectedIndex == 1)
            {
                ISR_2_UseResource.Enabled = true;
                ISR_2_UseResource.Checked = false;
            }
            else
            {
                ISR_2_UseResource.Enabled = false;
                ISR_2_Resource.Enabled = false;
                ISR_2_Resource.SelectedIndex = -1;
                parameters.ISR_2_Resource = 0;
            }
        }

        private void ISR_2_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_2_Priority = ISR_2_Priority.SelectedIndex + 1;
        }

        private void ISR_2_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_2_Resource = ISR_2_Resource.SelectedIndex + 1;
        }

        private void ISR_2_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_2_UseResource.Checked)
            {
                ISR_2_Resource.Enabled = true;
            }
            else
            {
                ISR_2_Resource.Enabled = false;
                ISR_2_Resource.SelectedIndex = -1;
                parameters.ISR_2_Resource = 0;
            }
        }

        private void ISR_3_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_3_Name = ISR_3_Name.Text;
            ISR_3.Text = ISR_3_Name.Text;
        }

        private void ISR_3_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_3_Category = ISR_3_Category.SelectedIndex;
            if (ISR_3_Category.SelectedIndex == 1)
            {
                ISR_3_UseResource.Enabled = true;
                ISR_3_UseResource.Checked = false;
            }
            else
            {
                ISR_3_UseResource.Enabled = false;
                ISR_3_Resource.Enabled = false;
                ISR_3_Resource.SelectedIndex = -1;
                parameters.ISR_3_Resource = 0;
            }
        }

        private void ISR_3_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_3_Priority = ISR_3_Priority.SelectedIndex + 1;
        }

        private void ISR_3_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_3_Resource = ISR_3_Resource.SelectedIndex + 1;
        }

        private void ISR_3_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_3_UseResource.Checked)
            {
                ISR_3_Resource.Enabled = true;
            }
            else
            {
                ISR_3_Resource.Enabled = false;
                ISR_3_Resource.SelectedIndex = -1;
                parameters.ISR_3_Resource = 0;
            }
        }

        private void ISR_4_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_4_Name = ISR_4_Name.Text;
            ISR_4.Text = ISR_4_Name.Text;
        }

        private void ISR_4_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_4_Category = ISR_4_Category.SelectedIndex;
            if (ISR_4_Category.SelectedIndex == 1)
            {
                ISR_4_UseResource.Enabled = true;
                ISR_4_UseResource.Checked = false;
            }
            else
            {
                ISR_4_UseResource.Enabled = false;
                ISR_4_Resource.Enabled = false;
                ISR_4_Resource.SelectedIndex = -1;
                parameters.ISR_4_Resource = 0;
            }
        }

        private void ISR_4_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_4_Priority = ISR_4_Priority.SelectedIndex + 1;
        }

        private void ISR_4_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_4_Resource = ISR_4_Resource.SelectedIndex + 1;
        }

        private void ISR_4_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_4_UseResource.Checked)
            {
                ISR_4_Resource.Enabled = true;
            }
            else
            {
                ISR_4_Resource.Enabled = false;
                ISR_4_Resource.SelectedIndex = -1;
                parameters.ISR_4_Resource = 0;
            }
        }

        private void ISR_5_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_5_Name = ISR_5_Name.Text;
            ISR_5.Text = ISR_5_Name.Text;
        }

        private void ISR_5_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_5_Category = ISR_5_Category.SelectedIndex;
            if (ISR_5_Category.SelectedIndex == 1)
            {
                ISR_5_UseResource.Enabled = true;
                ISR_5_UseResource.Checked = false;
            }
            else
            {
                ISR_5_UseResource.Enabled = false;
                ISR_5_Resource.Enabled = false;
                ISR_5_Resource.SelectedIndex = -1;
                parameters.ISR_5_Resource = 0;
            }
        }

        private void ISR_5_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_5_Priority = ISR_5_Priority.SelectedIndex + 1;
        }

        private void ISR_5_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_5_Resource = ISR_5_Resource.SelectedIndex + 1;
        }

        private void ISR_5_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_5_UseResource.Checked)
            {
                ISR_5_Resource.Enabled = true;
            }
            else
            {
                ISR_5_Resource.Enabled = false;
                ISR_5_Resource.SelectedIndex = -1;
                parameters.ISR_5_Resource = 0;
            }
        }

        private void ISR_6_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_6_Name = ISR_6_Name.Text;
            ISR_6.Text = ISR_6_Name.Text;
        }

        private void ISR_6_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_6_Category = ISR_6_Category.SelectedIndex;
            if (ISR_6_Category.SelectedIndex == 1)
            {
                ISR_6_UseResource.Enabled = true;
                ISR_6_UseResource.Checked = false;
            }
            else
            {
                ISR_6_UseResource.Enabled = false;
                ISR_6_Resource.Enabled = false;
                ISR_6_Resource.SelectedIndex = -1;
                parameters.ISR_6_Resource = 0;
            }
        }

        private void ISR_6_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_6_Priority = ISR_6_Priority.SelectedIndex + 1;
        }

        private void ISR_6_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_6_Resource = ISR_6_Resource.SelectedIndex + 1;
        }

        private void ISR_6_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_6_UseResource.Checked)
            {
                ISR_6_Resource.Enabled = true;
            }
            else
            {
                ISR_6_Resource.Enabled = false;
                ISR_6_Resource.SelectedIndex = -1;
                parameters.ISR_6_Resource = 0;
            }
        }
        private void ISR_7_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_7_Name = ISR_7_Name.Text;
            ISR_7.Text = ISR_7_Name.Text;
        }

        private void ISR_7_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_7_Category = ISR_7_Category.SelectedIndex;
            if (ISR_7_Category.SelectedIndex == 1)
            {
                ISR_7_UseResource.Enabled = true;
                ISR_7_UseResource.Checked = false;
            }
            else
            {
                ISR_7_UseResource.Enabled = false;
                ISR_7_Resource.Enabled = false;
                ISR_7_Resource.SelectedIndex = -1;
                parameters.ISR_7_Resource = 0;
            }
        }

        private void ISR_7_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_7_Priority = ISR_7_Priority.SelectedIndex + 1;
        }

        private void ISR_7_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_7_Resource = ISR_7_Resource.SelectedIndex + 1;
        }

        private void ISR_7_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_7_UseResource.Checked)
            {
                ISR_7_Resource.Enabled = true;
            }
            else
            {
                ISR_7_Resource.Enabled = false;
                ISR_7_Resource.SelectedIndex = -1;
                parameters.ISR_7_Resource = 0;
            }
        }

        private void ISR_8_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_8_Name = ISR_8_Name.Text;
            ISR_8.Text = ISR_8_Name.Text;
        }

        private void ISR_8_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_8_Category = ISR_8_Category.SelectedIndex;
            if (ISR_8_Category.SelectedIndex == 1)
            {
                ISR_8_UseResource.Enabled = true;
                ISR_8_UseResource.Checked = false;
            }
            else
            {
                ISR_8_UseResource.Enabled = false;
                ISR_8_Resource.Enabled = false;
                ISR_8_Resource.SelectedIndex = -1;
                parameters.ISR_8_Resource = 0;
            }
        }

        private void ISR_8_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_8_Priority = ISR_8_Priority.SelectedIndex + 1;
        }

        private void ISR_8_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_8_Resource = ISR_8_Resource.SelectedIndex + 1;
        }

        private void ISR_8_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_8_UseResource.Checked)
            {
                ISR_8_Resource.Enabled = true;
            }
            else
            {
                ISR_8_Resource.Enabled = false;
                ISR_8_Resource.SelectedIndex = -1;
                parameters.ISR_8_Resource = 0;
            }
        }

        private void ISR_9_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_9_Name = ISR_9_Name.Text;
            ISR_9.Text = ISR_9_Name.Text;
        }

        private void ISR_9_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_9_Category = ISR_9_Category.SelectedIndex;
            if (ISR_9_Category.SelectedIndex == 1)
            {
                ISR_9_UseResource.Enabled = true;
                ISR_9_UseResource.Checked = false;
            }
            else
            {
                ISR_9_UseResource.Enabled = false;
                ISR_9_Resource.Enabled = false;
                ISR_9_Resource.SelectedIndex = -1;
                parameters.ISR_9_Resource = 0;
            }
        }

        private void ISR_9_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_9_Priority = ISR_9_Priority.SelectedIndex + 1;
        }

        private void ISR_9_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_9_Resource = ISR_9_Resource.SelectedIndex + 1;
        }

        private void ISR_9_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_9_UseResource.Checked)
            {
                ISR_9_Resource.Enabled = true;
            }
            else
            {
                ISR_9_Resource.Enabled = false;
                ISR_9_Resource.SelectedIndex = -1;
                parameters.ISR_9_Resource = 0;
            }
        }

        private void ISR_10_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_10_Name = ISR_10_Name.Text;
            ISR_10.Text = ISR_10_Name.Text;
        }

        private void ISR_10_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_10_Category = ISR_10_Category.SelectedIndex;
            if (ISR_10_Category.SelectedIndex == 1)
            {
                ISR_10_UseResource.Enabled = true;
                ISR_10_UseResource.Checked = false;
            }
            else
            {
                ISR_10_UseResource.Enabled = false;
                ISR_10_Resource.Enabled = false;
                ISR_10_Resource.SelectedIndex = -1;
                parameters.ISR_10_Resource = 0;
            }
        }

        private void ISR_10_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_10_Priority = ISR_10_Priority.SelectedIndex + 1;
        }

        private void ISR_10_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_10_Resource = ISR_10_Resource.SelectedIndex + 1;
        }

        private void ISR_10_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_10_UseResource.Checked)
            {
                ISR_10_Resource.Enabled = true;
            }
            else
            {
                ISR_10_Resource.Enabled = false;
                ISR_10_Resource.SelectedIndex = -1;
                parameters.ISR_10_Resource = 0;
            }
        }

        private void ISR_11_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_11_Name = ISR_11_Name.Text;
            ISR_11.Text = ISR_11_Name.Text;
        }

        private void ISR_11_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_11_Category = ISR_11_Category.SelectedIndex;
            if (ISR_11_Category.SelectedIndex == 1)
            {
                ISR_11_UseResource.Enabled = true;
                ISR_11_UseResource.Checked = false;
            }
            else
            {
                ISR_11_UseResource.Enabled = false;
                ISR_11_Resource.Enabled = false;
                ISR_11_Resource.SelectedIndex = -1;
                parameters.ISR_11_Resource = 0;
            }
        }

        private void ISR_11_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_11_Priority = ISR_11_Priority.SelectedIndex + 1;
        }

        private void ISR_11_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_11_Resource = ISR_11_Resource.SelectedIndex + 1;
        }

        private void ISR_11_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_11_UseResource.Checked)
            {
                ISR_11_Resource.Enabled = true;
            }
            else
            {
                ISR_11_Resource.Enabled = false;
                ISR_11_Resource.SelectedIndex = -1;
                parameters.ISR_11_Resource = 0;
            }
        }

        private void ISR_12_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_12_Name = ISR_12_Name.Text;
            ISR_12.Text = ISR_12_Name.Text;
        }

        private void ISR_12_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_12_Category = ISR_12_Category.SelectedIndex;
            if (ISR_12_Category.SelectedIndex == 1)
            {
                ISR_12_UseResource.Enabled = true;
                ISR_12_UseResource.Checked = false;
            }
            else
            {
                ISR_12_UseResource.Enabled = false;
                ISR_12_Resource.Enabled = false;
                ISR_12_Resource.SelectedIndex = -1;
                parameters.ISR_12_Resource = 0;
            }
        }

        private void ISR_12_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_12_Priority = ISR_12_Priority.SelectedIndex + 1;
        }

        private void ISR_12_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_12_Resource = ISR_12_Resource.SelectedIndex + 1;
        }

        private void ISR_12_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_12_UseResource.Checked)
            {
                ISR_12_Resource.Enabled = true;
            }
            else
            {
                ISR_12_Resource.Enabled = false;
                ISR_12_Resource.SelectedIndex = -1;
                parameters.ISR_12_Resource = 0;
            }
        }

        private void ISR_13_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_13_Name = ISR_13_Name.Text;
            ISR_13.Text = ISR_13_Name.Text;
        }

        private void ISR_13_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_13_Category = ISR_13_Category.SelectedIndex;
            if (ISR_13_Category.SelectedIndex == 1)
            {
                ISR_13_UseResource.Enabled = true;
                ISR_13_UseResource.Checked = false;
            }
            else
            {
                ISR_13_UseResource.Enabled = false;
                ISR_13_Resource.Enabled = false;
                ISR_13_Resource.SelectedIndex = -1;
                parameters.ISR_13_Resource = 0;
            }
        }

        private void ISR_13_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_13_Priority = ISR_13_Priority.SelectedIndex + 1;
        }

        private void ISR_13_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_13_Resource = ISR_13_Resource.SelectedIndex + 1;
        }

        private void ISR_13_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_13_UseResource.Checked)
            {
                ISR_13_Resource.Enabled = true;
            }
            else
            {
                ISR_13_Resource.Enabled = false;
                ISR_13_Resource.SelectedIndex = -1;
                parameters.ISR_13_Resource = 0;
            }
        }

        private void ISR_14_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_14_Name = ISR_14_Name.Text;
            ISR_14.Text = ISR_14_Name.Text;
        }

        private void ISR_14_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_14_Category = ISR_14_Category.SelectedIndex;
            if (ISR_14_Category.SelectedIndex == 1)
            {
                ISR_14_UseResource.Enabled = true;
                ISR_14_UseResource.Checked = false;
            }
            else
            {
                ISR_14_UseResource.Enabled = false;
                ISR_14_Resource.Enabled = false;
                ISR_14_Resource.SelectedIndex = -1;
                parameters.ISR_14_Resource = 0;
            }
        }

        private void ISR_14_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_14_Priority = ISR_14_Priority.SelectedIndex + 1;
        }

        private void ISR_14_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_14_Resource = ISR_14_Resource.SelectedIndex + 1;
        }

        private void ISR_14_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_14_UseResource.Checked)
            {
                ISR_14_Resource.Enabled = true;
            }
            else
            {
                ISR_14_Resource.Enabled = false;
                ISR_14_Resource.SelectedIndex = -1;
                parameters.ISR_14_Resource = 0;
            }
        }

        private void ISR_15_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_15_Name = ISR_15_Name.Text;
            ISR_15.Text = ISR_15_Name.Text;
        }

        private void ISR_15_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_15_Category = ISR_15_Category.SelectedIndex;
            if (ISR_15_Category.SelectedIndex == 1)
            {
                ISR_15_UseResource.Enabled = true;
                ISR_15_UseResource.Checked = false;
            }
            else
            {
                ISR_15_UseResource.Enabled = false;
                ISR_15_Resource.Enabled = false;
                ISR_15_Resource.SelectedIndex = -1;
                parameters.ISR_15_Resource = 0;
            }
        }

        private void ISR_15_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_15_Priority = ISR_15_Priority.SelectedIndex + 1;
        }

        private void ISR_15_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_15_Resource = ISR_15_Resource.SelectedIndex + 1;
        }

        private void ISR_15_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_15_UseResource.Checked)
            {
                ISR_15_Resource.Enabled = true;
            }
            else
            {
                ISR_15_Resource.Enabled = false;
                ISR_15_Resource.SelectedIndex = -1;
                parameters.ISR_15_Resource = 0;
            }
        }
        private void ISR_16_Name_TextChanged(object sender, EventArgs e)
        {
            parameters.ISR_16_Name = ISR_16_Name.Text;
            ISR_16.Text = ISR_16_Name.Text;
        }

        private void ISR_16_Category_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_16_Category = ISR_16_Category.SelectedIndex;
            if (ISR_16_Category.SelectedIndex == 1)
            {
                ISR_16_UseResource.Enabled = true;
                ISR_16_UseResource.Checked = false;
            }
            else
            {
                ISR_16_UseResource.Enabled = false;
                ISR_16_Resource.Enabled = false;
                ISR_16_Resource.SelectedIndex = -1;
                parameters.ISR_16_Resource = 0;
            }
        }

        private void ISR_16_Priority_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_16_Priority = ISR_16_Priority.SelectedIndex + 1;
        }

        private void ISR_16_Resource_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.ISR_16_Resource = ISR_16_Resource.SelectedIndex + 1;
        }

        private void ISR_16_UseResource_CheckedChanged(object sender, EventArgs e)
        {
            if (ISR_16_UseResource.Checked)
            {
                ISR_16_Resource.Enabled = true;
            }
            else
            {
                ISR_16_Resource.Enabled = false;
                ISR_16_Resource.SelectedIndex = -1;
                parameters.ISR_16_Resource = 0;
            }
        }

        private void button_AddISR_Click(object sender, EventArgs e)
        {
            if(parameters.Number_of_ISR < 16)
            {
                tabControl_ISR.TabPages.Add(GetISRPage(parameters.Number_of_ISR));
                UpdateResourceList(parameters.Number_of_ISR);
                ReadISRValues(parameters.Number_of_ISR);
                parameters.Number_of_ISR++;
                button_RemoveISR.Enabled = true;
            }
            if(parameters.Number_of_ISR == 16)
            {
                button_AddISR.Enabled = false;
            }
        }

        private void button_RemoveISR_Click(object sender, EventArgs e)
        {
            if(parameters.Number_of_ISR > 0)
            {
                Int32 Index = tabControl_ISR.SelectedIndex;
                for(Int32 i = Index; Index < parameters.Number_of_ISR; Index++, i++)
                {
                    if ((i + 1) == parameters.Number_of_ISR) break;
                    switch (i)
                    {
                        case 0:
                            parameters.ISR_1_Name = parameters.ISR_2_Name;
                            parameters.ISR_1_Category = parameters.ISR_2_Category;
                            parameters.ISR_1_Priority = parameters.ISR_2_Priority;
                            parameters.ISR_1_Resource = parameters.ISR_2_Resource;
                            break;
                        case 1:
                            parameters.ISR_2_Name = parameters.ISR_3_Name;
                            parameters.ISR_2_Category = parameters.ISR_3_Category;
                            parameters.ISR_2_Priority = parameters.ISR_3_Priority;
                            parameters.ISR_2_Resource = parameters.ISR_3_Resource;
                            break;
                        case 2:
                            parameters.ISR_3_Name = parameters.ISR_4_Name;
                            parameters.ISR_3_Category = parameters.ISR_4_Category;
                            parameters.ISR_3_Priority = parameters.ISR_4_Priority;
                            parameters.ISR_3_Resource = parameters.ISR_4_Resource;
                            break;
                        case 3:
                            parameters.ISR_4_Name = parameters.ISR_5_Name;
                            parameters.ISR_4_Category = parameters.ISR_5_Category;
                            parameters.ISR_4_Priority = parameters.ISR_5_Priority;
                            parameters.ISR_4_Resource = parameters.ISR_5_Resource;
                            break;
                        case 4:
                            parameters.ISR_5_Name = parameters.ISR_6_Name;
                            parameters.ISR_5_Category = parameters.ISR_6_Category;
                            parameters.ISR_5_Priority = parameters.ISR_6_Priority;
                            parameters.ISR_5_Resource = parameters.ISR_6_Resource;
                            break;
                        case 5:
                            parameters.ISR_6_Name = parameters.ISR_7_Name;
                            parameters.ISR_6_Category = parameters.ISR_7_Category;
                            parameters.ISR_6_Priority = parameters.ISR_7_Priority;
                            parameters.ISR_6_Resource = parameters.ISR_7_Resource;
                            break;
                        case 6:
                            parameters.ISR_7_Name = parameters.ISR_8_Name;
                            parameters.ISR_7_Category = parameters.ISR_8_Category;
                            parameters.ISR_7_Priority = parameters.ISR_8_Priority;
                            parameters.ISR_7_Resource = parameters.ISR_8_Resource;
                            break;
                        case 7:
                            parameters.ISR_8_Name = parameters.ISR_9_Name;
                            parameters.ISR_8_Category = parameters.ISR_9_Category;
                            parameters.ISR_8_Priority = parameters.ISR_9_Priority;
                            parameters.ISR_8_Resource = parameters.ISR_9_Resource;
                            break;
                        case 8:
                            parameters.ISR_9_Name = parameters.ISR_10_Name;
                            parameters.ISR_9_Category = parameters.ISR_10_Category;
                            parameters.ISR_9_Priority = parameters.ISR_10_Priority;
                            parameters.ISR_9_Resource = parameters.ISR_10_Resource;
                            break;
                        case 9:
                            parameters.ISR_10_Name = parameters.ISR_11_Name;
                            parameters.ISR_10_Category = parameters.ISR_11_Category;
                            parameters.ISR_10_Priority = parameters.ISR_11_Priority;
                            parameters.ISR_10_Resource = parameters.ISR_11_Resource;
                            break;
                        case 10:
                            parameters.ISR_11_Name = parameters.ISR_12_Name;
                            parameters.ISR_11_Category = parameters.ISR_12_Category;
                            parameters.ISR_11_Priority = parameters.ISR_12_Priority;
                            parameters.ISR_11_Resource = parameters.ISR_12_Resource;
                            break;
                        case 11:
                            parameters.ISR_12_Name = parameters.ISR_13_Name;
                            parameters.ISR_12_Category = parameters.ISR_13_Category;
                            parameters.ISR_12_Priority = parameters.ISR_13_Priority;
                            parameters.ISR_12_Resource = parameters.ISR_13_Resource;
                            break;
                        case 12:
                            parameters.ISR_13_Name = parameters.ISR_14_Name;
                            parameters.ISR_13_Category = parameters.ISR_14_Category;
                            parameters.ISR_13_Priority = parameters.ISR_14_Priority;
                            parameters.ISR_13_Resource = parameters.ISR_14_Resource;
                            break;
                        case 13:
                            parameters.ISR_14_Name = parameters.ISR_15_Name;
                            parameters.ISR_14_Category = parameters.ISR_15_Category;
                            parameters.ISR_14_Priority = parameters.ISR_15_Priority;
                            parameters.ISR_14_Resource = parameters.ISR_15_Resource;
                            break;
                        case 14:
                            parameters.ISR_15_Name = parameters.ISR_16_Name;
                            parameters.ISR_15_Category = parameters.ISR_16_Category;
                            parameters.ISR_15_Priority = parameters.ISR_16_Priority;
                            parameters.ISR_15_Resource = parameters.ISR_16_Resource;
                            break;
                        default:
                            break;
                    }
                    ReadISRValues(i);
                }
                tabControl_ISR.TabPages.RemoveAt(Index);
                parameters.Number_of_ISR--;
                button_AddISR.Enabled = true;
            }
            if (parameters.Number_of_ISR == 0)
            {
                button_RemoveISR.Enabled = false;
            }
        }
    }
}
