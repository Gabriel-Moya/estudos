import { CartItem } from './cart-item.model';

export class Cart {
    constructor(
        public items: CartItem[] = []
    ) {

    }
}
