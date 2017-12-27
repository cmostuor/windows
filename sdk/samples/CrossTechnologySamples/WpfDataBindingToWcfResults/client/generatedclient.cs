﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:2.0.50727.42
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

[assembly: System.Runtime.Serialization.ContractNamespaceAttribute("http://Microsoft.ServiceModel.Samples", ClrNamespace="Microsoft.ServiceModel.Samples")]

namespace Microsoft.ServiceModel.Samples
{
    using System.Runtime.Serialization;
    
    
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Runtime.Serialization", "3.0.0.0")]
    [System.Runtime.Serialization.DataContractAttribute()]
    public partial class CalcResult : object, System.Runtime.Serialization.IExtensibleDataObject, System.ComponentModel.INotifyPropertyChanged
    {
        
        private System.Runtime.Serialization.ExtensionDataObject extensionDataField;
        
        private double NumberField;
        
        private string WordsField;
        
        public System.Runtime.Serialization.ExtensionDataObject ExtensionData
        {
            get
            {
                return this.extensionDataField;
            }
            set
            {
                this.extensionDataField = value;
            }
        }
        
        [System.Runtime.Serialization.DataMemberAttribute()]
        public double Number
        {
            get
            {
                return this.NumberField;
            }
            set
            {
                if ((this.NumberField.Equals(value) != true))
                {
                    this.NumberField = value;
                    this.RaisePropertyChanged("Number");
                }
            }
        }
        
        [System.Runtime.Serialization.DataMemberAttribute()]
        public string Words
        {
            get
            {
                return this.WordsField;
            }
            set
            {
                if ((((object)(this.WordsField)) != ((object)(value))))
                {
                    this.WordsField = value;
                    this.RaisePropertyChanged("Words");
                }
            }
        }
        
        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;
        
