using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;

namespace ErikaOS_v2_5_3
{
    public partial class ErikaOSControl : UserControl
    {
        private ErikaOSParameters parameters;

        public ErikaOSControl(ErikaOSParameters parameters)
        {
            InitializeComponent();
            this.parameters = parameters;
            UpdateForm();
        }

        //Update Form Function
        // Updates form with saved parameters when the GUI is opened.
        public void UpdateForm()
        {
            /* Update values */
            checkBox_Systick.Checked = parameters.USE_SYSTICK;
            checkBox_Tracer.Checked = parameters.USE_TRACER;
            
            checkBox_HookStartup.Checked = parameters.USE_STARTUP_HOOK;

            checkBox_HookShutdown.Checked = parameters.USE_SHUTDOWN_HOOK;

            checkBox_HookPreTask.Checked = parameters.USE_PRETASK_HOOK;

            checkBox_HookPosttask.Checked = parameters.USE_POSTTASK_HOOK;

            checkBox_HookError.Checked = parameters.USE_ERROR_HOOK;

            checkBox_ParamAccess.Checked = parameters.USE_PARAMETER_ACCESS;

            checkBox_ResScheduler.Checked = parameters.USE_RES_SCHEDULER;
            
            checkBox_Trace1.Checked = parameters.USE_TRACE1;

            textBox_SystickHandler.Text = parameters.Systick_Handler_Name;

            checkBox_MultiStack.Checked = parameters.MULTI_STACK;

            checkBox_MultiStackIRQ.Checked = parameters.MULTI_STACK_IRQ;

            numericUpDown_IRQStackSize.Value = parameters.MULTI_STACK_IRQ_SIZE;

            comboBox_KernelType.SelectedIndex = parameters.KERNEL_TYPE - 1;

            comboBox_CpuType.SelectedIndex = parameters.CPU_TYPE - 1;

            comboBox_OSStatus.SelectedIndex = parameters.STATUS - 1;

            /* Enable/Disable windows forms depending on values */

            if (checkBox_Systick.Checked) textBox_SystickHandler.Enabled = true;
            else textBox_SystickHandler.Enabled = false;

            if (checkBox_MultiStack.Checked)
            {
                checkBox_MultiStackIRQ.Enabled = true;
                if (checkBox_MultiStackIRQ.Checked) numericUpDown_IRQStackSize.Enabled = true;
                else numericUpDown_IRQStackSize.Enabled = false;
            }
            else
            {
                checkBox_MultiStackIRQ.Enabled = false;
                numericUpDown_IRQStackSize.Enabled = false;
            }

            //m_comboStartDay.SelectedItem = parameters.StartDayOfWeek;

            //m_checkDstEnable.Checked = parameters.DstEnable;

            //m_Resistance.SelectedItem = parameters.ReferenceResistor;
        }

        private void checkBox_Systick_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_SYSTICK = checkBox_Systick.Checked;
            if (checkBox_Systick.Checked) textBox_SystickHandler.Enabled = true;
            else textBox_SystickHandler.Enabled = false;
        }
        private void checkBox_Tracer_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_TRACER = checkBox_Tracer.Checked;
            //if (checkBox_Systick.Checked) textBox_SystickHandler.Enabled = true;
            //else textBox_SystickHandler.Enabled = false;
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_STARTUP_HOOK = checkBox_HookStartup.Checked;
        }

        private void checkBox_HookShutdown_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_SHUTDOWN_HOOK = checkBox_HookShutdown.Checked;
        }

        private void checkBox6_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_ERROR_HOOK = checkBox_HookError.Checked;
        }

        private void checkBox_HookPreTask_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_PRETASK_HOOK = checkBox_HookPreTask.Checked;
        }

        private void checkBox_HookPosttask_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_POSTTASK_HOOK = checkBox_HookPosttask.Checked;
        }

        private void checkBox_ParamAccess_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_PARAMETER_ACCESS = checkBox_ParamAccess.Checked;
        }

        private void checkBox_ResScheduler_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_RES_SCHEDULER = checkBox_ResScheduler.Checked;
        }
        
        private void checkBox_Trace1_CheckedChanged(object sender, EventArgs e)
        {
            parameters.USE_TRACE1 = checkBox_Trace1.Checked;
        }

        private void textBox_SystickHandler_TextChanged(object sender, EventArgs e)
        {
            textBox_SystickHandler.Text = textBox_SystickHandler.Text.Replace(' ', '_');
            parameters.Systick_Handler_Name = textBox_SystickHandler.Text;
            textBox_SystickHandler.Select(textBox_SystickHandler.Text.Length, 0);
        }

        private void checkBox_MultiStack_CheckedChanged(object sender, EventArgs e)
        {
            parameters.MULTI_STACK = checkBox_MultiStack.Checked;
            if(checkBox_MultiStack.Checked)
            {
                checkBox_MultiStackIRQ.Enabled = true;
                if (checkBox_MultiStackIRQ.Checked) numericUpDown_IRQStackSize.Enabled = true;
                else numericUpDown_IRQStackSize.Enabled = false;
            }
            else
            {
                checkBox_MultiStackIRQ.Enabled = false;
                numericUpDown_IRQStackSize.Enabled = false;
            }
        }

        private void checkBox_MultiStackIRQ_CheckedChanged(object sender, EventArgs e)
        {
            parameters.MULTI_STACK_IRQ = checkBox_MultiStackIRQ.Checked;
            if (checkBox_MultiStackIRQ.Checked) numericUpDown_IRQStackSize.Enabled = true;
            else numericUpDown_IRQStackSize.Enabled = false;
        }

        private void numericUpDown_IRQStackSize_ValueChanged(object sender, EventArgs e)
        {
            parameters.MULTI_STACK_IRQ_SIZE = (UInt16)numericUpDown_IRQStackSize.Value;
        }

        private void comboBox_OSStatus_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.STATUS = comboBox_OSStatus.SelectedIndex + 1;
        }

        private void comboBox_KernelType_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.KERNEL_TYPE = comboBox_KernelType.SelectedIndex + 1;
        }

        private void comboBox_CpuType_SelectedIndexChanged(object sender, EventArgs e)
        {
            parameters.CPU_TYPE = comboBox_CpuType.SelectedIndex + 1;
        }

        private void comboBox_KernelType_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_KernelType, "BCC1: Basic Tasks (No events), one Activation per task, one Priority per task.\n" +
                "BCC2: Basic Tasks (No events), multiple Activations per task, tasks may have same priority.\n" +
                "ECC1: Same as BCC1 but with Extended Tasks (Events).\n" +
                "ECC2: Same as BCC2 but with Extended Tasks (Events).");
        }

        private void comboBox_OSStatus_MouseHover(object sender, EventArgs e)
        {
            System.Windows.Forms.ToolTip ToolTip1 = new System.Windows.Forms.ToolTip();
            ToolTip1.SetToolTip(comboBox_OSStatus, "Extended Status provides additional return values of errors within the OS.");
        }
    }
}
