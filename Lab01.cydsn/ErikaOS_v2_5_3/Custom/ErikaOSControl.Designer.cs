namespace ErikaOS_v2_5_3
{
    partial class ErikaOSControl
    {
        /// <summary> 
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.GroupBox groupBox_Hooks;
            this.checkBox_HookStartup = new System.Windows.Forms.CheckBox();
            this.checkBox_HookShutdown = new System.Windows.Forms.CheckBox();
            this.checkBox_HookPreTask = new System.Windows.Forms.CheckBox();
            this.checkBox_HookError = new System.Windows.Forms.CheckBox();
            this.checkBox_HookPosttask = new System.Windows.Forms.CheckBox();
            this.checkBox_Systick = new System.Windows.Forms.CheckBox();
            this.checkBox_Tracer = new System.Windows.Forms.CheckBox();
            this.checkBox_ResScheduler = new System.Windows.Forms.CheckBox();
            this.checkBox_Trace1 = new System.Windows.Forms.CheckBox();
            this.checkBox_ParamAccess = new System.Windows.Forms.CheckBox();
            this.textBox_SystickHandler = new System.Windows.Forms.TextBox();
            this.checkBox_MultiStack = new System.Windows.Forms.CheckBox();
            this.checkBox_MultiStackIRQ = new System.Windows.Forms.CheckBox();
            this.numericUpDown_IRQStackSize = new System.Windows.Forms.NumericUpDown();
            this.comboBox_OSStatus = new System.Windows.Forms.ComboBox();
            this.comboBox_KernelType = new System.Windows.Forms.ComboBox();
            this.comboBox_CpuType = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.groupBox_Systick = new System.Windows.Forms.GroupBox();
            //this.groupBox_Tracer = new System.Windows.Forms.GroupBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.groupBox_MultiStack = new System.Windows.Forms.GroupBox();
            groupBox_Hooks = new System.Windows.Forms.GroupBox();
            groupBox_Hooks.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown_IRQStackSize)).BeginInit();
            this.groupBox_Systick.SuspendLayout();
            //this.groupBox_Tracer.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox_MultiStack.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox_Hooks
            // 
            groupBox_Hooks.Controls.Add(this.checkBox_HookStartup);
            groupBox_Hooks.Controls.Add(this.checkBox_HookShutdown);
            groupBox_Hooks.Controls.Add(this.checkBox_HookPreTask);
            groupBox_Hooks.Controls.Add(this.checkBox_HookError);
            groupBox_Hooks.Controls.Add(this.checkBox_HookPosttask);
            groupBox_Hooks.Location = new System.Drawing.Point(283, 5);
            groupBox_Hooks.Name = "groupBox_Hooks";
            groupBox_Hooks.Size = new System.Drawing.Size(117, 135);
            groupBox_Hooks.TabIndex = 11;
            groupBox_Hooks.TabStop = false;
            groupBox_Hooks.Text = "Hooks";
            // 
            // checkBox_HookStartup
            // 
            this.checkBox_HookStartup.AutoSize = true;
            this.checkBox_HookStartup.Location = new System.Drawing.Point(6, 19);
            this.checkBox_HookStartup.Name = "checkBox_HookStartup";
            this.checkBox_HookStartup.Size = new System.Drawing.Size(89, 17);
            this.checkBox_HookStartup.TabIndex = 2;
            this.checkBox_HookStartup.Text = "Startup Hook";
            this.checkBox_HookStartup.UseVisualStyleBackColor = true;
            this.checkBox_HookStartup.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
            // 
            // checkBox_HookShutdown
            // 
            this.checkBox_HookShutdown.AutoSize = true;
            this.checkBox_HookShutdown.Location = new System.Drawing.Point(6, 42);
            this.checkBox_HookShutdown.Name = "checkBox_HookShutdown";
            this.checkBox_HookShutdown.Size = new System.Drawing.Size(103, 17);
            this.checkBox_HookShutdown.TabIndex = 3;
            this.checkBox_HookShutdown.Text = "Shutdown Hook";
            this.checkBox_HookShutdown.UseVisualStyleBackColor = true;
            this.checkBox_HookShutdown.CheckedChanged += new System.EventHandler(this.checkBox_HookShutdown_CheckedChanged);
            // 
            // checkBox_HookPreTask
            // 
            this.checkBox_HookPreTask.AutoSize = true;
            this.checkBox_HookPreTask.CausesValidation = false;
            this.checkBox_HookPreTask.Location = new System.Drawing.Point(6, 65);
            this.checkBox_HookPreTask.Name = "checkBox_HookPreTask";
            this.checkBox_HookPreTask.Size = new System.Drawing.Size(95, 17);
            this.checkBox_HookPreTask.TabIndex = 5;
            this.checkBox_HookPreTask.Text = "PreTask Hook";
            this.checkBox_HookPreTask.UseVisualStyleBackColor = true;
            this.checkBox_HookPreTask.CheckedChanged += new System.EventHandler(this.checkBox_HookPreTask_CheckedChanged);
            // 
            // checkBox_HookError
            // 
            this.checkBox_HookError.AutoSize = true;
            this.checkBox_HookError.Location = new System.Drawing.Point(6, 111);
            this.checkBox_HookError.Name = "checkBox_HookError";
            this.checkBox_HookError.Size = new System.Drawing.Size(77, 17);
            this.checkBox_HookError.TabIndex = 7;
            this.checkBox_HookError.Text = "Error Hook";
            this.checkBox_HookError.UseVisualStyleBackColor = true;
            this.checkBox_HookError.CheckedChanged += new System.EventHandler(this.checkBox6_CheckedChanged);
            // 
            // checkBox_HookPosttask
            // 
            this.checkBox_HookPosttask.AutoSize = true;
            this.checkBox_HookPosttask.Location = new System.Drawing.Point(6, 88);
            this.checkBox_HookPosttask.Name = "checkBox_HookPosttask";
            this.checkBox_HookPosttask.Size = new System.Drawing.Size(100, 17);
            this.checkBox_HookPosttask.TabIndex = 4;
            this.checkBox_HookPosttask.Text = "PostTask Hook";
            this.checkBox_HookPosttask.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.checkBox_HookPosttask.UseVisualStyleBackColor = true;
            this.checkBox_HookPosttask.CheckedChanged += new System.EventHandler(this.checkBox_HookPosttask_CheckedChanged);
            // 
            // checkBox_Systick
            // 
            this.checkBox_Systick.AutoSize = true;
            this.checkBox_Systick.Location = new System.Drawing.Point(6, 19);
            this.checkBox_Systick.Name = "checkBox_Systick";
            this.checkBox_Systick.Size = new System.Drawing.Size(60, 17);
            this.checkBox_Systick.TabIndex = 1;
            this.checkBox_Systick.Text = "Systick";
            this.checkBox_Systick.UseVisualStyleBackColor = true;
            this.checkBox_Systick.CheckedChanged += new System.EventHandler(this.checkBox_Systick_CheckedChanged);
            
            // checkBox_Tracer
            // 
            this.checkBox_Tracer.AutoSize = true;
            this.checkBox_Tracer.Location = new System.Drawing.Point(6, 109);
            this.checkBox_Tracer.Name = "checkBox_Tracer";
            this.checkBox_Tracer.Size = new System.Drawing.Size(60, 17);
            this.checkBox_Tracer.TabIndex = 1;
            this.checkBox_Tracer.Text = "Tracer";
            this.checkBox_Tracer.UseVisualStyleBackColor = true;
            this.checkBox_Tracer.CheckedChanged += new System.EventHandler(this.checkBox_Tracer_CheckedChanged);
            // 
            // 
            // checkBox_ResScheduler
            // 
            this.checkBox_ResScheduler.AutoSize = true;
            this.checkBox_ResScheduler.Location = new System.Drawing.Point(6, 166);
            this.checkBox_ResScheduler.Name = "checkBox_ResScheduler";
            this.checkBox_ResScheduler.Size = new System.Drawing.Size(96, 17);
            this.checkBox_ResScheduler.TabIndex = 6;
            this.checkBox_ResScheduler.Text = "Res Scheduler";
            this.checkBox_ResScheduler.UseVisualStyleBackColor = true;
            this.checkBox_ResScheduler.CheckedChanged += new System.EventHandler(this.checkBox_ResScheduler_CheckedChanged);

            // checkBox_Trace1
            // 
            this.checkBox_Trace1.AutoSize = true;
            this.checkBox_Trace1.Location = new System.Drawing.Point(6, 186);
            this.checkBox_Trace1.Name = "checkBox_Trace1";
            this.checkBox_Trace1.Size = new System.Drawing.Size(96, 17);
            this.checkBox_Trace1.TabIndex = 6;
            this.checkBox_Trace1.Text = "EnableTracing";
            this.checkBox_Trace1.UseVisualStyleBackColor = true;
            this.checkBox_Trace1.CheckedChanged += new System.EventHandler(this.checkBox_Trace1_CheckedChanged);
            
            // 
            // checkBox_ParamAccess
            // 
            this.checkBox_ParamAccess.AutoSize = true;
            this.checkBox_ParamAccess.Location = new System.Drawing.Point(6, 143);
            this.checkBox_ParamAccess.Name = "checkBox_ParamAccess";
            this.checkBox_ParamAccess.Size = new System.Drawing.Size(112, 17);
            this.checkBox_ParamAccess.TabIndex = 8;
            this.checkBox_ParamAccess.Text = "Parameter Access";
            this.checkBox_ParamAccess.UseVisualStyleBackColor = true;
            this.checkBox_ParamAccess.CheckedChanged += new System.EventHandler(this.checkBox_ParamAccess_CheckedChanged);
            // 
            // textBox_SystickHandler
            // 
            this.textBox_SystickHandler.Location = new System.Drawing.Point(6, 55);
            this.textBox_SystickHandler.MaxLength = 20;
            this.textBox_SystickHandler.Name = "textBox_SystickHandler";
            this.textBox_SystickHandler.Size = new System.Drawing.Size(120, 20);
            this.textBox_SystickHandler.TabIndex = 12;
            this.textBox_SystickHandler.TextChanged += new System.EventHandler(this.textBox_SystickHandler_TextChanged);
            // 
            // checkBox_MultiStack
            // 
            this.checkBox_MultiStack.AutoSize = true;
            this.checkBox_MultiStack.Location = new System.Drawing.Point(6, 19);
            this.checkBox_MultiStack.Name = "checkBox_MultiStack";
            this.checkBox_MultiStack.Size = new System.Drawing.Size(79, 17);
            this.checkBox_MultiStack.TabIndex = 13;
            this.checkBox_MultiStack.Text = "Multi Stack";
            this.checkBox_MultiStack.UseVisualStyleBackColor = true;
            this.checkBox_MultiStack.CheckedChanged += new System.EventHandler(this.checkBox_MultiStack_CheckedChanged);
            // 
            // checkBox_MultiStackIRQ
            // 
            this.checkBox_MultiStackIRQ.AutoSize = true;
            this.checkBox_MultiStackIRQ.Location = new System.Drawing.Point(6, 42);
            this.checkBox_MultiStackIRQ.Name = "checkBox_MultiStackIRQ";
            this.checkBox_MultiStackIRQ.Size = new System.Drawing.Size(101, 17);
            this.checkBox_MultiStackIRQ.TabIndex = 14;
            this.checkBox_MultiStackIRQ.Text = "Multi Stack IRQ";
            this.checkBox_MultiStackIRQ.UseVisualStyleBackColor = true;
            this.checkBox_MultiStackIRQ.CheckedChanged += new System.EventHandler(this.checkBox_MultiStackIRQ_CheckedChanged);
            // 
            // numericUpDown_IRQStackSize
            // 
            this.numericUpDown_IRQStackSize.Location = new System.Drawing.Point(6, 78);
            this.numericUpDown_IRQStackSize.Maximum = new decimal(new int[] {
            4096,
            0,
            0,
            0});
            this.numericUpDown_IRQStackSize.Minimum = new decimal(new int[] {
            128,
            0,
            0,
            0});
            this.numericUpDown_IRQStackSize.Name = "numericUpDown_IRQStackSize";
            this.numericUpDown_IRQStackSize.Size = new System.Drawing.Size(101, 20);
            this.numericUpDown_IRQStackSize.TabIndex = 15;
            this.numericUpDown_IRQStackSize.Value = new decimal(new int[] {
            128,
            0,
            0,
            0});
            this.numericUpDown_IRQStackSize.ValueChanged += new System.EventHandler(this.numericUpDown_IRQStackSize_ValueChanged);
            // 
            // comboBox_OSStatus
            // 
            this.comboBox_OSStatus.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox_OSStatus.FormattingEnabled = true;
            this.comboBox_OSStatus.Items.AddRange(new object[] {
            "Standard",
            "Extended"});
            this.comboBox_OSStatus.Location = new System.Drawing.Point(6, 114);
            this.comboBox_OSStatus.MaxDropDownItems = 2;
            this.comboBox_OSStatus.Name = "comboBox_OSStatus";
            this.comboBox_OSStatus.Size = new System.Drawing.Size(120, 21);
            this.comboBox_OSStatus.TabIndex = 16;
            this.comboBox_OSStatus.SelectedIndexChanged += new System.EventHandler(this.comboBox_OSStatus_SelectedIndexChanged);
            this.comboBox_OSStatus.MouseHover += new System.EventHandler(this.comboBox_OSStatus_MouseHover);
            // 
            // comboBox_KernelType
            // 
            this.comboBox_KernelType.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox_KernelType.FormattingEnabled = true;
            this.comboBox_KernelType.Items.AddRange(new object[] {
            "BCC1",
            "BCC2",
            "ECC1",
            "ECC2"});
            this.comboBox_KernelType.Location = new System.Drawing.Point(6, 74);
            this.comboBox_KernelType.MaxDropDownItems = 4;
            this.comboBox_KernelType.Name = "comboBox_KernelType";
            this.comboBox_KernelType.Size = new System.Drawing.Size(120, 21);
            this.comboBox_KernelType.TabIndex = 17;
            this.comboBox_KernelType.SelectedIndexChanged += new System.EventHandler(this.comboBox_KernelType_SelectedIndexChanged);
            this.comboBox_KernelType.MouseHover += new System.EventHandler(this.comboBox_KernelType_MouseHover);
            // 
            // comboBox_CpuType
            // 
            this.comboBox_CpuType.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox_CpuType.FormattingEnabled = true;
            this.comboBox_CpuType.Items.AddRange(new object[] {
            "Cortex M4",
            "Cortex M0"});
            this.comboBox_CpuType.Location = new System.Drawing.Point(6, 32);
            this.comboBox_CpuType.MaxDropDownItems = 2;
            this.comboBox_CpuType.Name = "comboBox_CpuType";
            this.comboBox_CpuType.Size = new System.Drawing.Size(120, 21);
            this.comboBox_CpuType.TabIndex = 18;
            this.comboBox_CpuType.SelectedIndexChanged += new System.EventHandler(this.comboBox_CpuType_SelectedIndexChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.SystemColors.Control;
            this.label1.Location = new System.Drawing.Point(6, 62);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(80, 13);
            this.label1.TabIndex = 19;
            this.label1.Text = "IRQ Stack Size";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 16);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(56, 13);
            this.label2.TabIndex = 20;
            this.label2.Text = "CPU Type";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(6, 98);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(55, 13);
            this.label3.TabIndex = 21;
            this.label3.Text = "OS Status";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(6, 58);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(64, 13);
            this.label4.TabIndex = 22;
            this.label4.Text = "Kernel Type";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(3, 39);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(112, 13);
            this.label5.TabIndex = 23;
            this.label5.Text = "Systick Handler Name";
            // 
            // groupBox_Systick
            // 
            this.groupBox_Systick.Controls.Add(this.label5);
            this.groupBox_Systick.Controls.Add(this.textBox_SystickHandler);
            this.groupBox_Systick.Controls.Add(this.checkBox_Systick);
            this.groupBox_Systick.Location = new System.Drawing.Point(144, 121);
            this.groupBox_Systick.Name = "groupBox_Systick";
            this.groupBox_Systick.Size = new System.Drawing.Size(133, 83);
            this.groupBox_Systick.TabIndex = 24;
            this.groupBox_Systick.TabStop = false;
            this.groupBox_Systick.Text = "Systick";
            
            // groupBox_Tracer
            // 
            //this.groupBox_Tracer.Controls.Add(this.label5);
            //this.groupBox_Tracer.Controls.Add(this.textBox_SystickHandler);
            //this.groupBox_Tracer.Controls.Add(this.checkBox_Tracer);
            //this.groupBox_Tracer.Location = new System.Drawing.Point(144, 121);
            //this.groupBox_Tracer.Name = "groupBox_Tracer";
            //this.groupBox_Tracer.Size = new System.Drawing.Size(133, 83);
            //this.groupBox_Tracer.TabIndex = 24;
            //this.groupBox_Tracer.TabStop = false;
            //this.groupBox_Tracer.Text = "Tracer";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.comboBox_CpuType);
            this.groupBox1.Controls.Add(this.comboBox_KernelType);
            this.groupBox1.Controls.Add(this.comboBox_OSStatus);
            this.groupBox1.Controls.Add(this.checkBox_ParamAccess);
            this.groupBox1.Controls.Add(this.checkBox_ResScheduler);
            this.groupBox1.Controls.Add(this.checkBox_Trace1);
            this.groupBox1.Location = new System.Drawing.Point(5, 5);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(133, 208);
            this.groupBox1.TabIndex = 25;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Basic OS Config";
            // 
            // groupBox_MultiStack
            // 
            this.groupBox_MultiStack.Controls.Add(this.label1);
            this.groupBox_MultiStack.Controls.Add(this.numericUpDown_IRQStackSize);
            this.groupBox_MultiStack.Controls.Add(this.checkBox_MultiStackIRQ);
            this.groupBox_MultiStack.Controls.Add(this.checkBox_MultiStack);
            this.groupBox_MultiStack.Location = new System.Drawing.Point(144, 5);
            this.groupBox_MultiStack.Name = "groupBox_MultiStack";
            this.groupBox_MultiStack.Size = new System.Drawing.Size(133, 110);
            this.groupBox_MultiStack.TabIndex = 26;
            this.groupBox_MultiStack.TabStop = false;
            this.groupBox_MultiStack.Text = "Multi Stack";
            // 
            // ErikaOSControl
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoScroll = true;
            this.Controls.Add(this.groupBox_MultiStack);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.groupBox_Systick);
            //this.Controls.Add(this.groupBox_Tracer);
            this.Controls.Add(groupBox_Hooks);
            this.Name = "ErikaOSControl";
            this.Size = new System.Drawing.Size(462, 254);
            groupBox_Hooks.ResumeLayout(false);
            groupBox_Hooks.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown_IRQStackSize)).EndInit();
            this.groupBox_Systick.ResumeLayout(false);
            //this.groupBox_Tracer.ResumeLayout(false);
            this.groupBox_Systick.PerformLayout();
            //this.groupBox_Tracer.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox_MultiStack.ResumeLayout(false);
            this.groupBox_MultiStack.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.CheckBox checkBox_Systick;
        private System.Windows.Forms.CheckBox checkBox_Tracer;
        private System.Windows.Forms.CheckBox checkBox_HookStartup;
        private System.Windows.Forms.CheckBox checkBox_HookShutdown;
        private System.Windows.Forms.CheckBox checkBox_HookPosttask;
        private System.Windows.Forms.CheckBox checkBox_HookPreTask;
        private System.Windows.Forms.CheckBox checkBox_ResScheduler;
        private System.Windows.Forms.CheckBox checkBox_Trace1;
        private System.Windows.Forms.CheckBox checkBox_HookError;
        private System.Windows.Forms.CheckBox checkBox_ParamAccess;
        private System.Windows.Forms.TextBox textBox_SystickHandler;
        private System.Windows.Forms.CheckBox checkBox_MultiStack;
        private System.Windows.Forms.CheckBox checkBox_MultiStackIRQ;
        private System.Windows.Forms.NumericUpDown numericUpDown_IRQStackSize;
        private System.Windows.Forms.ComboBox comboBox_OSStatus;
        private System.Windows.Forms.ComboBox comboBox_KernelType;
        private System.Windows.Forms.ComboBox comboBox_CpuType;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.GroupBox groupBox_Systick;
        //private System.Windows.Forms.GroupBox groupBox_Tracer;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.GroupBox groupBox_MultiStack;
    }
}
