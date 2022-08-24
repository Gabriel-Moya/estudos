using mao_na_massa_balta.NotificationContext;
using System;

namespace mao_na_massa_balta.SharedContext
{
    public abstract class Base : Notifiable
    {
        public Base()
        {
            Id = Guid.NewGuid(); // SPOF = Single Point of Failure
        }

        public Guid Id { get; set; }
    }
}
