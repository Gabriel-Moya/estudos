﻿namespace mao_na_massa_balta.NotificationContext
{
    public sealed class Notification
    {
        public Notification() { }

        public Notification(string property, string message)
        {
            Property = property;
            Message = message;
        }

        public string Property { get; set; }
        public string Message { get; set; }
    }
}
