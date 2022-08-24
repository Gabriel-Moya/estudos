using mao_na_massa_balta.NotificationContext;
using mao_na_massa_balta.SharedContext;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace mao_na_massa_balta.SubscriptionContext
{
    public class Student : Base
    {
        public Student()
        {
            Subscriptions = new List<Subscription>();
        }

        public string Name { get; set; }
        public string Email { get; set; }
        public User User { get; set; }
        public IList<Subscription> Subscriptions { get; set; }
        public bool IsPremium => Subscriptions.Any(x => !x.IsInactive);

        public void CreateSubscription(Subscription subscription)
        {
            if (IsPremium)
            {
                AddNotification(new Notification("Premium", "O aluno já possui uma assinatura ativa"));
                return;
            }

            Subscriptions.Add(subscription);
        }
    }
}
