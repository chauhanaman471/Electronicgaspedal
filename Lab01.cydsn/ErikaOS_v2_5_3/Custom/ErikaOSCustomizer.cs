using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Windows.Forms;
using CyDesigner.Extensions.Common;
using CyDesigner.Extensions.Gde;

namespace ErikaOS_v2_5_3
{
    [CyCompDevCustomizer()]
    public partial class CyCustomizer : ICyParamEditHook_v1
    {
        private const bool editParamsOnDrop = false;
        private const CyCompDevParamEditorMode mode = CyCompDevParamEditorMode.COMPLETE;
        private ErikaOSParameters parameters;

        DialogResult ICyParamEditHook_v1.EditParams(ICyInstEdit_v1 edit, ICyTerminalQuery_v1 termQuery, ICyExpressMgr_v1 mgr)
        {
            parameters = new ErikaOSParameters(edit);
            CyParamExprDelegate paramChange = delegate(ICyParamEditor custEditor, CyCompDevParam param)
            {
                parameters.GetParams();
            };

            ICyTabbedParamEditor editor = edit.CreateTabbedParamEditor();

            editor.AddCustomPage("OS Config", new ErikaOSEditingControl(parameters), paramChange, "Properties");

            editor.AddCustomPage("Alarms & Counters", new ErikaOSEditingAlarms(parameters), paramChange, "Alarm Properties");

            editor.AddCustomPage("Events & Resources", new ErikaOSEditingEvents(parameters), paramChange, "Event Properties");

            editor.AddCustomPage("Tasks", new ErikaOSEditingTasks(parameters), paramChange, "Task Properties");

            editor.AddCustomPage("ISRs", new ErikaOSEditingISRs(parameters), paramChange, "ISR Properties");

            //editor.AddDefaultPage("Built-in", "Built-in");

            editor.AddAllDefaultPages();
            
            parameters.GetParams();

            return editor.ShowDialog();
        }

        bool ICyParamEditHook_v1.EditParamsOnDrop
        {
            get
            {
                return editParamsOnDrop;
            }
        }

        CyCompDevParamEditorMode ICyParamEditHook_v1.GetEditorMode()
        {
            return mode;
        }
    }

    public class ErikaOSEditingControl : ICyParamEditingControl
    {
        private ErikaOSControl control;

        public ErikaOSEditingControl(ErikaOSParameters parameters)
        {
            control = new ErikaOSControl(parameters);
            parameters.control = control;
            control.Dock = DockStyle.Fill;
        }

        Control ICyParamEditingControl.DisplayControl
        {
            get { return control; }
        }

        IEnumerable<CyCustErr> ICyParamEditingControl.GetErrors()
        {
            return new CyCustErr[] { };
        }
    }

    public class ErikaOSEditingTasks : ICyParamEditingControl
    {
        private ErikaOSTask task;
        
        public ErikaOSEditingTasks(ErikaOSParameters parameters)
        {
            task = new ErikaOSTask(parameters);
            parameters.task = task;
            task.Dock = DockStyle.Fill;
        }

        Control ICyParamEditingControl.DisplayControl
        {
            get { return task; }
        }

        IEnumerable<CyCustErr> ICyParamEditingControl.GetErrors()
        {
            return new CyCustErr[] { };
        }
    }

    public class ErikaOSEditingAlarms : ICyParamEditingControl
    {
        private ErikaOSAlarmsCounters alarms;

        public ErikaOSEditingAlarms(ErikaOSParameters parameters)
        {
            alarms = new ErikaOSAlarmsCounters(parameters);
            parameters.alarms = alarms;
            alarms.Dock = DockStyle.Fill;
        }

        Control ICyParamEditingControl.DisplayControl
        {
            get { return alarms; }
        }

        IEnumerable<CyCustErr> ICyParamEditingControl.GetErrors()
        {
            return new CyCustErr[] { };
        }
    }

    public class ErikaOSEditingEvents : ICyParamEditingControl
    {
        private ErikaOSEventsResources events;

        public ErikaOSEditingEvents(ErikaOSParameters parameters)
        {
            events = new ErikaOSEventsResources(parameters);
            parameters.events = events;
            events.Dock = DockStyle.Fill;
        }

        Control ICyParamEditingControl.DisplayControl
        {
            get { return events; }
        }

        IEnumerable<CyCustErr> ICyParamEditingControl.GetErrors()
        {
            return new CyCustErr[] { };
        }
    }

    public class ErikaOSEditingISRs : ICyParamEditingControl
    {
        private ErikaOSISRs isrs;

        public ErikaOSEditingISRs(ErikaOSParameters parameters)
        {
            isrs = new ErikaOSISRs(parameters);
            parameters.isrs = isrs;
            isrs.Dock = DockStyle.Fill;
        }

        Control ICyParamEditingControl.DisplayControl
        {
            get { return isrs; }
        }

        IEnumerable<CyCustErr> ICyParamEditingControl.GetErrors()
        {
            return new CyCustErr[] { };
        }
    }
}
