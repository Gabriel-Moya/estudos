using mao_na_massa_balta.SharedContext;
using System;

namespace mao_na_massa_balta.SubscriptionContext
{
    public class Subscription : Base
    {
        public Plan Plan { get; set; }
        public DateTime? EndDate { get; set; }
        public bool IsInactive => EndDate <= DateTime.Now;
    }
}
