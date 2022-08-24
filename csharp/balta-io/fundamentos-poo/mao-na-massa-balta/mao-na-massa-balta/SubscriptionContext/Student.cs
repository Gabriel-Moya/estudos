using mao_na_massa_balta.SharedContext;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace mao_na_massa_balta.SubscriptionContext
{
    public class Student : Base
    {
        public string Name { get; set; }
        public string Email { get; set; }
        public User User { get; set; }
        public IList<Subscription> Subscriptions { get; set; }
        public bool IsPremium => Subscriptions.Any(x => !x.IsInactive);
    }
}
