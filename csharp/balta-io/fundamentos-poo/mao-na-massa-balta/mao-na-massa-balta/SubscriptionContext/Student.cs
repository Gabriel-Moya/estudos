using mao_na_massa_balta.SharedContext;

namespace mao_na_massa_balta.SubscriptionContext
{
    public class Student : Base
    {
        public string Name { get; set; }
        public string Email { get; set; }
        public User User { get; set; }
    }
}
