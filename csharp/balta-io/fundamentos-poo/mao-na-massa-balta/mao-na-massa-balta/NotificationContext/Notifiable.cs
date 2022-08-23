using System.Collections.Generic;

namespace mao_na_massa_balta.NotificationContext
{
    public abstract class Notifiable
    {
        public List<Notification> Notifications { get; set; }

        public void Add(Notification notification)
        {
            Notifications.Add(notification);
        }

        public void AddRange(IEnumerable<Notification> notifications)
        {
            Notifications.AddRange(notifications);
        }
    }
}
