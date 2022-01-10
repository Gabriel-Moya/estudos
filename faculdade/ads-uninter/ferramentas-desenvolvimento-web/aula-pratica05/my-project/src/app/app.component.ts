import { Component } from '@angular/core';
import { faturas } from './faturas';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'my-project';
  lista_faturas: any[] = faturas;

  ngOnInut(): void{
  }
}