        protected void RaisePropertyChanged(string propertyName)
        {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null))
            {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }
    
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "3.0.0.0")]
    [System.ServiceModel.ServiceContractAttribute(Namespace="http://Microsoft.ServiceModel.Samples", ConfigurationName="Microsoft.ServiceModel.Samples.ICalcPlus")]
    public interface ICalcPlus
    {
        
        [System.ServiceModel.OperationContractAttribute(Action="http://Microsoft.ServiceModel.Samples/ICalcPlus/Add", ReplyAction="http://Microsoft.ServiceModel.Samples/ICalcPlus/AddResponse")]
        Microsoft.ServiceModel.Samples.CalcResult Add(double n1, double n2);
        
        [System.ServiceModel.OperationContractAttribute(AsyncPattern=true, Action="http://Microsoft.ServiceModel.Samples/ICalcPlus/Add", ReplyAction="http://Microsoft.ServiceModel.Samples/ICalcPlus/AddResponse")]
        System.IAsyncResult BeginAdd(double n1, double n2, System.AsyncCallback callback, object asyncState);
        
        Microsoft.ServiceModel.Samples.CalcResult EndAdd(System.IAsyncResult result);
        
        [System.ServiceModel.OperationContractAttribute(Action="http://Microsoft.ServiceModel.Samples/ICalcPlus/Subtract", ReplyAction="http://Microsoft.ServiceModel.Samples/ICalcPlus/SubtractResponse")]
        Microsoft.ServiceModel.Samples.CalcResult Subtract(double n1, double n2);
        
        [System.ServiceModel.OperationContractAttribute(AsyncPattern=true, Action="http://Microsoft.ServiceModel.Samples/ICalcPlus/Subtract", ReplyAction="http://Microsoft.ServiceModel.Samples/ICalcPlus/SubtractResponse")]
        System.IAsyncResult BeginSubtract(double n1, double n2, System.AsyncCallback callback, object asyncState);
        
        Microsoft.ServiceModel.Samples.CalcResult EndSubtract(System.IAsyncResult result);
        
        [System.ServiceModel.OperationContractAttribute(Action="http://Microsoft.ServiceModel.Samples/ICalcPlus/Multiply", ReplyAction="http://Microsoft.ServiceModel.Samples/ICalcPlus/MultiplyResponse")]
        Microsoft.ServiceModel.Samples.CalcResult Multiply(double n1, double n2);
        
        [System.ServiceModel.OperationContractAttribute(AsyncPattern=true, Action="http://Microsoft.ServiceModel.Samples/ICalcPlus/Multiply", ReplyAction="http://Microsoft.ServiceModel.Samples/ICalcPlus/MultiplyResponse")]
        System.IAsyncResult BeginMultiply(double n1, double n2, System.AsyncCallback callback, object asyncState);
        
        Microsoft.ServiceModel.Samples.CalcResult EndMultiply(System.IAsyncResult result);
        
        [System.ServiceModel.OperationContractAttribute(Action="http://Microsoft.ServiceModel.Samples/ICalcPlus/Divide", ReplyAction="http://Microsoft.ServiceModel.Samples/ICalcPlus/DivideResponse")]
        Microsoft.ServiceModel.Samples.CalcResult Divide(double n1, double n2);
        
        [System.ServiceModel.OperationContractAttribute(AsyncPattern=true, Action="http://Microsoft.ServiceModel.Samples/ICalcPlus/Divide", ReplyAction="http://Microsoft.ServiceModel.Samples/ICalcPlus/DivideResponse")]
        System.IAsyncResult BeginDivide(double n1, double n2, System.AsyncCallback callback, object asyncState);
        
        Microsoft.ServiceModel.Samples.CalcResult EndDivide(System.IAsyncResult result);
    }
    
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "3.0.0.0")]
    public interface ICalcPlusChannel : Microsoft.ServiceModel.Samples.ICalcPlus, System.ServiceModel.IClientChannel
    {
    }
    
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "3.0.0.0")]
    public partial class CalcPlusClient : System.ServiceModel.ClientBase<Microsoft.ServiceModel.Samples.ICalcPlus>, Microsoft.ServiceModel.Samples.ICalcPlus
    {
        
        public CalcPlusClient()
        {
        }
        
        public CalcPlusClient(string endpointConfigurationName) : 
                base(endpointConfigurationName)
        {
        }
        
        public CalcPlusClient(string endpointConfigurationName, string remoteAddress) : 
                base(endpointConfigurationName, remoteAddress)
        {
        }
        
        public CalcPlusClient(string endpointConfigurationName, System.ServiceModel.EndpointAddress remoteAddress) : 
                base(endpointConfigurationName, remoteAddress)
        {
        }
        
        public CalcPlusClient(System.ServiceModel.Channels.Binding binding, System.ServiceModel.EndpointAddress remoteAddress) : 
                base(binding, remoteAddress)
        {
        }
        
        public Microsoft.ServiceModel.Samples.CalcResult Add(double n1, double n2)
        {
            return base.Channel.Add(n1, n2);
        }
        
        public System.IAsyncResult BeginAdd(double n1, double n2, System.AsyncCallback callback, object asyncState)
        {
            return base.Channel.BeginAdd(n1, n2, callback, asyncState);
        }
        
        public Microsoft.ServiceModel.Samples.CalcResult EndAdd(System.IAsyncResult result)
        {
            return base.Channel.EndAdd(result);
        }
        
        public Microsoft.ServiceModel.Samples.CalcResult Subtract(double n1, double n2)
        {
            return base.Channel.Subtract(n1, n2);
        }
        
        public System.IAsyncResult BeginSubtract(double n1, double n2, System.AsyncCallback callback, object asyncState)
        {
            return base.Channel.BeginSubtract(n1, n2, callback, asyncState);
        }
        
        public Microsoft.ServiceModel.Samples.CalcResult EndSubtract(System.IAsyncResult result)
        {
            return base.Channel.EndSubtract(result);
        }
        
        public Microsoft.ServiceModel.Samples.CalcResult Multiply(double n1, double n2)
        {
            return base.Channel.Multiply(n1, n2);
        }
        
        public System.IAsyncResult BeginMultiply(double n1, double n2, System.AsyncCallback callback, object asyncState)
        {
            return base.Channel.BeginMultiply(n1, n2, callback, asyncState);
        }
        
        public Microsoft.ServiceModel.Samples.CalcResult EndMultiply(System.IAsyncResult result)
        {
            return base.Channel.EndMultiply(result);
        }
        
        public Microsoft.ServiceModel.Samples.CalcResult Divide(double n1, double n2)
        {
            return base.Channel.Divide(n1, n2);
        }
        
        public System.IAsyncResult BeginDivide(double n1, double n2, System.AsyncCallback callback, object asyncState)
        {
            return base.Channel.BeginDivide(n1, n2, callback, asyncState);
        }
        
        public Microsoft.ServiceModel.Samples.CalcResult EndDivide(System.IAsyncResult result)
        {
            return base.Channel.EndDivide(result);
        }
    }
}
